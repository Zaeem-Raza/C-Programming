#include <stdio.h>
#define SIZE 100
void firstthree(char str[3][SIZE])
{
  
     for(int i=0;i<3;i++)
     {
       for(int j=0;j<3;j++)
       {
         printf("%c",str[i][j]);
       }
       printf("\n");
     }
}
void fisrtName(char str[3][SIZE])
{
   for(int j=0;j<3;j++)
   {
   int i=0;
   while(str[i]!=' '){
        printf("%c",str[j]);
        i++;
   }
   }
}
int main(){
    char str[3][SIZE];
    printf("Enter strings\n");
    for(int i=0;i<3;i++){
        gets(str[i]);
    }
    printf("Students list\n");
    for (int i = 0; i < 3; i++)
    {  
         printf("String no#%d: %s\n",i+1,str[i]);
    }
    printf("Initial 3 letters\n");
    firstthree(str);
    printf("First name\n");
    fisrtName(str);
}