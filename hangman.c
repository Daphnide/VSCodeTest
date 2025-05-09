#include <stdio.h>			// Library for int main() function
#include <stdlib.h>			// Library for rand() and srand() functions
#include <string.h>			// Library for string functions
#include <math.h>			// Library for math functions
#include <time.h>			// Library for time() function


/*----Creating a function to say hello----*/

void hello()					// Declaring a void return type function with no parameters 
{
	printf("Hello Daphnide! You can finally write C code inside of your Git Bash and hopefully push to GitHub with git commands.\n");		// Prompt to print for the function
}




/*---Calling everything inside of int main()----*/

int main()
{

	hello();			// Calling the hello function to make sure that it is working


	return 0;			// Returning zero if no errors occured
}
