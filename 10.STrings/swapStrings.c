#include <stdio.h>
#define SIZE 100
int length(char A[])
{
    int len = 0;
    while (A[len] != '\0')
    {
        len++;
    }
    return len;
}
void Swap(char str1[SIZE], char str2[SIZE],int len1)
{
      for(int i=0;i<len1;i++){
          char temp=str1[i];
          str1[i]=str2[i];
          str2[i]=temp;
      }
      printf("After swapping :%s %s",str1,str2);
}
int main(){
char str1[SIZE];
char str2[SIZE];
  printf("Enter 1st string");
    gets(str1);
    printf("Enter 2nd string");
    gets(str2);
    int len1 = length(str1);
    Swap(str1,str2,len1);
}