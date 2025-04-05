#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *s = NULL;
  char c_temp [100];
  int j = -1;
  s = (char*)malloc(100 * sizeof(char));
  
  printf("Input:s= ");
  scanf("%s", s);
  
  for(int i = 0; s[i] != '\0'; i++)
  {
  	if(s[i] == '(' || s[i] == '{' || s[i] == '[')
      {
    	  c_temp[++j] = s[i];
      }
    else{
        if(j == -1)
        { 
          printf("false_23\n");
          return 0;
        }
    
      if((c_temp[j] == '(' && s[i] == ')') || (c_temp[j] == '[' && s[i] == ']') || (c_temp[j] == '{' && s[i] == '}'))
        {
    	    j--;
        }
      else {
    	  printf("false\n");
        return 0;
      }
    }
  }
  
  if(j == -1)
		printf("true\n");
  else
  	printf("false\n");
    	
  return(0);
}
