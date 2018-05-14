/**
* @class SimpleClassInterface
*
*
* @brief
*
* This interface is meant as an example to demonstrate how to write
* Doxygen tags.
*
* @author Steve Byrne
*
* @date 07/05/2018
*
*/

#ifndef SIMPLECLASSINTERFACE_H
#define SIMPLECLASSINTERFACE_H

#include "stdint.h"

class SimpleClassInterface
{

public:
	/** @brief Simple Function which compares two integers and returns true/false
	*
	* @param a first integer for comparison
	* @param b second integer for comparison
	* @return result of comparison
	*/
	virtual bool Comparison (const uint16_t a, const uint16_t b) = 0;
};

#endif // !SIMPLECLASSINTERFACE_H

