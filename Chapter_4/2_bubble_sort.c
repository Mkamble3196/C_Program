#include <stdio.h>

#define NUM 5

void bubble_sort(int *array, int ele)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	for(i = 0 ; i < ele - 1 ; i++)
		for(j = 0; j < ele - 1 - i; j++)
			if(array[j] > array[j + 1])
			{
			    temp = array[j + 1];
		            array[j + 1] = array[j];
			    array[j] = temp;
			}

}

int main(void)
{

	int array[NUM];

	puts("Enter Array Elements:-");
	for(int i = 0; i < NUM; i++)
		scanf("%d", &array[i]);

	bubble_sort(array, NUM);

	for(int i = 0; i < NUM; i++)
		printf("%d ",array[i]);

	return 0;
}

