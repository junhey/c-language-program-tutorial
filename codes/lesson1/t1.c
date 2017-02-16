#include <stdio.h>
//相当于把max.c里的代码复制在这里
#include "max.c"

int main() {
	int a1=2;
	int a2=3;
	int maxNum=max(a1,a2);
	printf("the max value is %d \n",maxNum);
	return 0;
}

//gcc max.c t1.c -o main.out  编译

//./main.out 执行

//gcc max.c -o main.out 编译

//./main.out 执行