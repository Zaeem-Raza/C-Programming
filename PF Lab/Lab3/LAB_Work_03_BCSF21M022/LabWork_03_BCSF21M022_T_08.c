#include <stdio.h>
int main(){
  char ch1;
  char ch2;

  printf("Enter first color: ");

  scanf("%c",&ch1);

  while (!((ch1=='R')||(ch1=='B')||(ch1=='Y'))){
    printf("Wrong input\nEnter Again: ");

    scanf(" %c",&ch1);

  }

  printf("Enter second color: ");
  scanf(" %c",&ch2);

  while (!((ch2=='R')||(ch2=='B')||(ch2=='Y'))){

    printf("Wrong input\nEnter Again: ");

    scanf("%c",&ch2);

  }
                        // 1st method
if(ch1=='R'){
  if (ch2=='B'){
    printf("secondary color : Purple\n");
  }
  else if (ch2=='Y'){
    printf("secondary color : Orange\n");
  }
  else{
    printf("Both colors are same.\n") ;
  }
}
else if(ch1=='B'){
  if (ch2=='R'){
    printf(" secondary color : Purple\n");
  }
  else if (ch2=='Y'){
    printf("secondary color : Green\n");
  }
  else{
    printf("Both colors are same.\n") ;
  }
}
else{
  if (ch2=='R'){
    printf("secondary color = Orange\n");
  }
  else if (ch2=='B'){
    printf("secondary color = Green\n") ;
  }
  else{
    printf(" Both colors are same.\n") ;
  }
}









                                    //2nd method
  //
  //
  // if(((ch1=='R')&&(ch2=='B'))||((ch1=='B')&&(ch2=='R'))){
  //   printf("The secondary color is: Purple");
  // }
  //
  //
  //   else if(((ch1=='R')&&(ch2=='Y'))||((ch1=='Y')&&(ch2=='R'))){
  //     printf("The secondary color is: Orange");
  //   }
  //   else{
  //     printf("The color is Green");
  //   }



}
