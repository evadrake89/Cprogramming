#include <stdio.h>

int main(){
	char prev,curr='\n';
	int maxchar,i;
	scanf("%d",&maxchar);
	getchar();
	for(int i=0;i<maxchar;i++){
		prev = curr;
		curr = getchar();
		if(prev == '\n' && curr == '\n'){
			break;
		}
	}
	printf("%d",i);
	return 0;
}
