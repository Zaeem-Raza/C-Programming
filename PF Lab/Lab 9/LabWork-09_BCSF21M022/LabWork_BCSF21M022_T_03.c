#include <stdio.h>
#define SIZE 100
int main()
{
    char salsa[5][SIZE] = {"mild", "medium", "sweet", "hot", "zetsy"};
    int jars[5];
    char month[SIZE];
    printf("Enter month: ");
    scanf("%[^\n]%*c", month);
    int sum = 0;
    int highest=0;
    int lowest=999999;
    int high_index;
    int low_index;
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the jars for %s :", salsa[i]);
        scanf("%d", &jars[i]);
        while (jars[i] < 0)
        {
            printf("Invalid Input\nEnter Again");
            scanf("%d", &jars[i]);
        }
        sum += jars[i];
        if(jars[i]<lowest){
            lowest=jars[i];
            low_index=i;
        }
        if(jars[i]>highest){
            highest=jars[i];
            high_index=i;
        }
    }

    printf("\n\n\n");
    // <---------Main Display-------->
    printf("Sales report for %s\n", month);
    printf("_______________________");
    printf("\n\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n %s Salsa :%d", salsa[i], jars[i]);
    }
    printf("\n\n\n");

    printf("\nTotal Sales: %d", sum);
    int revenue=sum*550;
    printf("\nTotal Revenue generated: %d",revenue);
    printf("\nHighest sold Product :%s Salsa",salsa[high_index]);
    printf("\nLowest sold Product :%s Salsa", salsa[low_index]);
}
