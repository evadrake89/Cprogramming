#include <stdio.h>

int main(){
	int r100 = 0,r10 = 0,r1 = 0,amt = 0;
	scanf("%d %d %d %d",&r100,&r10,&r1,&amt);
	int affordable_price = r100*100 + r10*10 + r1*1;
	if(affordable_price >= amt){
		printf("1\n");
	} else{
		printf("0\n");
	}
	return 0;
}
