#include <stdio.h>


int main(void){

    int i_num;
    int i_prev = 0;
    int i_next = 1;
    int i_sum;
    int count = 2;

    printf("How many terms do you want to print\n");
    scanf("%d",&i_num);

    printf("Fabonacci Series\n");

    printf("%d\t%d\t",i_prev,i_next);

    while(count < i_num)
    {
        i_sum = i_prev + i_next;
        printf("%d\t",i_sum);
        i_prev = i_next;
        i_next = i_sum;
        count++;
    }
printf("\n");

    return(0);
}