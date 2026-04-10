//#include <stdio.h>
//#include <inttypes.h>
//
//typedef union {
//	int int_value;
//	float float_value;
//	char* string_value;
//} Data;
//
//typedef enum {
//	INT,
//	FLOAT,
//	STRING
//} DataType;
//
//typedef struct {
//	DataType type;
//	Data data;
//} TypedData;
//
//void print_data(TypedData* typed_data);
//
//int main(void) {
//
//	TypedData data1 = { INT, {.int_value = 10} };
//
//	TypedData data2 = { FLOAT, {.float_value = 3.14 } };
//
//	TypedData data3 = { STRING, {.string_value = "Hello, union!"} };
//
//	print_data(&data1);
//	print_data(&data2);
//	print_data(&data3);
//
//	return 0;
//}
//void print_data(TypedData* typed_data) {
//	switch (typed_data->type) {
//	case INT: 
//		printf("Integer: %d\n", typed_data->data.int_value);
//		break;
//	case FLOAT: 
//		printf("Float: %f\n", typed_data->data.float_value); 
//		break;
//	case STRING:
//		printf("String: %s\n", typed_data->data.string_value); 
//		break;
//	}
//}
