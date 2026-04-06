#include<stdio.h>
#define NUM 6

int main(void)
{

	int list[NUM];
	int i = 0;
	int j = 0;
	int temp = 0;
	int min = 0;

	puts("Enter the Elements:-");
	for(i = 0 ; i < NUM ; i++)
		scanf("%d", &list[i]);

	for(i = 0; i < NUM - 1; i++)
	{
		min = i;
		for(j = i + 1; j < NUM; j++)
			if(list[j] < list[min])
				min = j;
		{
			temp = list[min];
			list[min] = list[i];
			list[i] = temp;
		}	
	
	}
	
	for(i = 0; i < NUM; i++)
		printf("%d ",list[i]);

	printf("\n");

	return 0;
}
