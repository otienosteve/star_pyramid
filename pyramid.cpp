//program to print a pyramid of stars with beginning indented space
// invloves three loops, a loop for iterating the space, a loop for iterating the star and an outer loop for iterating the two loops.

#include<stdio.h>

int main()
         {
	int count, n2,n,changer, changer2=1,row_calc, inverse; //declaring variables to be uses in our program
	
	
	printf("How many rows of pyramid of stars would you like to see?");
	scanf("%d",&row_calc);
	
	changer=row_calc;
	
	//beginning of outer loop
	for (count=1; count<=row_calc; count++)
	{  
	// beginning of inner loop that prints the space identation
		for( n=changer; n>=1; n--) {
				
			printf(" ");
			
		}
	// beginning of inner loop to print the star
	for (n2=1; n2<=changer2; n2++)
		{
			
			printf("*");	
		}
					
		printf("\n");
	// iterator for the comparison operators to update their value
		changer--;
		changer2++;
	}
		printf("Above is a %d row pyramid of indented Stars",row_calc );
	}
	

