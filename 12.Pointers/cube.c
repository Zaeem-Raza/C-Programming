#include <stdio.h>
void Cube(int *p){
    *p=(*p)*(*p)*(*p);
}
int main(){
 
 int x=5;
    Cube(&x);
    printf("%d",x);
    return 0;
    
}