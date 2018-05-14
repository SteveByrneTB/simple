#include "SimpleClass.h"

/** @brief Simple Function which compares two integers and returns true/false
*
* @param a first integer for comparison
* @param b second integer for comparison
* @return result of comparison
*/
bool SimpleClass::Comparison(const uint16_t a, const uint16_t b)
{
	bool result;

	// Purposely complex and incorrect to produce test failures 
	// and compiler warnings and code coverage branches
	if (a > 5)//b)
	{
		result = false;
	}
	else if (a == 5)//b)
	{
		result = true;
	}
	else
	{
		result = true;// false;
	}

	return result;
}

