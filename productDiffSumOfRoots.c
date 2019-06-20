#include <stdio.h>
#include <math.h>

//Computes product, difference, and sum of roots of two numbers

int main(int argc, char **argv)
{
    double inputNumber1, inputNumber2, product, difference, sumOfRoots;
    
    //Prompt user to enter two numbers
	printf("Enter two positive numbers: ");
    
    //Get numbers from user
    scanf("%lf %lf", &inputNumber1, &inputNumber2);
    
    //Compute the product, difference, and sum of roots
    product = inputNumber1*inputNumber2;
    difference = inputNumber1 - inputNumber2;
    sumOfRoots = sqrt(inputNumber1) + sqrt(inputNumber2);
    
    //Print out resutls
    printf("The product is: %.2lf, the difference is: %.2lf and the sum of roots is: %.2lf\n", product, difference, sumOfRoots);
    
	return 0;
}
