#include <stdio.h>

int main(){
//	int a=0,b=0,t,S1=0,C1=1;
//	scanf("%d",&a);
//	while(a!=-1){
//		if(b<a){
//			C1++;
//		} else {
//			C1 = 1;
//		}	
//		b = a;
//		if(C1>S1){
//			S1 = C1;
//		}
//		scanf("%d",&a);
//	}
//	printf("Lenght of longest contiguous increasing subsequence is %d",S1);
//	PROFESSORS CLEAN APPROACH
	int prev,curr,len = 0,maxlen = 0;
	scanf("%d",&prev);
	if(prev!=-1){
		len = 1,maxlen = 1;
		scanf("%d",&curr);
		while(curr!=-1){
			if(prev<curr){
				len++;
			} else{
				if(maxlen<len){
					maxlen = len;
				}
				len = 1;
			}
			prev = curr;
			scanf("%d",&curr);
		}
	}
	if(maxlen<len){
		maxlen = len;
	}
	printf("Lenght of longest contiguous increasing subsequence is %d",S1);
	return 0;
}
