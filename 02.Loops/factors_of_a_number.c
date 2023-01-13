                      /*10=1,2,5*/

#include <stdio.h>
int main(){
int num;
printf("Enter a number");
scanf("%d",&num);
int i=1;
printf("All factors of %d are:",num);
for(int i=1;i<=num;i++){
  if(num%i==0){
    printf("%d, ",i);
  }

}
}
