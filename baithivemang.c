#include <stdio.h>
int main(){
	int n;
	printf("Nhap so: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	int a=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			a=arr[i];
		}
	}
	if(a!=0){
		printf("%d",a);
	}else{
		printf("khong co so can tim");
	}
}
