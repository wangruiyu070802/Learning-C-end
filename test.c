#include <stdio.h>
#include <inttypes.h>

int main() {

	int32_t* p;
	int32_t x = 404;

	p = &x;
	//p所指向的值的地址
	printf("%p\n\n", p);

	//p解引用，输出指向的那个值
	printf("%d\n\n", *p);

	//p指针本身的地址
	printf("%p\n\n", &p);







	return 0;
}