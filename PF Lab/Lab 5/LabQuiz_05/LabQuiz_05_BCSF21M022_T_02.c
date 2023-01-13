#include <stdio.h>
void showIntro();
double getCups(double cup);
double cupsToOunces(double x);

int main()
{
  double cup;
  showIntro();
  double Answer = cupsToOunces(getCups(cup));
  printf("The ounces are %lf", Answer);
}

void showIntro()
{
  printf("Welcome to the cups to ounce calculator\nThis program converts the number of cups to ounces");
}

double getCups(double cup)
{
  printf("Enter the number of cups");
  scanf("%lf", &cup);
  return cup;
}
double cupsToOunces(double y)
{

  y = x * 8;
  return y;
}
