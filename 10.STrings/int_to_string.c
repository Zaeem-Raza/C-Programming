#include <stdio.h>
#define SIZE 5
void tostring(int num)
{
    char str[SIZE];
    int i = 0;
    while (num != 0)
    {
        str[i] = num % 10;
        num /= 10;
        i++;
    }
    // printing the string in reverse order
    //reversing the string
    
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", str[j]);
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    tostring(num);
    return 0;
}
