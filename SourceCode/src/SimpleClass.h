#ifndef SIMPLECLASS_H
#define SIMPLECLASS_H

#include  <SimpleClassInterface.h>

/**
* \class SimpleClass
*
*
* \brief 
*
* This class is meant as an example to demonstrate how to write
* Doxygen tags.
*
* \author $Author: Steve Byrne $
*
* \date $Date: 07/05/2018 $
*
*/

class SimpleClass : public SimpleClassInterface
{

public:
	/*
	* \fn
	* \brief Simple Function: Compares two integers and returns true/false
	* \param a first integer for comparison
	* \param b second integer for comparison
	* \return result of comparison
	*/
	bool Comparison (const uint16_t a, const uint16_t b);

};

#endif // !SIMPLECLASS_H

