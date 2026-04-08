#include <stdio.h>
#include <string.h>

// Function to reverse part of string
void reverse(char *start, char *end)
{
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// Function to reverse words
void reverseWords(char *str)
{
    int len = strlen(str);

    // Step 1: Reverse entire string
    reverse(str, str + len - 1);

    // Step 2: Reverse each word
    char *word_start = str;
    for (int i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            reverse(word_start, str + i - 1);
            word_start = str + i + 1;
        }
    }
}

int main()
{
    char str[] = "my name is mandar";

    reverseWords(str);

    printf("%s\n", str); // Output: mandar is my name

    return 0;
}