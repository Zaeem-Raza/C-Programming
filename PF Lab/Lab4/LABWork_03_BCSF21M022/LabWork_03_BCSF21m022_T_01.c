#include <stdio.h>
int main(){
int num;
int x=1;
printf("Enter number of rows");
scanf("%d",&num);
while(num<1){
  printf("Wrong input\nEnter again");
  scanf("%d",&num);
}

for(int i=1;i<=num;i++)    /*outer loop*/{
   int j=1;
           for(int k=1;k<=num;k++)   /*inner loop*/{
              printf("%d ",j);
                  j+=x;
                }
  printf("\n");
  x+=1;
}

}
