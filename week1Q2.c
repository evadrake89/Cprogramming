#include <stdio.h>

int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a>=b && a>=c) || (a<=b && a<=c)){
		if((b>=c && a<=b) || (c>=b && a>=b)){
			printf("%d\n",c);
		} else {	
			printf("%d\n",b);
		}
	} else {
		printf("%d\n",a);
	}
	return 0;
}
