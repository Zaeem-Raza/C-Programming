#include <stdio.h>
#define SIZE 5
void getArray(int *arr, int size);
void printArray(int *arr, int size);
void Swap(int *p1, int *p2);
void Bubble(int *const array, int size);

int main()
{

  int arr[SIZE];
  int size = SIZE;
  printf("Enter the elements of array: \n");
  getArray(arr, size);
  printf("Array before Sorting: ");
  printArray(arr, size);
  Bubble(arr, size);
  printf("\n Array After sorting :\t");
  printArray(arr, size);
}
void printArray(int *arr, int size)
{
  int i;

  for (i = 0; i < size; i++)
  {
    printf("%d, ", *(arr + i /*integer */));
  }
}
void getArray(int *arr, int size)
{
  int i;

  for (i = 0; i < size; i++)
  {
    printf("Enter the value of %d element: ", i + 1);
    scanf("%d", (arr + i));
  }
}
void Swap(int *p1, int *p2)
{
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}
void Bubble(int *const array, int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        Swap(&array[j], &array[j + 1]);
      }
    }
  }
}
