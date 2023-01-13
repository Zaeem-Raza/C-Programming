#include <stdio.h>
int main() {
	/*Input three numbers.Determine whether all are same, all are different, or exactly two are same.So
		your pseudo code will display one of the following message :
		 All are same
       • All are different
       • Exactly two are same
    */
	int x, y, z;
	printf("Enter three numbers");
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);


	if( (x==y) && (y==z)) {
		printf("All are equal");
	}
	else if ((x==y) || (y==z) || (x==z)) {
		printf("Exactly two are same");
	}
	else {
		printf("All are different");
	}
}
