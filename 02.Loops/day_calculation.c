#include <stdio.h>

int main () {
	int d=27, m=6, y=2015, weekday ;
	printf("Enter date, month and year: ");
	scanf("%d%d%d",&d,&m,&y);
	weekday  = (d+=m<3?y--:y-2,23*m/9+d+4+y/4-y/100+y/400)%7  ;
	printf("The day of the week is : ");
	switch(weekday) {
		case 0:
			printf(" Sunday.\n");
			break;
		case 1:
                        printf(" Monday.\n");
			break;
		case 2:
                        printf(" Tuesday.\n");
			break;
		case 3:
                        printf(" Wednesday.\n");
			break;
		case 4:
                        printf(" Thursday.\n");
			break;
		case 5:
                        printf(" Friday.\n");
			break;
		case 6:
                        printf(" Saturday.\n");
												break;
	}
	return 0;
}
