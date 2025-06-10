#include <stdio.h>

int main(){
	int h, m;
	int res;
	scanf("%d:%d", &h, &m);
	res = (h * 60) + m;
	printf("%d\n", res);
	return 0;
}
