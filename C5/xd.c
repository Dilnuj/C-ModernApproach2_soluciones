#include <stdio.h>

int main() {
int i;

scanf("%d" ,&i);

printf("%d\n", i >= 0 ? i : -i);
return 0;
}
