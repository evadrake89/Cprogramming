#include <stdio.h>
#include <stdlib.h>
int main(){
	int r,c,sumc = 0,sumr = 0;
	scanf("%d %d",&r,&c);
	fflush(stdin);
	while(r>0){
		while(c>0){
			int temp;
			scanf("%d",&temp);
			sumc += temp;
			c--;
		}
		sumr += sumc*sumc;
		sumc = 0;
		r--;
	}
	printf("Desired Output is %d",sumr);
	return 0;
}
