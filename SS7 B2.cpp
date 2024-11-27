#include <stdio.h>

int main(){
	int numberlist[5],i=0;
	do{
		printf("moi ban nhap so ");
		scanf("%d",&numberlist[i]);
		i++;
	}while(i<=4);
	for(i=0;i<=4;i++){
		printf("so thu nhat la: %d\n",numberlist[i]);
	}
	return 0;

}

