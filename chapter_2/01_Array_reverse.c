// Array Reverse

#include <stdio.h>
#include <stdlib.h>

int main(void){


    int *i_Array = NULL;
    int i_Num;
    int i_Temp;
    int i;
    int j;
    
    printf("Enter the Number of an array element:-");
    scanf("%d", &i_Num);

    i_Array = malloc(i_Num * sizeof(int)); //Dynamically Allowcated memory

    /* Taking Arrary Elements*/
    printf("Enter the Array Elements:-\n");

    for(i = 0 ; i < i_Num ; i++)
    {
        printf("Enter [%d] elements = ", i);
        scanf("%d", &i_Array[i]);
    }


    printf("\nBefore Reverse Array elements\n");
    
    for(i = 0 ; i < i_Num ; i++)
    {
        printf("Enter [%d] elements = %d\n", i, i_Array[i]);
    }


    ///reverse logic

    for(i = 0, j = i_Num - i - 1; i < i_Num / 2; i++ , j = i_Num - i - 1)
    {
        /* using temp variable */
        i_Temp = i_Array[i];  //Createad tem variable for swap
        i_Array[i] = i_Array[j];
        i_Array[j] = i_Temp; 
    }

    printf("After the Reverse array elements= \n");
    
    for(int i = 0 ; i < i_Num ; i++)
    {
        printf("Enter [%d] elements = %d\n", i, i_Array[i]);
    }

    free(i_Array);

    return(0);
}