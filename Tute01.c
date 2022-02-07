/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
	// variable declaration
	float mark1, mark2, average;

	// get mark1 and mark2 from user
	printf("Enter mark1: ");
	scanf("%f", &mark1);
	printf("Enter mark2: ");
	scanf("%f", &mark2);

	// calculate the average
	average = (mark1 + mark2)/ 2;

	// print average
	printf("Average is %.2f", average);

	return 0;
}

