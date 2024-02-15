

#include <stdio.h>

int main(){
	int a;
	int totalZero = 0;
	int position1FromExit = 0;
	int position1marker = 0;
	int flagCountingStarted = 0;
	scanf("%d",&a);
	while(a!=-1){
		if(a == 1 && flagCountingStarted == 0){
			flagCountingStarted = 1;
		}
		if( a == 0 && flagCountingStarted == 1){
			totalZero++;
		}
		if(a == 1 && flagCountingStarted == 1){
			position1marker = 1;
			position1FromExit = 0;
		}

		if( a==0 && position1marker == 1){
			position1FromExit++;
		}
		scanf("%d",&a);
	}
	if (totalZero > position1FromExit){
		printf("%d",totalZero-position1FromExit);
	} else if(totalZero == position1FromExit){
		printf("%d",0);
	}

}
