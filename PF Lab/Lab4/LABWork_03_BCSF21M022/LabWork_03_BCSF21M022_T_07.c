                                              /*Floyd's triangle*/
#include <stdio.h>
int main(){
 int rows;
 int a=0;
 int b=0;
 printf("Enter number of rows");
 scanf("%d",&rows);
 while(rows<1){
   printf("Wrong input\nEnter again");
   scanf("%d",&rows);
 }


 for(int i=1;i<=rows;i++){
   if(i%2==0){
     a=1;   //1st digit
     b=0;  //2nd digit
   }
    else{
     a=0;
     b=1;
   }
   for(int j=1;j<=i;j++){
     if(j%2==0){
       printf("%d",a);
     }
     else{
       printf("%d",b);
     }
   }
   printf("\n");
 }

}
