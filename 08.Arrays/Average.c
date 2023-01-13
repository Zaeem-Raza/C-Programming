// Program to find the average of n numbers using arrays
#include <stdio.h>
int main()
{
  int num;
  printf("Enter the number of students");
  scanf("%d", &num);
  double average;
  int marks[num];
  int sum = 0;
  // taking input
  for (int i = 0; i < num; i++)
  {
    printf("Enter marks:__\b\b");
    scanf("%d", &marks[i]);

    // adding marks within the for loop
    sum += marks[i];
  }
  average = (double)sum / num;
  printf("The average of the class is :%.3lf", average);
}
