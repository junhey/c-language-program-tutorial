#include <stdio.h>

int main(int argc, char *argv[]) {
	int flag=1;
	int i;
	int count=0;
	int s=0;
	while (flag) {
		scanf("%d",&i);
		if(0==i) break;
		count++;
		s+=i;
	}
	printf("%d,%d \n",s,count);
	return 0;
}
// cc input -o input.out
// cc avg.c -o avg.c
// ./input.out | ./avg.out