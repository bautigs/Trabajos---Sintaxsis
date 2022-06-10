#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Bautista González Seijas 
int main(void)
{
   int c;
   while (EOF!= (c = getchar()))
   {
    if (isupper (c) )
    {
        printf("%c",tolower(c));
    }
    else if (islower (c))
    {
        printf("%c",toupper(c));
    }
    else if (isdigit(c))
    {
        
    }
    else
    {
     printf("%c",c);  
    }
   }
   return EXIT_SUCCESS;
}