#include <stdio.h>

int main() {
	int r,c,sum=0;
	scanf("%d %d",&r,&c);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			int temp;
			scanf("%d",&temp);
			if(i==j){
				sum+=temp;
			}
		}
	}
	printf("Trace of matrix is %d",sum);
	return  0 ;
}
