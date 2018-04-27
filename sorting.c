#include <stdio.h>
#include <stdlib.h>
#include "QSort.h"
#define print_space puts("\n")

int main()
{
	int size;
	
	puts("Insert a size of an array to sort:");
	
	scanf("%d", &size);
	
	int array[size];
	
	for (int i = 0; i < size; i++)
	{
		array[i] = rand()%200;
		printf("[%d] ", array[i]);
	}
	
	print_space;
	
	Qsort(array,0,size-1); 
	
	printf("Sorted Array:");
	  
	print_space;
	
	for (int i = 0; i < size; i++)
	{
		printf("[%d] ", array[i]);
	}
return 0;
}

