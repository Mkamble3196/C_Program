#include <stdio.h>
#include <stdlib.h>

int user_strcmp(char* s1, char* s2);

int main(void)
{
    char* s1 = NULL;
    char* s2 = NULL;;

    int ret_val;

    s1 = "Hello";
    s2 = "World";

    ret_val = user_strcmp(s1, s2);
    printf("s1 =[%s]\ts2=[%s]\tret_val[%d]\n",s1, s2, ret_val);

    s1 = "";
    s2 = "";
    ret_val = user_strcmp(s1, s2);
    printf("s1 =[%s]\ts2=[%s]\tret_val=[%d]\n", s1, s2, ret_val);

    s1 = "Mandar";
    s2 = "Kamble";
    ret_val = user_strcmp(s1, s2);
    printf("s1 =[%s]\ts2=[%s]\tret_val=[%d]\n", s1, s2, ret_val);

    s1 = "Kolhapur";
    s2 = "Ahmedabad";
    ret_val = user_strcmp(s1, s2);
    printf("s1 =[%s]\ts2=[%s]\tret_val=[%d]\n", s1, s2, ret_val);

}

int user_strcmp(char* s1, char* s2)
{
    size_t i;

    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] != s2[i])
        {
            if(s1[i] < s2[i])
                return(-1);
            else 
                return (1);
        }
        i = i + 1;
    }

    if(s1[i] == '\0' && s2[i] == '\0')
        return (0);
    
    if(s1[i] != '\0')
        return(1);
    else 
        return(-1);

}