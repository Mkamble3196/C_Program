#include <stdio.h>

int main(void)
{
    int arr1[]= {0,1,2,3,4,4};

    for(int i = 0; i < (sizeof(arr1)/sizeof(arr1[0])); i++)
    {
        printf("arr1[%d] = %d--->%p\n", i, arr1[i], &arr1[i]);
    }   

    return(0);
}