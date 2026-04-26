//#include <stdio.h>
//#include <string.h>
//#include <inttypes.h>
//#include <errno.h>
//#include <stdlib.h>
//
//void clear_log(const char* filename);
//void append_log_s(const char* filename, const char* msg);
//
//int main() {
//
//	const char* config_filename = "D:\\03_Dev\\Repos\\Learning - C - end\\context.txt";
//
//
//	return 0;
//}
//
//void clear_log(const char* filename) {
//	FILE* file_ptr = NULL;
//
//	errno_t err = fopen_s(&file_ptr, filename, "w");
//
//	if (err != 0 || file_ptr == NULL) {
//
//		char error_msg[256];
//
//		strerror_s(error_msg, sizeof(error_msg), errno);
//
//		fprintf(stderr, "Failed to open config file for reading: %s\n", error_msg);
//		exit(EXIT_FAILURE);
//
//	}
//	_fcloseall();
//}
//
//
//void append_log_s(const char* filename, const char* msg) {
//
//}
