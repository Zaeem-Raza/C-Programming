#include <stdio.h>
int totalPopulation(int num);
int main() {
  int population;
  int born;

  printf("Enter the World Population: ");
  scanf("%d", &population);
  while(population < 1) {
    printf("Enter the World Population Again: ");
    scanf("%d", &population);
  }
  printf("Enter the Numer of People Born: ");
  scanf("%d", &born);
  while(born < 0) {
    printf("Enter the Numer of People Born Again: ");
    scanf("%d", &born);
  }
  int total = totalPopulation(born);
  printf("Total: %d\n", total);
  total = total + population;
  printf("Total Population After 3 Decades: %d", total);
  return 0;
}
int totalPopulation(int num) {
  int population = num * 360;
  return population;
}
