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

	for (i = 0;  i<= 99; i++)
	{
        for(int i = j + 1;  i < 100 ; i++)
	{    
	     putchar((i/10)+'0');
    	 putchar((i/10)+'0');
         putchar((i%10)+'0');
    
  
	   if (j < 99)
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }
  putchar('\n');

  return (0);
}
