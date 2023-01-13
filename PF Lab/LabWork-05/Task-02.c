#include <stdio.h>
int getScore();
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);
int main() {
  int testScore1 = getScore();
  int testScore2 = getScore();
  int testScore3 = getScore();
  int testScore4 = getScore();
  int testScore5 = getScore();

  calcAverage(testScore1, testScore2, testScore3, testScore4, testScore5);
  return 0;
}
int getScore() {
  int score;
  printf("Enter Your Test Score: ");
  scanf("%d", &score);
  while(score < 0 || score > 100) {
    printf("Enter Your Test Score Again: ");
    scanf("%d", &score);
  }
  return score;
}
void calcAverage(int score1, int score2, int score3, int score4, int score5) {
  int lowestScore = findLowest(score1, score2, score3, score4, score5);
  float average = score1 + score2 + score3 + score4 + score5;
  average = average - lowestScore;
  average = average / 4;
  printf("Average: %.2f", average);
}
int findLowest(int score1, int score2, int score3, int score4, int score5) {
  if((score1 <= score2) && (score1 <= score3) && (score1 <= score4) && (score1 <= score5)) {
    // printf("Lowest Score: %d", score1);
    return score1;
  }
  else if((score2 <= score1) && (score2 <= score3) && (score2 <= score4) && (score2 <= score5)) {
    // printf("Lowest Score: %d", score2);
    return score2;
  }
  else if((score3 <= score1) && (score3 <= score2) && (score3 <= score4) && (score3 <= score5)) {
    // printf("Lowest Score: %d", score3);
    return score3;
  }
  else if((score4 <= score1) && (score4 <= score2) && (score4 <= score3) && (score4 <= score5)) {
    // printf("Lowest Score: %d", score4);
    return score4;
  }
  else {
    // printf("Lowest Score: %d", score5);
    return score5;
  }
}
