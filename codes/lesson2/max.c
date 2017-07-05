#include <stdio.h>

int max(int a ,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}

int main(int argc, char *argv[]) {
	int a1=2;
	int a2=3;
	int maxNum=max(a1,a2);
	printf("the max value is %d \n",maxNum);
	return 0;
}
