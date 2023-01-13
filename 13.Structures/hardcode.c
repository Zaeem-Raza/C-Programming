#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
struct Student {
    int SR;
    char name[20];
    float marks;
};
int main(void)
{    
    struct Student s[5];
    s[0]= (struct Student){1,"Zaeem",22.22};  
    s[1]= (struct Student){2,"Asad",45.2};  
    s[2]= (struct Student){3,"Habban",35.46};  
    s[3]= (struct Student){4,"Mani",35.34};  
    s[4]= (struct Student){5,"Haider",25.34};  
   
   for(int i=0;i<5;i++){
     printf("Serial Number: %d\t\t Name: %s\t\t Marks: %.2f\n",s[i].SR,s[i].name,s[i].marks);
   }
    return 0;
}