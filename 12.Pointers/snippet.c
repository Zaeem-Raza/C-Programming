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
        printf("Enter the value of %d element: ", i+1);
        scanf("%d", (arr + i));
    }
}