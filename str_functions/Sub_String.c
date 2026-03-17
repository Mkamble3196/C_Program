#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char *str = NULL;
    char *sub_str = NULL;
    int i, j, flag = 0;
    str = (char*) malloc(sizeof(char)* 100);
    sub_str = (char*)malloc(sizeof(char)* 50);

    printf("Enter the String:-");
    //fgets(str, 100, stdin);
    scanf("%s", str);

    printf("Enter the word:-");
    //fgets(sub_str, 50, stdin);
    scanf("%s", sub_str);
/*
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    /* Remove newline from sub_str 
    for (i = 0; sub_str[i] != '\0'; i++) {
        if (sub_str[i] == '\n') {
            sub_str[i] = '\0';
            break;
        }
    }
*/
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == sub_str[0])
        {
            for(j = 0; sub_str[j] != '\0' && str[i + j] != '\0' && sub_str[j] == str[i + j]; j++);
            if(sub_str[j] == '\0')
               { 
                flag = 1;
                break;
            } 
        }
    }

    if(flag == 1)
        printf("[%s] substring is present in [%s] string",sub_str, str);
    else 
        printf("[%s] substring is not present in [%s] string",sub_str, str);



    return(0);
}