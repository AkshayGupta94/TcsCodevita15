#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] ="";
  gets(str);
  int * pch;
  printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = (int*)strtok (str," ,.-");
  while (pch != NULL)
  {
    printf ("%d\n",pch);
    pch = strtok (NULL, " ,.-");
  }
  return 0;
}
