#include <stdio.h>

int main(){
	int numberList[] = {1,2,3,4,5,};
	for(int i = 0;i<=4;i++){
		printf("%d\n",numberList[i]);	 
	} 
	int dodai = sizeof(numberList) / sizeof(numberList[0]);
	printf("do dai cua mang la: %d",dodai );
	return 0; 
}
