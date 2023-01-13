#include <stdio.h>
int Population(int x, int n);
int main()
{
  int current_population;
  int born_month;
  printf("Enter the current Population");
  scanf("%d", &current_population);
  while (current_population < 0)
  {
    printf("\nInvalid input");
    printf("Enter the current Population: ");
    scanf("%d", &current_population);
  }
  printf("How many people are born in every month: ");
  scanf("%d", &born_month);
  while (born_month < 0)
  {
    printf("\nInvalid Input");
    printf("How many people are born in every month :");
    scanf("%d", &born_month);
  }
  int expected_population = Population(current_population, born_month);
  printf("The expected population in 3 decades when the spaceship is ready will be:%d", expected_population);
}

int Population(int x, int n)
{
  // x for population and n for number of people born in every month
  // 3 decades=30 year
  // 1 year =12 months
  // 30years=30*12=360 months
  int Final = x + (n * 360);
  return Final;
}
