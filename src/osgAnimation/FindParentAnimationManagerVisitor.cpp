/*  -*-c++-*- 
 *  Copyright (C) 2008 Cedric Pinson <cedric.pinson@plopbyte.net>
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

#include <osgAnimation/FindParentAnimationManagerVisitor>
#include <osgAnimation/AnimationManagerBase>

osgAnimation::FindParentAnimationManagerVisitor::FindParentAnimationManagerVisitor() : osg::NodeVisitor(osg::NodeVisitor::TRAVERSE_PARENTS) {}
void osgAnimation::FindParentAnimationManagerVisitor::apply(osg::Node& node)
{
    if (_manager.valid())
        return;
    osg::NodeCallback* callback = node.getUpdateCallback();
    while (callback) 
    {
        _manager = dynamic_cast<osgAnimation::AnimationManagerBase*>(callback);
        if (_manager.valid())
            return;
        callback = callback->getNestedCallback();
    }
    traverse(node);
}

osgAnimation::AnimationManagerBase* osgAnimation::FindParentAnimationManagerVisitor::getAnimationManager() { return _manager.get(); }
