#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 5
int main()
{
  int arr[SIZE];
  int *p;
  p = arr;
  printf("Enter the values of Array: ");
  for (int i = 0; i < SIZE; i++)
  {
    scanf("%d", &p[i]);
  }
  int x = 99999, y = -99999;
  int *small = &x;
  int *large = &y;
  for (int i = 0; i < SIZE; i++)
  {
    if (p[i] < *small)
    {
      *small = p[i];
    }
  }

  for (int i = 0; i < SIZE; i++)
  {
    if (p[i] > *large)
    {
      *large = p[i];
    }
  }
  printf("\nMinimum value is: %d", *small);
  printf("\nMaximum value is: %d", *large);
  return 0;
}
