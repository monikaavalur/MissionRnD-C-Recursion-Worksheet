/*

	You have N steps to climb .
	You can either take one step or two steps at a time .
	You need to find the total number of ways you can reach N steps .

	Example : For N=4 , You can either reach 4 steps in following ways
	->1111
	->112
	->211
	->22
	So total number of ways is 4

	Input : A Integer denoting N (number of steps )
	Output : Return an Integer denoting the number of ways to reach N steps

	Example Input : get_steps(5)
	Example Output : Returns 8

	Note : Test Cases would be small <25.

*/
#include "stdafx.h"

int fib(int);
int get_steps(int s)
{
	int no_of_steps = fib(s+1);
	return no_of_steps;
}
int fib(int s)
{
	if (s <= 1)
		return s;
	else
		return fib(s - 1) + fib(s - 2);
}
