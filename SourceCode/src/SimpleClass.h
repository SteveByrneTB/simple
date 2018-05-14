/**
* @class SimpleClass
*
*
* @brief
*
* This class is meant as an example to demonstrate how to write
* Doxygen tags.
*
* @author Steve Byrne
*
* @date 07/05/2018
*
*/

#ifndef SIMPLECLASS_H
#define SIMPLECLASS_H

#include  <SimpleClassInterface.h>

class SimpleClass : public SimpleClassInterface
{

public:
	/** @brief Simple Function which compares two integers and returns true/false
	*
	* @param a first integer for comparison
	* @param b second integer for comparison
	* @return result of comparison
	*/
	bool Comparison (const uint16_t a, const uint16_t b);

};

#endif // !SIMPLECLASS_H

