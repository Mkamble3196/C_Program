
#include <stdio.h>
#include <stdlib.h>
int main(void){

    int i_ele;
    int* array;
    int* mul_array;

    printf("Enter the number of Element =");
    scanf("%d",&i_ele);

    array =(int*)malloc(sizeof(int) * i_ele);
    mul_array =(int*)malloc(sizeof(int) * i_ele);

    printf("Enter the array elements = ");
    
    for(int i = 0; i < i_ele; i++)
    {
    scanf("%d",&array[i]);
    }

    for(int i = 0; i < i_ele; i++)
    {
    printf("%d ",array[i]);
    }
    
    printf("\n");
    for(int i = 0; i < i_ele; i++)
    { 
        mul_array[i] = 1;
        for(int j = 0; j < i_ele; j++)
       
        { 
            if(i != j)
            mul_array[i] = mul_array[i] * array[j];
            else 
              continue;
        }

    }

    for(int i = 0; i < i_ele; i++)
    {
    printf("%d ",mul_array[i]);
    }

    return(0);
}