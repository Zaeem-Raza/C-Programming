/*This program creates a special integer and takes input from the user until user enter the selected integer*/
#include <stdio.h>
int main(){
  int user_input;
  int special_char=89;
  printf("Enter an integer");
  scanf("%d",&user_input);
  while(user_input!=special_char){
    printf("Wrong\nEnter integer again");
    scanf("%d",&user_input);

}
printf("Hurray");
}
