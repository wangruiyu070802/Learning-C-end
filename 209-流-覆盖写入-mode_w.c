//#include <stdio.h>
//#include <inttypes.h>
//#include <string.h>
//#include <errno.h>
//#include <stdlib.h>
//
//int main() {
//
//	FILE* fp = NULL;
//
//	errno_t res = fopen_s(&fp, "D:\\Tool-Devs\\Item-C\\Learning-C-end\\context.txt", "w");
//	if (res != 0 || fp == NULL) {
//		perror("Failed to open file");
//		return EXIT_FAILURE;
//	}
//
//	fputs("Hello, bitch!", fp);
//
//	fputs("\n", fp);
//
//	fprintf_s(fp, "测试格式化输入 数字：%d, 字符串%s\n", 1, "fuck ppt!");
//
//	fputc('c', fp);
//
//	fputs("cinimadebi", fp);
//
//	fclose(fp);
//
//	puts("File 'context.txt' has been written successfully.");
//
//	return 0;
//}