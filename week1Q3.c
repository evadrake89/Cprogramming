#include <stdio.h>

int main() {
	int a1,b1,c1,a2,b2,c2,x,y;
	scanf("%d %d %d",&a1,&b1,&c1);
	scanf("%d %d %d",&a2,&b2,&c2);
	y = (c1*a2 - c2*a1)/(b1*a2 - b2*a1);
	x = (c1 - b1*y)/a1;
	printf("%d %d",x,y);
	return 0;
}
