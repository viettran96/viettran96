#include <stdio.h>
int main(){
	
	int n;
	printf("Nhap n=");
	scanf("%d",&n);

	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[] = ");
		scanf("%d",&arr[i]);
		
		for(int j=0;j<i;j++){
			for(int k=0;k<i-j;k++){
				if(arr[k]>arr[k+1]){
					int tmp = arr[k];
					arr[k] = arr[k+1];
					arr[k+1] = tmp;
				}
			}
		}
		
		printf("in thu xem moi xong nhap gia tri:\n");
		for(int k=0;k<=i;k++){
			printf("%5d",arr[k]);
		}
		printf("\n In xong \n");
	}
	
	printf("Mang sau khi nhap:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
