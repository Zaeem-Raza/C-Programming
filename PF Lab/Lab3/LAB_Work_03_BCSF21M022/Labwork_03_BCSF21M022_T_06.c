#include <stdio.h>
int main(){
  int books=0;
  printf("Enter tha number of books purchased");
  scanf("%d",&books);
  int point=0;

  while(books<0){
    printf("Wrong Input\n");
    printf("Enter again\n");
    scanf("%d",&books);
  }
if(books==0){
  point=0;
}
else if(books==1){
  point=5;
}
else if(books==2){
  point=15;
}
else {
  point=30;
}
  printf("You have earned points: %d",point);
}
