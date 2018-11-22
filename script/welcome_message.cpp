#include <gazebo/gazebo.hh>

namespace gazebo
{
    class WorldPluginBBDroid : public WorldPlugin
    {
        public: WorldPluginBBDroid() : WorldPlugin()
        {
     	    printf("Welcome to Mano Paul's BBDroid World!\n");
        }
        public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
	{
	}
    };
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginBBDroid)
}
