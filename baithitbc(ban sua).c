#include <stdio.h>
#include "hamtrungbinhcong.h"
int main(){
 int n;
 printf("nhap so:");
 scanf("%d",&n);
 int arr[n];
 float x;
 x=TrungBinhCong(arr,n);
 printf("%f",x);
}
B?n dã g?i
kho?ng 1 phút tru?c
#include <stdio.h>
float TrungBinhCong(int arr[],int n){
 printf("So phan tu trong mang: \n");
 for(int i=0;i<n;i++){
  printf("arr[%d]=",i);
  scanf("%d",&arr[i]);
 }
 int x=0;
 float everage;
 for(int i=0;i<n;i++){
  x = x + arr[i];
   TBC = (float)x/n;
 }
 return everage;
