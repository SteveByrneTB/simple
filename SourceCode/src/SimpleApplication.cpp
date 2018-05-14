/**
* @file SimpleApplication
*
*
* @brief
*
* Defines the entry point for the console application.
*
* @author Steve Byrne
*
* @date 07/05/2018
*
*/

#include "SimpleClass.h"
#include "stdio.h"

/** @brief main function of application
*/
int main()
{
	SimpleClass sc;

	if (sc.Comparison (1, 10))
	{
		printf ("EQUAL");
	}
	else
	{
		printf ("NOT EQUAL");
	}

    return 0;
}

