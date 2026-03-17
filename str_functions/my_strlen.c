#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char *str = NULL;
    int i_length = 0;
    int i  = 0;
    str = malloc(100 * sizeof(char));

    printf("Enter The string\n");
    scanf("%s", str);

    while(str[i] != '\0')
    { 
        i_length = i_length + 1;
        i++;
    }

    for( i = i_length - 1; i >=0 ; i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    printf("%s has length of %d\n i= %d\n", str, i_length, strlen(str));

    free(str);
    return 0;
}