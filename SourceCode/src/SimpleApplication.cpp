// SimpleApplication.cpp : Defines the entry point for the console application.
//

#include "SimpleClass.h"
#include "stdio.h"

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

