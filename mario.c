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
		for(k = (height - 2); k > (i-1); k--) // create n-1 spaces
	        {
			printf("%c", ' ');		
		}
 		for(j = 0; j < (i+1); j++) // create n+1 hash tags
	        {
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
