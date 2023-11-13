#include <stdio.h>
#include <stdlib.h>

int rand(void) 
{
	static int sequence[] = {8, 8, 7, 9, 23, 74};

	static int current_index = 0;

	int result = sequence[current_index];

	 current_index = (current_index + 1);
	 return result;
}
