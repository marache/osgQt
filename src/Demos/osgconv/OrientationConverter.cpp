#include <stdio.h>

#include <osg/Transform>
#include <osgUtil/Optimizer>

#include "OrientationConverter.h"

using namespace osg;

OrientationConverter::OrientationConverter( void )
{
   R.makeIdentity();
   T.makeIdentity();
   _trans_set = false;
   S.makeIdentity();
}

void OrientationConverter::setRotation( const Vec3 &from, const Vec3 &to )
{
    R = Matrix::rotate( from, to );
}

void OrientationConverter::setTranslation( const Vec3 &trans )
{
    T = Matrix::translate(trans);
    _trans_set = true;
}

void OrientationConverter::setScale( const Vec3 &scale )
{
    S = Matrix::scale(scale);
}


Node* OrientationConverter::convert( Node *node )
{
    // Order of operations here is :
    // 1. Translate to world origin (0,0,0)
    // 2. Rotate to new orientation
    // 3. Scale in new orientation coordinates
    // 4. If an absolute translation was specified then
    //        - translate to absolute translation in world coordinates
    //    else
    //        - translate back to model's original origin. 
    BoundingSphere bs = node->getBound();
    Matrix C = Matrix::translate( -bs.center() );
    if( _trans_set == false )
        T = Matrix::translate( bs.center() );

    osg::Group* root = new osg::Group;
    osg::Transform* transform = new osg::Transform;

    transform->setType(osg::Transform::STATIC);
    transform->setMatrix( C * R * S * T );
    
    root->addChild(transform);
    transform->addChild(node);

    osgUtil::Optimizer::FlattenStaticTransformsVisitor fstv;
    node->accept(fstv);
    fstv.removeTransforms();
    
    return root->getChild(0);
}
