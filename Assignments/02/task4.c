/**
Name           Zaeem Raza
Roll Number    BCSF21M022
Question no:   04

Statement: You are given a large integer represented as an integer array to pointer representing digits, where each
digit [i] is the ith digit of the integer. The digits are ordered from most significant to least significant in
left-to-right order. The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.
Sample Execution 1:
Input number of digits of integers: 3
Input digits: 1 2 3
Number after plus one: 1 2 4
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main(void)
{
  int arr[MAX];
  int size;
  printf("Enter the size of array: ");
  scanf("%d", &size);
  while (size <= 0)    //input validation
  {
    printf("Invalid input\nEnter again: ");
    scanf("%d", &size);
  }
  int *pt = arr;
  printf("Enter the elements of array: ");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", pt);
    while (*pt < 0 || *pt > 9) // input validation
    {
      printf("The digit must be between 0_9\nEnter again: ");
      scanf("%d", pt);
    }
    pt++;
  }
  pt = arr;
  printf("The original Array is: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", *pt);
    pt++;
  }
  int num = 0;
  pt = arr;
  for (int i = 0; i < size; i++)
  {
    num = num * 10 + *pt;   // converting array to integer
    pt++;
  }
  num++;

  printf("\nThe number after plus one is: ");
  // place the number in new array
  int new_arr[MAX];
  int *new_pt = new_arr;
  while (num > 0)
  {
    *new_pt = num % 10;
    num = num / 10;
    new_pt++;
  }
  new_pt--;
  for (int i = 0; i < size + 1; i++)
  {
    if (*new_pt > 9) // if the number is greater than 9, do not print
    {
      continue;
    }
    printf("%d ", *new_pt);   // printing the number
    new_pt--;
  }

  return 0;
}