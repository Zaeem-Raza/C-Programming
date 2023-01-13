#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *f;
    f = fopen("a.txt", "w");
    if(f) {
        int rollno;
        printf("Enter Roll NO: ");
        scanf("%d", &rollno);
        fprintf(f, "%d", rollno);
        fprintf(f, "\nHello World!");
    } else {
        printf("File Not Found");
    }
    return 0;
}
