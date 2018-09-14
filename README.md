# Gazebo ROS Model Color
[![Build Status](https://img.shields.io/teamcity/http/teamcity.jetbrains.com/s/bt345.svg)](https://www.verlab.dcc.ufmg.br/gazebo_ros_model_color)
[![Version](https://img.shields.io/badge/version-1.0-brightgreen.svg)](https://www.verlab.dcc.ufmg.br/gazebo_ros_model_color)
[![License](https://img.shields.io/badge/license-GPL--3.0-blue.svg)](LICENSE)

This package contains a gazebo ros plugin which allows the user to modified dynamicly the color of the objects.

## Status 
- [x] Compilation
- [ ] Fix some problem with gazebo_ros_api. This occurs due I change from model to visual class.


## References
- https://bitbucket.org/osrf/gazebo/src/aab36be8994a/plugins/?at=default
- http://answers.gazebosim.org/question/1377/visuals-material-update-from-modelplugin-in-ros-gazebo/
- How to create a gazebo ros plugin: http://gazebosim.org/tutorials?tut=ros_plugins

## Usage ##
This is an example how to use this plugin. Once imported it into a object, ROS should be able to provide a service to change the object color.

```xml
    <model name="box_wall">
      <pose>2 0 0.5 0 0 0</pose>
      <link name="link">
        <collision name="collision">
          <geometry>
            <box>
              <size>1 1 1</size>
            </box>
          </geometry>
        </collision>
        <visual name="visual">
          <geometry>
            <box>
              <size>1 1 1</size>
            </box>
          </geometry>
          <plugin name="gazebo_ros_model_color" filename="libgazebo_ros_model_color.so">
          </plugin>
        </visual>
      </link>
    </model>
```

## Institution ##

Federal University of Minas Gerais (UFMG)  
Computer Science Department  
Belo Horizonte - Minas Gerais -Brazil 

## Laboratory ##

![VeRLab](https://www.dcc.ufmg.br/dcc/sites/default/files/public/verlab-logo.png)
