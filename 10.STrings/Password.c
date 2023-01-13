#include <stdio.h>
#define SIZE 8
int main(){
   char password[SIZE];
   printf("Enter a password: ");
   printf("\n\t\t\t\t\tA strong password contains 4 alphabeths, 3 integers and one special character\n");
   gets(password);
   int alpha=0;
    int num=0;
    int other=0;
    for(int i=0;i<password[i]!='\0';i++){
        if ((password[i] >= 'a' && password[i] <= 'z') || password[i] >= 'A' && password[i] <= 'Z'){
            alpha++;
        }
        else if(password[i]>='0'&&password[i]<='9'){
            num++;
        }
        else{
            other++;
        }
        
    }
   printf("Alpha :%d\n Numbers:%d\n Other:%d\n",alpha,num,other);
}