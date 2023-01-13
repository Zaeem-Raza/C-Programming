#include <stdio.h>
double getSales(int);
void findHighest(double,double, double, double);
int main() {

  int division1 = 1;  // NorthEast
  double northEast = getSales(division1);
  printf("%lf\n", northEast);

  int division2 = 2;  // SouthEast
  double southEast = getSales(division2);
  printf("%lf\n", southEast);

  int division3 = 3;  // NorthWest
  double northWest = getSales(division1);
  printf("%lf\n", northWest);

  int division4 = 4;  // SouthWest
  double southWest = getSales(division1);
  printf("%lf\n", southWest);

  findHighest(northEast, southEast, northWest, southWest);
  return 0;
}
double getSales(int num) {
  double sales;
  printf("Enter Quarterly Sales: ");
  scanf("%lf", &sales);
  while(sales < 0) {
    printf("Enter Quarterly Sales Again: ");
    scanf("%lf", &sales);
  }
  return sales;
}
void findHighest(double northEast, double southEast, double northWest, double southWest) {
  if((northEast >= southEast) && (northEast >= northWest) && (northEast >= southWest)) {
    printf("Highest Quarterly Sales\n");
    printf("North East: %lf", northEast);
  }
  else if((southEast >= northEast) && (southEast >= northWest) && (southEast >= southWest)) {
    printf("Highest Quarterly Sales\n");
    printf("South East: %lf", southEast);
  }
  else if((northWest >= northEast) && (northWest >= southEast) && (northWest >= southWest)) {
    printf("Highest Quarterly Sales\n");
    printf("North West: %lf", northWest);
  }
  else {
    printf("Highest Quarterly Sales\n");
    printf("South West: %lf", southWest);
  }
}
