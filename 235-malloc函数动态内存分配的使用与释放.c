//#include <stdio.h>
//#include <stdlib.h>
//#include <inttypes.h>
//
//int main() {
//
//	//静态内存定义
//	int static_arr[5] = { 1, 2, 3, 4, 5 };
//
//	
//
//	// 动态内存定义（不要在C中给malloc的返回值做强制转换）
//	int* dynamic_arr = malloc(5 * sizeof(int));
//
//	// 申请内存后立即检查是否成功，避免在空指针上读写导致未定义行为或警告
//	if (dynamic_arr == NULL) {
//		perror("动态数组分配失败");
//		exit(EXIT_FAILURE);
//	}
//	
//	
//	
//	puts("静态数组内容:");
//	for (size_t i = 0; i < 5; i++) {
//		printf("%d ", static_arr[i]);
//	}
//	puts("");
//
//	for (size_t i = 0; i < 5; i++) {
//		dynamic_arr[i] = ((int)i + 1) * 10;
//	}
//	
//	puts("动态数组内容:");
//	for (size_t i = 0; i < 5; i++) {
//		printf("%d ", dynamic_arr[i]);
//	}
//	puts("");
//
//	free(dynamic_arr);
//
//	return 0;
//}