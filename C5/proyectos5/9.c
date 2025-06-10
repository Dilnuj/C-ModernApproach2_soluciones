#include <stdio.h>

int main(){
int d, m, y;
int d2, m2, y2;

printf("Enter first date: ");
scanf("%d/%d/%d", &d, &m, &y);

printf("Enter second date: ");
scanf("%d/%d/%d", &d2, &m2, &y2);

int a;


if ( y > y2 ) { 
	a = 1;
} else if ( y < y2 ) {
	a = 2;
} else {
	if ( m > m2 ) {
		a = 1;
	} else if ( m < m2 ) {
		a = 2;
		} else {
			if ( d > d2 ){
				a = 1;
			} else if ( d < d2 ){
				a = 2;
			} else {
				a = 0;
			}
		}
	}

if (a == 1){
	printf("%d/%d/%d es mas reciente que %d/%d/%d\n ",d,m,y,d2,m2,y2);
} else if (a == 2){
	printf("%d/%d/%d es menos reciente que %d/%d/%d\n ",d,m,y,d2,m2,y2);
} else { 
	printf("%d/%d/%d es igual que %d/%d/%d \n",d,m,y,d2,m2,y2);
}
	
return 0;


}
