//#include <stdio.h>
//#include <inttypes.h>
//
//typedef struct Student {
//	char name[50];
//	int32_t id;
//	int32_t grade;
//} Student;
//
//void printf_str(Student* stu);
//
//void update_value(Student* stu, int32_t grade);
//
//int main() {
//
//	Student TylerRay = { "TylerRay", 254040108, 1 };
//
//	printf_str(&TylerRay);
//
//	update_value(&TylerRay, 2);
//
//	printf_str(&TylerRay);
//
//	return 0;
//}
//
//void printf_str(Student* stu) {
//	printf("Studen's name:%s\nStuden's id:%" PRId32 "\nStudent's Grade:%" PRId32 "\n\n", stu->name, stu->id, stu->grade);
//}
//
//void update_value(Student* stu, int32_t grade) {
//	stu->grade = grade;
//}
