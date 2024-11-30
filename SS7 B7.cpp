#include <stdio.h>

int main(){
	int n, i; 
	printf("moi ban nhap so phan tu ");
	scanf("%d",&n);
	int arr[n];
	while(i<n){
		printf("\n moi ban nhap so thu %d ",i+1);
		scanf("%d",&arr[i]); 
		if(arr[i]%2==0){
			printf("\n  nhap lai \n");
		}else{
			i++; 
		} 
	} 
	printf("tang 1 phieu be ngoan ne");
	return 0; 
} 
