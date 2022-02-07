/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 10
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
	// variable declaration
	int n, sum = 0;

	// get user input
	printf("Enter the number: ");
	scanf("%d", &n);

	// calculate sum
	for(int i = 0; i <=n; i++){
		sum += i;
	}

	// print sum
	printf("sum = %d", sum);

	return 0;
}

