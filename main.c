#include "armstrong_numbers.h"
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

int compute_sum(int candidate);
bool is_armstrong_number(int candidate);

int main(void)
{
	if (is_armstrong_number(9926315))
		printf("TRUE\n");
	else
		printf("FALSE\n");
}
