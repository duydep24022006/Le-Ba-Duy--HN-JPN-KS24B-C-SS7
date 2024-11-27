#include <stdio.h>

int main(){
	int n;
	printf("moi ban nhap vao so luong phan tu cua mang ");
	scanf("%d",&n);
	int list[n];
	for(int i = 0;i<n;i++){
		printf("moi ban nhap so %d ",i +1);
		scanf("%d",&list[i]);
	}
	for(int i = 0;i<n;i++){
		printf("%d ",list[i]);
	}
	return 0;
}
