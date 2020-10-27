
#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap vao 1 so nguyen duong: ");
		scanf("%d",&n);
	}while(n <=2);
	int b=0,c=1,d=1;
	for(int i=3;i<=n;i++){
		b = c;
		c = d;
		d = b+c;
	}
	printf("So thu %d trong day Fibo: %d",n,d);
}
