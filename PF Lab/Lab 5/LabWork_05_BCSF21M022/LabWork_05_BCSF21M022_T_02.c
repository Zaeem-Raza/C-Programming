#include <stdio.h>
int getScore();
void calcAverage(int a,int b,int c,int d,int e);
int findLowest(int v,int w,int x,int y,int z);



int main(){
 int score1=getScore();
 int score2=getScore();
 int score3=getScore();
 int score4=getScore();
 int score5=getScore();
calcAverage(score1,score2,score3,score4,score5);
int lowest=findLowest(score1,score2,score3,score4,score5);
   printf("\nThe lowest marks are %d\nThe student must be dropped" ,lowest);

}


int getScore(){
  int num;
// getting input
  printf("Enter marks :");
  scanf("%d",&num);
while(num<0||num>100){
  printf("Invalid Input\nEnter marks");
  scanf("%d",&num);
}
 return num;
}
void calcAverage(int a,int b,int c,int d,int e){
    int average;
    int lowest=findLowest(a,b,c,d,e);
    int sum=a+b+c+d+e;
    sum=sum-lowest;
    average=sum/4;
    printf("The average is %d",average);
}
int findLowest(int v,int w,int x,int y,int z){
   if(v<=w&&v<=x&&v<=y&&v<=z){
     return v;
   }
   if(w<=v&&w<=x&&w<=y&&w<=z){
     return w;
   }
   if(x<=v&&x<=w&&x<=y&&x<=z){
     return x;
   }
   if(y<=v&&y<=w&&y<=x&&y<=z){
     return y;
   }

   if(z<=v&&z<=w&&z<=x&&z<=y){
     return z;
   }
}
