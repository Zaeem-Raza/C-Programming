#include <stdio.h>
int main(){
  int day;
  int month;
  int year;
  printf("Enter day number:");
  scanf("%d",&day);
  printf("Enter month number:");
  scanf("%d",&month);
  printf("Enter year in two digits:");
  scanf("%d",&year);
  if(day*month==year){
    printf("It is a magical year\n");
  }
  else{
    printf("It is not a magical year");
  }

}
