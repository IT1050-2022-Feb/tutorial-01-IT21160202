/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1, mark2, average;

  printf("Enter mark1: ");
  scanf("%f", &mark1);
  printf("Enter mark2: ");
  scanf("%f", &mark2);

  average = (mark1 + mark2)/ 2;

  printf("Average is %.2f", average);

  return 0;
}

