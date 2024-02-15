/* You are given a sequence of bits (1's and 0's).
The sequence is said to have even parity if and only if the number of 1's in the sequence if even.

Write a C program to that outputs 1 if the sequence has even parity and 0 otherwise.*/

#include <stdio.h>

int main(){
	int a,count=0;
	scanf("%d",&a);
	while(a!=-1){
		if(a == 1){
			count++;
		}
		scanf("%d",&a);
	}
	if(count%2==0){
		printf("1");
	} else{
		printf("0");
	}
	return 0;
}
