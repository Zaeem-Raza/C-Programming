#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int isSkew(int arr[][SIZE]);
int main(void)
{

  int arr[SIZE][SIZE];
  printf("Enter the elements of the matrix");
  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  printf("The elements of the matrix are: \n");
  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      printf("\t%d", arr[i][j]);
    }
    printf("\n");
  }

  int res = isSkew(arr);
  if (res == 1)
  {
    printf("The matrix is skew Symetric");
  }
  else
  {
    printf("The matrix is not skew Symmetric");
  }
}
int isSkew(int arr[][SIZE])
{

  int arr2[SIZE][SIZE];
  for (int i = 0; i < SIZE; i++)
  {

    for (int j = 0; j < SIZE; j++)
    {

      arr2[i][j] = -arr[j][i];
    }
  }
  for (int i = 0; i < SIZE; i++)
  {

    for (int j = 0; j < SIZE; j++)
    {

      if (arr[i][j] != arr2[i][j])
      {
        return 0;
      }
    }
  }

  return 1;
}