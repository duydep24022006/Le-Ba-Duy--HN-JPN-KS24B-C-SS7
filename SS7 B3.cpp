#include <stdio.h>

int main(){
	int list[5],i=0,j=0;
	while(i<=4){
		printf("moi ban nhap so \n");
		scanf("%d",&list[i]);
		i++;
		}
	i=0;
	do{
		if(list[i]%2==0){
			printf("so chan da nhap la: %d\n",list[i]);
			j++;
		}
		i++;			
	}while(i<=4);
		if(j==0){
		printf("mang khong chua so chan\n");
}
	return 0;	
		
}

