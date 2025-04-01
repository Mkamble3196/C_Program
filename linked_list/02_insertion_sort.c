#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i_num = 0;
    int* i_array = NULL;
    int i_current = 0;
    int i, j;

    printf("Enter the Count of elements:");
    scanf("%d", &i_num);

    i_array = (int*)malloc(i_num* sizeof(int));

    for(i = 0; i < i_num; i++)
    {
        printf("Enter the i_array[%d] = ",i);
        scanf("%d", &i_array[i]);
    }

    printf("\n\nBefore Insertion sort:\n\n");
    for(i = 0; i < i_num; i++)
    {
        printf("i_array[%d] = %d\n",i, i_array[i]);
    }

    /* Insertion Logic */
    //First element is sorted and the rest of the list is unsorted

    for(i = 1; i < i_num; i++)
        if(i_array[i] < i_array[i-1]) // Removed element from unsorted list and place it at proper position in the sorted list
        {
            i_current = i_array[i];
            for(j = i-1; j >=0 ; j--)
            {
                i_array[j + 1] = i_array[j];
                if(j == 0 || i_array[j-1] <= i_current)
                    break;
            }
            i_array[j] = i_current; 
        }


        printf("\n\nAfter Insertion sort:\n\n");
        for(i = 0; i < i_num; i++)
        {
            printf("i_array[%d] = %d\n",i, i_array[i]); // print sort List
        }



    return(0);
}