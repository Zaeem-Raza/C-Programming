#include <stdio.h>
float calculateRetail(float, float);
int main() {
  float wholeSaleCost;
  float markupPercentage;

  printf("Enter Whole Sale Cost: ");
  scanf("%f", &wholeSaleCost);
  while(wholeSaleCost < 0) {
    printf("Enter Whole Sale Cost Again: ");
    scanf("%f", &wholeSaleCost);
  }
  printf("Enter Markup Percentage: ");
  scanf("%f", &markupPercentage);
  while(markupPercentage < 0) {
    printf("Enter Mark Up Percentage Again: ");
    scanf("%f", &markupPercentage);
  }
  float result = calculateRetail(wholeSaleCost, markupPercentage);
  printf("%.2f", result);
  return 0;
}
float calculateRetail(float wholeSale, float markUp) {
  markUp = markUp / 100;
  markUp = markUp * wholeSale;
  float retailPrice = wholeSale + markUp;
  return retailPrice;
}
