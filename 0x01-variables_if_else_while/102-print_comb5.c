#include <stdio.h>

/**
* main - Print combinations of two digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
  int i;
  int j;

      for(int i = j + 1;  i < 100 ; i++)
	{    
	     putchar((i/10)+'0');
	     putchar((j%10)+'0');
	     putchar(' ');
    	 putchar((i/10)+'0');
         putchar((i%10)+'0');
    
  
	   if (j < 99)
	    {
	      putchar(',');
	      putchar(' ');
	    }
    }
  putchar('\n');

  return (0);
}
