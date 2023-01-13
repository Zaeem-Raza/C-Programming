//print prime numbers in an array
#include <stdio.h>
int main()
{
    int a[100],i,j,n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The prime numbers in the array are: ");
    for(i=0;i<n;i++)
    {
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                break;
            }
        }
        if(j==a[i])
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}


