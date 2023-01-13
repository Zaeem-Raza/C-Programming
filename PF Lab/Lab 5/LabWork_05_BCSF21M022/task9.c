#include <stdio.h>
int TotalTime;
int time(int hours,int mins,int secs);
int Time(int x);
int Charges(int n);
int main(){
  int a;
int Charge=Charges(a);
printf("Total charges:%d",Charge);
}
int time(int hours,int mins,int secs){
int sittings;
printf("Enter the number of sittings");
scanf("%d",&sittings);
  int i=1; 
  printf("Enter hours:minutes:Seconds");
  scanf("%d:%d:%d",&hours,&mins,&secs);


  int var1=hours*3600;
  int var2=mins*60;
  int Seconds=var1+var2+secs;
 // TotalTime=TotalTime;
  return Seconds;
}
int Time(int x){
  int hours,mins,secs;
  TotalTime=time(hours,mins,secs);
  int Hours=TotalTime/3600;
  int Mins=TotalTime/60;
  int Seconds=TotalTime;
  return Hours;
}
int Charges(int n){
  int x=Time(n);
  return x*25;
}
