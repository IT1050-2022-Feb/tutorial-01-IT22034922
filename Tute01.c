/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) 
{
  float mark1,mark2,avg;

  printf("Enter Subject 1 Marks : ");
  scanf("%f",&mark1);
  printf("Enter Subject 2 Marks : ");
  scanf("%f",&mark2);

  avg = (mark1 + mark2)/2.0;
  
  printf("Average of the two marks : %.2f\n ",avg);
  return 0;
}

