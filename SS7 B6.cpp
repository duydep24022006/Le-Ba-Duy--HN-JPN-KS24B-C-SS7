#include <stdio.h>

int main(){
	int list[5],i;
	for(i=0;i<=4;i++){
		printf("moi ban nhap lan %d ",i+1);
		scanf("%d",&list[i]);
	}
	for(i=0;i<=4;i++){
		if(list[i]%2==0){
			printf("%d ",list[i]+3);
		}else{
			printf("%d ",list[i]+2);
		}
	}
	return 0;
}
