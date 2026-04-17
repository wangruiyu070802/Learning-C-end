//#include <stdio.h>
//#include <stdlib.h>
//#include <inttypes.h>
//#include <errno.h>
//
//int main() {
//	FILE* file_stream = NULL;
//
//	char buffer[256];
//
//	//fopen();
//	//fopen_s();
//
//	//打开文件，设定文件路径要读取的文件，设定文件的操作模式r
//	errno_t err = fopen_s(&file_stream, "C:\\Users\\TylerRay\\OneDrive\\Desktop\\Fast-enter\\git-orders\\远程创建仓库后建立连接.txt", "r");
//
//	//err == 0：表示正常读取
//	if (err != 0 || file_stream == NULL) {
//		perror("Error opening file");
//		return EXIT_FAILURE;
//	}
//
//	while (fgets(buffer, sizeof(buffer), file_stream)) {
//		printf("%s", buffer);
//	}
//
//
//
//
//
//
//
//	fclose(file_stream);
//
//
//
//
//
//	return 0;
//}