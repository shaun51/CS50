/* Creating the mario program, whose goal is to create a 
*  pyramid by accepting input from the user to get the 
*  height then aligning the pyrimid to the right.
*
*/
#include <stdio.h>
#include <cs50.h>

int main(void)
{
	printf("Height: "); // get user input and set it to height input
	int height = GetInt();
	
	int i, j, k;
	for(i = 1 ; i < height; i++)
	{
		// create n-1 spaces
		for(k = (height - 2); k > (i-1); k--)
		{
			printf("%c", ' ');		
		}
		// create n+1 hash tags
		for(j = 0; j < (i+1); j++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
