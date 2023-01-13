#include <stdio.h>
#define SIZE 100
#include <stdlib.h>
int unique(char [] , char []);
int main (void)
{
    char S1[SIZE];
    char S2[SIZE];
    printf("Enter first string : ");
    fgets(S1,SIZE,stdin);
    printf("Enter second string : ");
    fgets(S2,SIZE,stdin);
    printf("\nUNIQUE ELEMENTS : %d" , unique(S1,S2));
}
int unique(char A[] , char B[])
{
    int k = 0;
    while (A[k]!='\0')
    {
        k++;
    }
    k-=1;
    int h = 0;
    while (B[h]!='\0')
    {
        h++;
    }
    h-=1;
    size_t i = k , l = 0 ;
    for (; i < k+h , l < h ; i++ , l++)
    {
        A[i] = B[l];
    }
    A[i] = '\0';
    printf("%s",A);
    int frequency[2*SIZE]={0};
    for (size_t i = 0; A[i]!='\0'; i++)
    {
        ++frequency[A[i]-97];
    }
    int u = 0;
    for (size_t i = 0; i < SIZE ; i++)
    {
        if (frequency[i]==1)
        {
            u++;
        }
    }
    return u;
}
