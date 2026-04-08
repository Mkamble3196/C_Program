#include <stdio.h>
#include <string.h>

char* mystrstr(const char *s1, const char *s2)
{
        int i = 0;
        int j = 0;
        int k = 0;

        while(s1[i] != '\0')
        {
            k = i;
            while(s2[j] != '\0')
            {
                if(s1[k] != s2[j])
                    break;
                    k++;
                    j++;
            }
            if(s2[j] == '\0')
                return (char*)s1 + i;
            else 
                i++; j = 0;
        }

        return NULL;
}

int main(void)
{
    char *ptr = NULL;
    char str1[20];
    char str2[20];

    puts("Enter a string:-");
    gets(str1);

    puts("Enter the string to be found:-");
    gets(str2);

    ptr = mystrstr(str1, str2);

    if(ptr)
        printf("[%s] substring is present at index [%d]\n",str2, ptr - str1);
    else 
        puts("String is Not presnt");
}