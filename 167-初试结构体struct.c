//#include <stdio.h>
//#include <inttypes.h>
//
//typedef struct Person {
//	char name[50];
//	int32_t age;
//	float height;
//}Person;
//
//typedef struct Date {
//	int32_t day;
//	int32_t month;
//	int32_t year;
//}Date;
//
//
//int main() {
//
//	Person TylerRay = { "TylerRay", 18, 185.5 };
//
//	Date today = { 21, 3, 2026 };
//
//	printf("%s is %d years old %.2f m tall\n", TylerRay.name, TylerRay.age, TylerRay.height);
//
//	//作为变量输出
//	printf("Today is %d-%d-%d.\n", today.year, today.month, today.day);
//
//	Date* date_ptr = &today;
//
//	//作为指针输出
//	printf("Accessed via pointer: %d-%d-%d\n", date_ptr->year, date_ptr->month, date_ptr->day);
//
//
//
//	return 0;
//}