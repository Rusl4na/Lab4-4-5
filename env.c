#include <stdio.h>
#include <stdlib.h>

extern char **environ;
int main (int argc, char *argv[], char *envp[])
{
    int count = 0;

    printf("\n");
    while(environ[count] != NULL)
   {
         printf("[%s] :: ", environ[count]);
         count++;
 printf("\n");
   }

   return 0;
}
