#include <stdio.h>
void average(int [][5]);
void testAverage(int [][5]);
int main(){
    int marks[3][5];
    for(int i=0;i<3;i++){
        printf("Student :%d\n",i+1);
        for(int j=0;j<5;j++){
            printf("Enter marks of Test %d: ",j+1);
             scanf("%d",&marks[i][j]);
             while(marks[i][j]<0||marks[i][j]>100){
                printf("Invalid marks\nEnter again: ");
                scanf("%d",&marks[i][j]);
             }
        }
    }

   average(marks);
   testAverage(marks);
}
void average(int marks[][5]){
    for(int i=0;i<3;i++){
        printf("\nAverage of student %d: ",i+1);
            float sum=0;
            float avg=0;
        for(int j=0;j<5;j++){
            sum+=marks[i][j];
        }
           avg=sum/5;
           printf("%.2f",avg);
    }
}
void testAverage(int marks[][5]){
printf("\n\n");
 for(int i=0;i<5;i++){
       printf("\nAverage marks of test #%d: ",i+1);
       float sum=0;
       float avg=0;
       for(int j=0;j<3;j++){
            sum+=marks[j][i];
       }
       avg=sum/5;
       printf("%.2f",avg);
 }
}
