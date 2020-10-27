#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int x=0;
	while(n!=0){
		x=x*10+n%10;
		n/=10;
	}
	printf(" :%d",x);
}
