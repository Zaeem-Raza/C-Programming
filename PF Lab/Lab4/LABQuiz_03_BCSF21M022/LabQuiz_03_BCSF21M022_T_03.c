#include <stdio.h>
int main(){
  char ch;
  printf("Enter a character");
scanf(" %c",&ch);


while(ch!='$'){



     if(ch>=65&&ch<=90){
  printf("It is an upper case letter\n");
  ch=ch+32;
  printf("Its lower case letter is %c",ch);

         }

         else if(ch>=97&&ch<=122){
           printf("It is in lower case letter\n");
           ch=ch-32;
           printf("character in upper case is: %c",ch);
         }

        else if(!(ch>='a'&&ch>='z')||(ch>='A'&&ch<='Z')){
           printf("*");

         }
         else{
           printf("%d",ch);
           scanf("%d",&ch);
         }
printf("\nEnter again\n");
         scanf("%d",&ch);

}


}
