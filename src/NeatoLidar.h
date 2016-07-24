/*
 * NeatoLidar.h
 *
 * This header file gives prototypes and constants for an object
 * that can read data from the Neato Robotics LIDAR.
 *
 * Bryant Pong
 * 7/23/16
 *
 * Last Updated: 7/23/16    
 */
#ifndef _NEATO_LIDAR_H_
#define _NEATO_LIDAR_H_

/***** INCLUDES *****/
#include <string>

/***** CLASS DEFINITIONS *****/
class NeatoLidar {

// Typedefs:
typedef unsigned char uchar_t;

public:
	// Constructor/Destructor:
	NeatoLidar( const std::string& LIDAR_PORT );

	// Member Functions:
	bool ConnectToLidar() const; 
			

	// Accessor/Setter Functions:
	void SetLidarPort( const std::string& NEW_PORT );
	std::string GetLidarPort() const;   

private:
	// The port assigned to this LIDAR:
	std::string lidarPort_; 
};

#endif
