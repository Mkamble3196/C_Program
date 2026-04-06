#include <stdio.h>

#define NUM 20

void writing_elements(int *array, int ele, char *msg)
{
	puts(msg);

	for(int i = 0; i < ele; i++)
	{
		scanf("%d",&array[i]);
	}


}

void printing(const int *array, int ele, char *msg)
{
	puts(msg);
	for(int i = 0 ; i < ele ; i++)
		printf("%d ", array[i]);
	printf("\n");
}


void sort_array(int *array, int ele, char *msg)
{
	int l = 0;
	int m = 0;
	int temp = 0;

	puts(msg);

	for(l = 0; l < ele; l++)
	{
		temp = array[l];
		m = l - 1;

		while(m > -1 && array[m] > temp)
		{
			array[m + 1] = array[m];
			m--;
		}
		array[m + 1] = temp;
	}

}

void  merge_array(int *array_1, int *array_2,int *m_array, int ele_1, int ele_2, char *msg)
{
	int ele = ele_1 + ele_2;
	puts(msg);

	for(int i = 0; i < ele ; i++)
	{
		if (i < ele_1)
			m_array[i] = array_1[i];
		else
			m_array[i] = array_2[i - ele_1];
	}
	
	sort_array(m_array, ele, "Sorting Merge array");
}

int main(void)
{
	int array_1[NUM];
	int array_2[NUM];
	int i = 0;
	int j = 0;
	int ele_1 = 0;
	int ele_2 = 0;
	int m_array[NUM];

	puts("Enter Number of Elements of first array [MAX 20]:-");
	scanf("%d", &ele_1);

	writing_elements(array_1, ele_1, "Enter array_1 element values");
	puts("Enter Number of Elements of second array[MAX20]:-");
	scanf("%d", &ele_2);
	
	writing_elements(array_2, ele_2, "Enter array_2 element values");

	printing(array_1, ele_1, "printing Array_1 before sort elements:-");
	printing(array_2, ele_2, "printing Array_2 before sort  elements:-");
	
	i = ele_1 + ele_2;
	m_array[i];
	merge_array(array_1, array_2,m_array, ele_1, ele_2, "sorting and merge array");
	printing(m_array, i, "Printing Merge Array");
	return 0;
}
