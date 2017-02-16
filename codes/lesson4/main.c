#include <stdio.h>

int main(int argc, char *argv[]) {
	//./main.out 1>out.txt 2>false.txt <input.txt
	printf("input the int value i: \n");
	int i,j;
	scanf("%d",&i);
	printf("input the int value j: \n");
	scanf("%d",&j);
	printf("%d+%d=%d\n",i,j,i+j);
	return 0;
}