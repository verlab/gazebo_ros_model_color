#include <gazebo/common/Plugin.hh>
#include <ros/ros.h>

#include <ignition/math/Color.hh>

#include <gazebo/rendering/Visual.hh>


#include <std_msgs/ColorRGBA.h>

namespace gazebo
{
    class VisualPluginTutorial : public VisualPlugin
    {
        public:
        VisualPluginTutorial() : VisualPlugin(){}

        void Load(rendering::VisualPtr _visual, sdf::ElementPtr _sdf){
            // Make sure the ROS node for Gazebo has already been initialized                                                                                    
            if (!ros::isInitialized())
            {
            ROS_FATAL_STREAM("A ROS node for Gazebo has not been initialized, unable to load plugin. "
                << "Load the Gazebo system plugin 'libgazebo_ros_api_plugin.so' in the gazebo_ros package)");
            return;
            }
            //ignition::math::Color color(0, 1, 0, 1);
            //_visual->SetDiffuse(color);
            //_visual->SetAmbient(color);
            //_visual->SetTransparency(1-color.A());

            ROS_INFO("Hello World!");
        }

    };
    GZ_REGISTER_VISUAL_PLUGIN(VisualPluginTutorial)
}