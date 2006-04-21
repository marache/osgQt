/* -*-c++-*- OpenSceneGraph - Copyright (C) 1998-2005 Robert Osfield 
 *
 * This library is open source and may be redistributed and/or modified under  
 * the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or 
 * (at your option) any later version.  The full license is in LICENSE file
 * included with this distribution, and on the openscenegraph.org website.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * OpenSceneGraph Public License for more details.
*/

#ifndef OSGPARTICLE_PRECIPITATIONEFFECT
#define OSGPARTICLE_PRECIPITATIONEFFECT

#include <osg/Group>
#include <osg/BoundingBox>
#include <osg/ClearNode>
#include <osg/Fog>

#include <osgUtil/CullVisitor>

#include <osgParticle/Export>

#include "PrecipitationDrawable.h"

namespace osgParticle
{

    class OSGPARTICLE_EXPORT PrecipitationEffect : public osg::Group
    {
    public:
    
        PrecipitationEffect();
        PrecipitationEffect(const PrecipitationEffect& copy, const osg::CopyOp& copyop = osg::CopyOp::SHALLOW_COPY);

        virtual const char* libraryName() const { return "osgParticle"; }
        virtual const char* className() const { return "PrecipitationEffect"; }
        virtual bool isSameKindAs(const osg::Object* obj) const { return dynamic_cast<const PrecipitationEffect*>(obj) != 0; }
        virtual void accept(osg::NodeVisitor& nv) { if (nv.validNodeMask(*this)) { nv.pushOntoNodePath(this); nv.apply(*this); nv.popFromNodePath(); } }

        virtual void traverse(osg::NodeVisitor& nv);

        void setParameters(PrecipitationParameters* parameters);
        
        PrecipitationParameters* getParameters() { return _parameters.get(); }
        
        const PrecipitationParameters* getParameters() const { return _parameters.get(); }
        
        void compileGLObjects(osg::State& state) const;

        void update();

    protected:
    
        virtual ~PrecipitationEffect() {}
        
        void createGeometry(unsigned int numParticles, 
                            osg::Geometry* quad_geometry, 
                            osg::Geometry* line_geometry,
                            osg::Geometry* point_geometry);
                    
        void setUpGeometries(unsigned int numParticles);

        struct PrecipitationDrawableSet
        {
            void setParameters(PrecipitationParameters* parameters)
            {
                if (_quadPrecipitationDrawable.valid()) _quadPrecipitationDrawable->setParameters(parameters);
                if (_linePrecipitationDrawable.valid()) _linePrecipitationDrawable->setParameters(parameters);
                if (_pointPrecipitationDrawable.valid()) _pointPrecipitationDrawable->setParameters(parameters);
            }
            
            osg::ref_ptr<PrecipitationDrawable> _quadPrecipitationDrawable;
            osg::ref_ptr<PrecipitationDrawable> _linePrecipitationDrawable;
            osg::ref_ptr<PrecipitationDrawable> _pointPrecipitationDrawable;
        };
        
        void cull(PrecipitationDrawableSet& pds, osgUtil::CullVisitor* cv) const;
        bool build(const osg::Vec3 eyeLocal, int i, int j, int k, PrecipitationDrawableSet& pds, osg::Polytope& frustum, osgUtil::CullVisitor* cv) const;

        osg::ref_ptr<PrecipitationParameters> _parameters;

        // elements for the subgraph
        osg::ref_ptr<osg::ClearNode>    _clearNode;
        osg::ref_ptr<osg::Fog>          _fog;


        typedef std::pair< osg::NodeVisitor*, osg::NodePath > ViewIdenitifier;
        typedef std::map< ViewIdenitifier, PrecipitationDrawableSet >  ViewDrawableMap;

        OpenThreads::Mutex _mutex;
        ViewDrawableMap _viewDrawableMap;
        
        osg::ref_ptr<osg::StateSet>     _precipitationStateSet;
        
        osg::ref_ptr<osg::Geometry> _quadGeometry;
        osg::ref_ptr<osg::StateSet> _quadStateSet;

        osg::ref_ptr<osg::Geometry> _lineGeometry;
        osg::ref_ptr<osg::StateSet> _lineStateSet;

        osg::ref_ptr<osg::Geometry> _pointGeometry;
        osg::ref_ptr<osg::StateSet> _pointStateSet;


        osg::Vec3 _origin;
        osg::Vec3 _du;
        osg::Vec3 _dv;
        osg::Vec3 _dw;
        osg::Vec3 _inverse_du;
        osg::Vec3 _inverse_dv;
        osg::Vec3 _inverse_dw;

    };

}

#endif
