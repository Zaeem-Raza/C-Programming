#include <stdio.h>
int main(){
  int k;
  printf("Enter a number ");
  scanf("%d",&k);

 // terms
 int t1=0; int t2=1;
 int nextterm=t1+t2;

printf("The fibonnaci Series :%d,%d,",t1,t2);

for(int i=1;i<=k;i++){
    printf("%d, ",nextterm);
  t1=t2;
  t2=nextterm;
  nextterm=t1+t2;

}
}
