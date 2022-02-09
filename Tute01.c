/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
  float average;
  
  printf("enter the mark1:");
  scanf("%d", &mark1);

  printf("enter the mark2:");
  scanf("%d", &mark2);
 
  average=(mark1+mark2)/2;

  printf("average is %.2f", average);
  return 0;
}

