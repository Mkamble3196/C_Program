//Insertion sort by Cmd line arguments

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef long long ssize_t;

void input(int* a, ssize_t N);
void show(int* a, ssize_t N, const char* msg);
void insertion_sort(int* a, ssize_t N);

int main(int argc, char* argv[])
{
    int* a = NULL;
    ssize_t N;
    time_t start_time, end_time, delta_time;

    /* Commandline Validation */
    if(argc != 2)
    {
        printf("Usage Error: Correct Usage is %s Number of elements to be sorted\n"
                    ,argv[0]);
        exit(EXIT_FAILURE);
    }

    N = atoll(argv[1]);

    if(N <= 0)
    {
        puts("Bad Value For Array Size");
        exit(EXIT_FAILURE);
    }

    a = (int*)calloc(N, sizeof(int));
    if(a == NULL)
    {
        puts("Error in allocating memory");
        exit(EXIT_FAILURE);
    }
    input(a, N);

    show(a, N, "Before Sort:-");
    start_time = time(0);
    insertion_sort(a, N);
    show(a, N, "After Sort:-");
    end_time = time(0);

    delta_time = end_time - start_time;

    printf("Time Required By Insertion Sort:%lld",delta_time);

    free(a);

    exit(EXIT_SUCCESS);
}

void input(int* a, ssize_t N)
{
    ssize_t i;

    srand(time(0));

    for( i = 0; i < N; ++i)
        rand_s(&a[i]);
}

void show(int* a, ssize_t N, const char* msg)
{
    ssize_t i;
    
    if(msg != NULL)
    {
        puts(msg);
    }

    for(i = 0; i < N; ++i)
        printf("a[%lld]:%d\n", i, a[i]);
}


void insertion_sort(int* a, ssize_t N)
{
    ssize_t  i = 0, j;

    int key;
    for(j = 1; j < N; ++j)
    {
        key = a[j];
        i = j - 1;

        while(i > -1 && a[i] > key)
        {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = key;
    }
}