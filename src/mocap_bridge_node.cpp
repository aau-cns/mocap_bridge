// Copyright (C) 2021 Alessandro Fornasier,
// Control of Networked Systems, Universitaet Klagenfurt, Austria
//
// You can contact the author at <alessandro.fornasier@ieee.org>
//
// All rights reserved.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.

#include "mocap_bridge.h"
#include <ros/ros.h>
#include <string>

// Main function
int main(int argc, char** argv) {

  // Launch ros node
  ros::init(argc, argv, "estimator_supervisor");
  ros::NodeHandle nh("~");

  ROS_INFO("Starting the Estimator Supervisor");

  // Define topics
  std::string subscriber_topic = "/twins_three/vrpn_client/raw_pose";
  std::string publisher_topic = "mocap_bridge/external_core_state";

  // Instanciate the supervisor
  MocapBridge MocapBridge(nh, subscriber_topic, publisher_topic);

  // Done!
  std::cout << std::endl;
  ROS_INFO("Done!");
  return EXIT_SUCCESS;

}
