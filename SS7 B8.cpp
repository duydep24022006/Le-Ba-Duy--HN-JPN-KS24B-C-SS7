#include <stdio.h>

int main(){
	int a, b; 
	printf("moi ban nhap so hang cua mang ");
	scanf("%d",&a);
	printf("moi ban nhap so cot cua mang ");
	scanf("%d",&b);
	int arr[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("moi ban nhap so o [%d][%d]",i,j);
			scanf("%d",&arr[i][j]); 
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n"); 
	}
	 return 0; 
} 
