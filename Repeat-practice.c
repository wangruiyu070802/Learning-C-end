//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	//定义文件流
//	FILE* source_file;
//	FILE* target_file;
//
//	//定义文件地址
//	char source_path[] = "D:\\03_Dev\\Repos\\Learning-C-end\\context.txt";
//	char target_path[] = "D:\\03_Dev\\Repos\\Learning-C-end\\context_index.txt";
//
//	//定义缓冲区 ??
//	char buffer[1024];
//
//	//定义读取的字节数 ??
//	size_t bytes_read;
//
//	//读取源文件的内容
//	errno_t err = fopen_s(&source_file, source_path, "rb");
//	if (err != 0 || source_file == NULL) {
//		perror("无法打开源文件！");
//		return EXIT_FAILURE;
//	}
//
//	//写入内容到目标文件
//	err = fopen_s(&target_file, target_path, "wb");
//	if (err != 0 || target_file == NULL) {
//		perror("无法打开目标文件！");
//		fclose(source_file);
//		return EXIT_FAILURE;
//	}
//
//	//循环 ??
//	while ((bytes_read = fread(buffer, 1, sizeof(buffer), source_file)) > 0) {
//		fwrite(buffer, 1, bytes_read, target_file);
//	}
//
//	_fcloseall();
//
//	puts("File has been copied.");
//
//	return 0;
//}