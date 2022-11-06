#include "armstrong_numbers.h"
#include <stdbool.h>
#include <math.h>
#include <stdio.h>

int get_numberofdigits(int candidate)
{
	int Numberofdigits=0;

	while(candidate != 0)
	{
		candidate = candidate / 10;
		++Numberofdigits;
	}
	return (Numberofdigits);
}

int compute_sum(int candidate)
{
	int Numberofdigits, r, theSum = 0;
	Numberofdigits = get_numberofdigits(candidate);

	if (Numberofdigits == 1)
		 return (candidate);

	while (candidate > 0)
	{
		r = candidate % 10;
		theSum = theSum + pow(r, Numberofdigits);
		candidate = candidate / 10;
	}
	return (theSum);
}

bool is_armstrong_number(int candidate)
{
	int candidate2 = compute_sum(candidate);

	printf("%d\n", candidate2);

	if (candidate2 == candidate)
		return (true);
	else
		return (false);
}
