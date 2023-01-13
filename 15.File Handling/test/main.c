//read file 
//write file 
//append file
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    FILE *f=fopen("write.txt","w");
    char name[SIZE];
    int age;
    int i=0;
    if(f){
        
       while( i<3){
           printf("Enter name and age: ");
           scanf("%s %d",name,&age);
           fprintf(f,"%s %d ",name,age);
              i++;
              
    }
    fclose(f);
    }
    else{
        printf("File not found");
    }
   
    return 0;
}