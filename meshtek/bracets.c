#include<stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX   100

int check_string(char* s, char *c_temp)
{
  int j = -1;
  for(int i = 0; s[i] != '\0'; i++)
  {
  	if(s[i] == '(' || s[i] == '{' || s[i] == '[')
      {
    	  c_temp[++j] = s[i];
      }
    else{
        if(j == -1)
          return 0;
          
      if((c_temp[j] == '(' && s[i] == ')') || (c_temp[j] == '[' && s[i] == ']') || (c_temp[j] == '{' && s[i] == '}'))
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
  char *c_temp;
  int j = -1;
  int ret = 0;
  s = (char*)malloc(MAX * sizeof(char));
  c_temp =(char*)malloc(MAX * sizeof(char));
  printf("Input:s= ");
  scanf("%s", s);

  ret = check_string(s, c_temp);
  if(ret == -1)
		printf("true\n");
  else
  	printf("false\n");
    	
  return(0);
}
