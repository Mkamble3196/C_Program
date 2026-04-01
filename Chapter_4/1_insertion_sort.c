#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int array[10];
	int i = 0;
	int j = 0;
	int temp = 0;

	puts("Enter Array Elements");
	for(i = 0; i < 10; i++)
		scanf("%d",&array[i]);

	for(i = 1 ; i < 10 ; i++)
	{
		temp = array[i];
		j = i - 1;

		while( j > -1 && array[j] > temp)
		{
			array[j + 1] = array[j];
			j--;
		}
	
		array[j + 1] = temp;
	
	
	}

	for(i = 0; i < 10; i++)
		printf("%d ",array[i]);

	return 0;
}
