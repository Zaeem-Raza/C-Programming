#include <stdio.h>
#define SIZE 5
void intersection(char [],char []);
int main(){
char str1[SIZE];
char str2[SIZE];
 printf("Enter 1st array :");
 gets(str1);
 printf("Enter 2nd array :");
 gets(str2);

 intersection(str1,str2);
}
void intersection(char arr[], char arr2[]){
  char str3[SIZE];
  int x=0;
     for(int i=0;i<5;i++){

        for(int j=0;j<5;j++){
            if(arr[i]==arr2[j]){
              str3[x]=arr2[j];
              x++;
                // printf("%c", arr2[j]);
            }
        }

        }
        str3[x]='\0';
        for(int i=0;str3[i]!='\0';i++){
          printf("%c",str3[i]);
        }
     }
