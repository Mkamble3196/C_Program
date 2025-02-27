#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef long long ssize_t;

void input(int* a, ssize_t N);
void show(int* a, ssize_t N, const char* msg);
void insertion_sort(int* a, ssize_t N);

int main(void)
{

    int *a = NULL;
    ssize_t N;

    time_t start_time, end_time, delta_time;

    printf("Enter The Number of Elements To be Sorted:");
    scanf("%lld", &N);

    if(N <= 0)
    {
        puts("Bad Values Of Array Size");
        exit(EXIT_FAILURE);
    }

    a = (int* )malloc( N * sizeof(int));

    if(a == NULL)
    {
        puts("Error In Allocating Memory");
        exit(EXIT_FAILURE);
    }

    input(a, N);
    show(a, N, "Before Sort:");
    start_time = time(0);
    insertion_sort(a, N);
    end_time = time(0);
    show(a, N, "After Sort:");
    delta_time = end_time - start_time;
    printf("Time Requried by Insertion Sort: %lld\n", delta_time);

    free(a);

    return(0);
}


void input(int *a, ssize_t N)
{
    ssize_t i;
    
    srand(time(0));

    for(i = 0; i < N; ++i)
    a[i] = rand();
}


void show(int *a, ssize_t N, const char *msg)
{
    ssize_t i;

    if(msg != NULL)
    {
        puts(msg);
    }

    for(i = 0; i < N; ++i)
        printf("a[%lld]:%d\n", i, a[i]);
}

void insertion_sort(int *a, ssize_t N)
{
    ssize_t i, j;
    int key;

    for(j = 1; j < N; ++j)
    {
        key = a[j];
        i = j - 1;
        while( i > -1 && a[i] > key) 
        {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = key;
    }

}