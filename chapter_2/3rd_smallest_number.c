#include <stdio.h>
#include <limits.h>

int main()
{
    int i_arr[10] = { 2, 54, 6, 20, 45, 3, 5, 8, 90, 20};
    
    int i, j;
    int f_smallest = INT_MAX;
    int s_smallest = INT_MAX;
    int t_smallest = INT_MAX;
    
    for(i = 0; i < 10; i++)
    {
        if(i_arr[i] < f_smallest)
        {
            t_smallest = s_smallest;
            s_smallest = f_smallest;
            f_smallest = i_arr[i];
        }
        else if (i_arr[i] < s_smallest && i_arr[i] != f_smallest)
        {
            t_smallest = s_smallest;
            s_smallest = i_arr[i];
        }
        else if ( i_arr[i] < t_smallest && i_arr[i] != s_smallest && i_arr[i] != f_smallest)
            t_smallest = i_arr[i];
        
    }
    
    

    printf("%d is 3rd smallest number in a array\n", t_smallest);
    return 0;
}