/*
* Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
* An input string is valid if:
* 
* Open brackets must be closed by the same type of brackets.
* Open brackets must be closed in the correct order.
*  
* Example 1:
* Input: s = "()"
* Output: true
* 
* Example 2:
* Input: s = "()[]{}"
* Output: true
* 
* Example 3:
* Input: s = "([])"
* Output: true
* 
* Example 4:
* Input: s = "([)]"
* Output: false
* 
* Example 5:
* Input: s = "([{)}]"
* Output: false
* 
* Constraints:
* 
* 1 <= s.length <= 100
* s consists of parentheses only '()[]{}'.
* ==========================================================================
*/

#include<stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX  100

int check_string(char* s, char *c_temp)
{
  int j = -1;

  for(int i = 0; s[i] != '\0'; i++)
  {
    if(s[i] == '(' || s[i] == '{' || s[i] == '[')
    	  c_temp[++j] = s[i];
    else
    {
      if(j == -1)
        return 0;
          
      if((c_temp[j] == '(' && s[i] == ')') || 
          (c_temp[j] == '[' && s[i] == ']') || 
              (c_temp[j] == '{' && s[i] == '}'))
              j--;
      else
        return 0;
    }
  }
 
  return j;
}

int main(void)
{
	char *s = NULL;
  char *c_temp = NULL;
  int ret = 0;

  s = (char*)malloc(MAX * sizeof(char));
  c_temp =(char*)malloc(MAX * sizeof(char));
  printf("Input:s= ");
  scanf("%s", s);

  ret = check_string(s, c_temp);

  if(ret == -1)
    printf("True\n");
  else
    printf("False\n");
    	
  return(0);
}
