//#define _USE_MATH_DEFINES
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//#include <inttypes.h>
//#include <math.h>
//
//int main() {
//	double number = 0.0;
//	double result = 0.0;
//
//	printf("请输入一个数字以计算其平方根：\n");
//	scanf_s("%lf", &number);
//
//	errno = 0;
//
//	if (errno == EDOM) {
//		printf("错误：输入值为负数， 无法计算其平方根！\n");
//	}
//	else if (errno == ERANGE) {
//		printf("错误：结果超出范围！\n");
//	}
//	else if (errno == HUGE_VAL) {
//		printf("数字%.2f的平方根为：%.2f\n", number, result);
//	}
//
//
//	return 0;
//}