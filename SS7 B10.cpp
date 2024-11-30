#include <stdio.h>

int main(){
	int n, i; 
	printf("moi ban nhap so phan tu ");
	scanf("%d",&n);
	int arr[n];
	while(i<n){
		printf("\n moi ban nhap so thu %d ",i+1);
		scanf("%d",&arr[i]); 
		i++; 
		} 
	for(i=0;i<n;i++){
		if(i==2||i==3 || i>1 && i%2!=0){
		printf("\n %d la so nguyen to cua mang vua nhap\n",arr[i]);
		}else{
			continue; 
		} 
	} 
	printf("\n tang 1 phieu be ngoan ne");
	return 0; 
} 
