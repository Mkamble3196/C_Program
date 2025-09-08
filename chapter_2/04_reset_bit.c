/* 
Given two number, say val and key. wherever the bits of number key are 1, reset (i.e make 0)
the corresponding bits of number val. leave all other bits of number val unchanged.

*/
#include <stdio.h>
int main(void)
{

    int val, key, temp;
    printf("Enter two Number\t");
    scanf("%d %d",&val, &key);
    printf("\nBefore\n");
    for(int i = 31; i >=0 ; i--)
    {
        printf("%d", ((val >> i )& 1));
    }
    temp = ~key;
    val = val & temp;

    printf("\nAfter\n");
    for(int i = 31; i >=0 ; i--)
    {
        printf("%d", (val >> i& 1));
    }

    printf("\nafter resetting bits results is %d\n",val);
    return(0);
}