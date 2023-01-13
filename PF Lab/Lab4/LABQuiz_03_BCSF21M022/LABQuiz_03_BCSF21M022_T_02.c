#include <stdio.h>
int main(){
  int day;
  int month;
  int year;
  printf("Enter day");
  scanf("%d",&day);
  while(day<1||day>31){
    printf("Input Error\nEnter again ");
    scanf("%d",&day);
  }
  printf("Enter month");
  scanf("%d",&month);
  while(month<1||month>12){
    printf("Input Error\nEnter again ");
    scanf("%d",&month);
  }
  printf("Enter year");
  scanf("%d",&year);
  while(year<1||year<1900){
    printf("Input Error\nEnter again ");
    scanf("%d",&year);
  }


  if(month==2&&day>28){
    printf("Invalid date");

  }


  else if(((month==3)||(month==4)||(month==6)||(month==8)||(month==9)||(month==11))&&(day>30)){
    printf("Invalid date");
  }

  else{
    printf("Valid date");
  }

}
