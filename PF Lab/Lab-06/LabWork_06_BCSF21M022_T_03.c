#include <stdio.h>
#define SIZE 4
int main(){
int pin[SIZE];
 printf("Enter your pin code\n");
 for(int i=0;i<SIZE;i++){
   scanf("%d",&pin[i]);
 }

printf("Joey's Pin code:");
for(int i=0;i<SIZE;i++){
  printf("%d",pin[i]);
}

 //Encryption
   for(int i=0;i<SIZE;i++){
     pin[i]+=2;
   }
   printf("\nJoey's Encryption code: ");
   for(int i=0;i<SIZE;i++){
     printf("%d",pin[i]);
   }
// decryption
      for(int i=0;i<SIZE;i++){
        pin[i]-=2;
      }
   printf("\nJoey's decryption code: ");
   for(int i=0;i<SIZE;i++){
     printf("%d",pin[i]);
   }
}
