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
	
		printf("before list[%d] = %d\n",i,list[i]);
		for(j = i + 1; j < NUM; j++)
			if(list[j] < list[min])
			{
				min = j;
			printf("\nmin= %d\tj = %d\t list[j=%d]= %d\tlist[m= %d]=%d\n", min, j,j,list[j], min, list[min]);
			}
		
		{
			printf("\nmin= %d\ti = %d\t", min, i);
			temp = list[min];
			list[min] = list[i];
			list[i] = temp;
		}	
	
		printf("afterlist[%d] =%d\n ",i, list[i]);
	}
	
	printf("\n");

	for(i = 0; i < NUM; i++)
		printf("%d ",list[i]);

	printf("\n");

	return 0;
}
