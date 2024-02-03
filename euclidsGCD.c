#include <stdio.h>

int nonrecursive_gcd(int a,int b){
	while(a%b!=0){
		int temp = b;
		b = a%b;
		a = temp;
	}
	return b;
}

int main() {
	int a,b;
	printf("Enter two Numbers: ");
	scanf("%d %d",&a,&b);
	int l,s;
	if(a>b){
		l = a;
		s = b;
	} else{
		l = b;
		s = a;
	}
	printf("GCD of given two numbers is %d",nonrecursive_gcd(l,s));
	return 0;
}
