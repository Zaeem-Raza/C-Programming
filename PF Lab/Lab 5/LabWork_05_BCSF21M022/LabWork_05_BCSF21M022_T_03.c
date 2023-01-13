#include <stdio.h>
int numOfAccidents();
int main(){
  int east,west,south,north,central;
  printf("Enter number of accidents in North Region: ");
   east = numOfAccidents();
  printf("Enter number of accidents in South Region: ");
   west = numOfAccidents();
  printf("Enter number of accidents in East Region: ");
   north = numOfAccidents();
  printf("Enter number of accidents in West Region: ");
   south = numOfAccidents();
  printf("Enter number of accidents in Central Region: ");
   central = numOfAccidents();

  printf("The least number of accidents are:%d",central);
}

int numOfAccidents() {
  static int least = 999999999;
  int a;// accidents
  scanf("%d", &a);
  while(a<0) {
    printf("Invalid Input\nEnter Number of Accidents: ");
    scanf("%d",&a);
  }
  if(least>=a) {
    least=a;
  }
  return least;
}
