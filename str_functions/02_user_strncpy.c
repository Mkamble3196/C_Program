#include <stdio.h>
#include <stdlib.h>

size_t my_min(size_t a, size_t b);
size_t my_strlen(char* str);

char* my_strncpy(char* destination_string, char* source_string, size_t n);

int main(void)
{
    char* source_string = "Kolhapur is Famous City";
    char* destination_string = NULL;
    size_t n_src;
    n_src = my_strlen(source_string);

    destination_string = (char*)malloc(n_src + 1); //+ 1 for Null charater

    if(destination_string == NULL)
    {
        puts("Error In Allocating Memory");
        exit(EXIT_FAILURE);
    }

    my_strncpy(destination_string, source_string, n_src);

    printf(
            "Source String = [%s], Destination String = [%s]\n",
            source_string,
            destination_string
    );

    free(destination_string);
    destination_string = NULL;

    n_src = my_strlen("MandarKamble");

    destination_string = (char*)malloc(n_src + 1); //+ 1 for Null charater

    if(destination_string == NULL)
    {
        puts("Error In Allocating Memory");
        exit(EXIT_FAILURE);
    }

    my_strncpy(destination_string, source_string, n_src);

    printf(
            "Source String = [%s], Destination String = [%s]\n",
            source_string,
            destination_string
    );

    free(destination_string);
    destination_string = NULL;
    
    
    return(0);
}

char* my_strncpy(char* destination_string, char* source_string, size_t n)
{
    size_t n_src;
    size_t n_min;
    size_t i;

    n_src = my_strlen(source_string);

    n_min = my_min(n_src, n);

    i = 0;
    while(i <= (n_min - 1))
    {
        destination_string [i] = source_string[i];
        i = i + 1;
    }

    destination_string[i] = '\0';
    return(destination_string);
}


size_t my_strlen(char* str)
{
    size_t length = 0;
    size_t i;
    i = 0;
    while(str[i] != '\0')
    {
        length += 1;
        i += 1;
    }

    return(length);
}

size_t my_min(size_t a, size_t b)
{
    if (a < b)
        return(a);
    return(b);
}
