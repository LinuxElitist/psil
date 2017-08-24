#include <stdlib.h>

int allocstr(int len, char **retptr)
{
  char *p = malloc(len + 1);/* +1 for \0 */
  if(p == NULL)
    return 0;
  *retptr = p;
  return 1;
}

int main (){

  char *string = "Hello, world!";
  char *copystr;
  if(allocstr(strlen(string), &copystr))
    strcpy(copystr, string);
  //  elsefprintf(stderr, "out of memory\n");
}
