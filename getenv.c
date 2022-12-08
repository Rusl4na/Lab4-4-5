#include<stdlib.h>
#include<stdio.h>

int main(void)
{
   char *s;
   s = getenv("COLORTERM"); 
   printf("Значение:  %s\n",s);
   return 0;
}
