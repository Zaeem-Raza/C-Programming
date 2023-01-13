#include <stdio.h>
#define SIZE 100
int locate(char str1[], char str2[]){
    int l, i, j;

  int position;
    // finding length of second string
    l = 0;
    while (str2[l] != '\0')
    {
        l++;
    }

    for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == l)
    {
        position=i-j+1;
        // printf("Substring found at position %d", i - j + 1);
        return position;
    }
    else
    {
        printf("Substring not found");
    }
    return -1;
}
int main()
{
#include <stdio.h>
    char str1[80], str2[80];
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);
 
  int y= locate(str1,str2);
  printf("Location : %d",y);
    return 0;
}
