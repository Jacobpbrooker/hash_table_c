#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


void hashInit(int* hashTable, int* input, int M, int R)
{
	int k = 0;
	int j = 0;

	bool flag = false;														// flag to check if there is a value in the array

	for (int i = 0; i < M; i++)
	{
		j = 0;//j = i;	it was supposed to be start at 0, not go the next point after i			// set j to i (will use later if collision we can increment j)
		while (!flag)
		{
			//k = ((input[j] % M) + ((R - (input[j]) % R) * j)) % M;			// hashing function - starts at i = 0 therefore only one equation req
			
			// i becuase its suposed to be going with the same value at i everytime, not changing the value
			k = ((input[i] % M) + ((R - (input[i]) % R) * j)) % M;



			// if my input was bigger than the table this would have been an infinitie loop - needed exit condition
			if (hashTable[k] == NULL)										// if no value in hash array @ element, place input value
			{
				hashTable[k] = input[i];
				flag = true;												// set flag to break loop
			}
			else if (j >i)
			{
				printf("Needed to exit loop\n");
				return;
			}
			else
				j++;														// there was value in hash array, increment j and re hash
		}
		flag = false;														// reset flag
	}
}
