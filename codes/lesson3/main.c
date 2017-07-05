#include <stdio.h>

/*
stdin
stdout
stderr
*/

int main(int argc, char *argv[]) {
	printf("welcome \n");
	int a;
	scanf("%d",&a);
	printf("input a value is :%d \n",a);
	
	//printf("input a value a : \n");
	fprintf(stdout, "input a value a : \n");
	//scanf("%d",&a);
	fscanf(stdin, "%d", &a);
	
	if(a<0){
		fprintf(stderr, "the value must >0 \n");
		return 1;
	}
	
	return 0;
}