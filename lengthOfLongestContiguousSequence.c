#include <stdio.h>

int main(){
	int a=0,b=0,t,S1=0,C1=0;
	scanf("%d",&a);
	while(a!=-1){
		if(b<a){
			C1++;
		} else {
			C1 = 0;
		}	
		b = a;
		if(C1>S1){
			S1 = C1;
		}
		scanf("%d",&a);
	}
	printf("Lenght of longest contiguous increasing subsequence is %d",++S1);
	return 0;
}
