#include <osgParticle/ParticleEffect>
#include <osg/io_utils>

#include <osgDB/Registry>
#include <osgDB/Input>
#include <osgDB/Output>

#include <osg/Notify>

bool  ParticleEffect_readLocalData(osg::Object &obj, osgDB::Input &fr);
bool  ParticleEffect_writeLocalData(const osg::Object &obj, osgDB::Output &fw);

osgDB::RegisterDotOsgWrapperProxy  ParticleEffect_Proxy
(
    0,
    "ParticleEffect",
    "Object Node ParticleEffect",
    ParticleEffect_readLocalData,
    ParticleEffect_writeLocalData
);

bool ParticleEffect_readLocalData(osg::Object& object, osgDB::Input& fr)
{
    osgParticle::ParticleEffect& effect = static_cast<osgParticle::ParticleEffect&>(object);
    bool itrAdvanced = false;

    if (fr.matchSequence("position %f %f %f"))
    {
        osg::Vec3 position;
        fr[1].getFloat(position[0]);
        fr[2].getFloat(position[1]);
        fr[3].getFloat(position[2]);
    
        effect.setPosition(position);

        fr += 4;
        itrAdvanced = true;
    }

    if (fr.matchSequence("scale %f"))
    {
        float scale;
        fr[1].getFloat(scale);
        effect.setScale(scale);
        
        fr += 2;
        itrAdvanced = true;
    }
    
    if (fr.matchSequence("intensity %f"))
    {
        float intensity;
        fr[1].getFloat(intensity);
        effect.setIntensity(intensity);
        
        fr += 2;
        itrAdvanced = true;
    }

    if (fr.matchSequence("startTime %f"))
    {
        float startTime;
        fr[1].getFloat(startTime);
        effect.setStartTime(startTime);
        
        fr += 2;
        itrAdvanced = true;
    }

    if (fr.matchSequence("emitterDuration %f"))
    {
        float emitterDuration;
        fr[1].getFloat(emitterDuration);
        effect.setEmitterDuration(emitterDuration);
        
        fr += 2;
        itrAdvanced = true;
    }

    if (fr.matchSequence("particleDuration %f"))
    {
        float particleDuration;
        fr[1].getFloat(particleDuration);
        effect.setParticleDuration(particleDuration);
        
        fr += 2;
        itrAdvanced = true;
    }


    if (fr.matchSequence("wind %f %f %f"))
    {
        osg::Vec3 wind;
        fr[1].getFloat(wind[0]);
        fr[2].getFloat(wind[1]);
        fr[3].getFloat(wind[2]);
    
        effect.setWind(wind);
        
        fr += 4;
        itrAdvanced = true;
    }
    
    if (fr[0].matchWord("useLocalParticleSystem"))
    {
        if (fr[1].matchWord("FALSE"))
        {
            effect.setUseLocalParticleSystem(false);
            fr+=2;
            itrAdvanced = true;

            // now read the particle system that is shared with an node external to this particle effect
            osg::ref_ptr<osg::Object> readObject = fr.readObjectOfType(osgDB::type_wrapper<osgParticle::ParticleSystem>());
            if (readObject.valid())
            {
                osgParticle::ParticleSystem* ps = static_cast<osgParticle::ParticleSystem*>(readObject.get());
                effect.setParticleSystem(ps);
                itrAdvanced = true;
            }

        }
        else if (fr[1].matchWord("TRUE"))
        {
            effect.setUseLocalParticleSystem(true);
            fr+=2;
            itrAdvanced = true;
        }
    }



    return itrAdvanced;
}

bool ParticleEffect_writeLocalData(const osg::Object& object, osgDB::Output& fw)
{
    const osgParticle::ParticleEffect& effect = static_cast<const osgParticle::ParticleEffect&>(object);
    
    fw.indent()<<"position "<<effect.getPosition()<<std::endl;
    fw.indent()<<"scale "<<effect.getScale()<<std::endl;
    fw.indent()<<"intensity "<<effect.getIntensity()<<std::endl;
    fw.indent()<<"startTime "<<effect.getStartTime()<<std::endl;
    fw.indent()<<"emitterDuration "<<effect.getEmitterDuration()<<std::endl;
    fw.indent()<<"particleDuration "<<effect.getParticleDuration()<<std::endl;
    fw.indent()<<"wind "<<effect.getWind()<<std::endl;

    fw.indent()<<"useLocalParticleSystem ";
    if (effect.getUseLocalParticleSystem()) fw<<"TRUE"<<std::endl;
    else 
    {
        fw<<"FALSE"<<std::endl;
        fw.writeObject(*effect.getParticleSystem());
    }

    return true;
}
