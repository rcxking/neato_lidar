/*
 * NeatoLidar.cpp
 *
 * Implementation of a class to read data from the Neato Lidar.
 *
 * Bryant Pong
 * 7/23/16
 *
 * Last Updated: 7/23/16    
 */

// Custom Includes:
#include "NeatoLidar.h"

// STL Includes:
#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// Turn this flag on for debugging messages:
#define DEBUGON

/***** MACROS *****/
#ifdef DEBUGON

#else

#endif

