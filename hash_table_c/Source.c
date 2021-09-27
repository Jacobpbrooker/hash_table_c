#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "hash.h"

#define LENGTH 11
#define R 7

int main(void)
{
	int hashArray[LENGTH] = {0};

	int input[LENGTH] = { 742, 33699, 125, 96, 47744, 21349, 100023, 1, 52, 888, 777};

	hashInit(hashArray, input, LENGTH, R);
	
	printf("Input Array\n");
	for (int i = 0; i < LENGTH; i++)
		printf("Array Position - %d | Value - %d\n", i, input[i]);
	
	printf("\nHash Array\n");
	for (int i = 0; i < LENGTH; i++)
		printf("Array Position - %d | Value - %d\n", i, hashArray[i]);

	exit(EXIT_SUCCESS);
}
