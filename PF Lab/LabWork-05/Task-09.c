#include <stdio.h>
int usageOneSitting(int, int, int);
int totalSittings(int);
int totalCharges(int);

int totalResult = 0;
int main() {
  int sittings;
  printf("Enter Sittings In a Month: ");
  scanf("%d", &sittings);
  for(int i=1; i<=sittings; i++) {
    int hours, minutes, seconds;
    printf("Enter Hours: ");
    scanf("%d", &hours);
    printf("Enter Minutes: ");
    scanf("%d", &minutes);
    printf("Enter Seconds: ");
    scanf("%d", &seconds);

    int totalTime = usageOneSitting(hours, minutes, seconds);
    // printf("Sitting One: %d", totalTime);
    totalSittings(totalTime);
  }
  int finalResult = totalCharges(totalResult);
  printf("Total Result: %d\n", totalResult);
  printf("Final Result: %d\n", finalResult);
  return 0;
}
int usageOneSitting(int hours, int minutes, int seconds) {
  int totalTime;
  hours = hours * 3600;
  minutes = minutes * 60;
  totalTime = hours + minutes + seconds;
  return totalTime;
}
int totalSittings(int sittings) {
  totalResult = totalResult + sittings;
}
int totalCharges(int num) {
  num = num / 3600;
  int charges = 25 * num;
  return charges;
}
