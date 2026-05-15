////#include <stdio.h>
////#include <stdlib.h>
////#include <string.h>
////
////typedef struct Member {
////	char name[50];
////	int age;
////	struct Member* next;
////} Member;
////
////int main() {
////
////	Member* head;
////	Member* A = (Member*)malloc(sizeof(Member));
////	Member* B = (Member*)malloc(sizeof(Member));
////	head = A;
////
////
////	strcpy(A->name, "Alice");
////	strcpy(B->name, "Bob");
////
////
////	A->age = 18;
////	B->age = 30;
////	
////	A->next = B;
////	B->next = NULL;
////
////	printf("%s", A->next->name);
////	printf("Stash.c: 已修改并保存\n");
////
////	free(A);
////	free(B);
////
////	return 0;
////}
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct Member {
//    char name[50];
//    int age;
//    struct Member* next;
//} Member;
//
//Member* create_member(const char* name, int age);
//void print_list(const Member* head);
//void destroy_list(Member* head);
//
//int main(void) {
//    Member* head = NULL;
//    Member* A = create_member("Alice", 18);
//    Member* B = create_member("Bob", 30);
//
//    if (A == NULL || B == NULL) {
//        free(A);
//        free(B);
//        fprintf(stderr, "memory allocation failed\n");
//        return 1;
//    }
//
//    head = A;
//    A->next = B;
//
//    print_list(head);
//    destroy_list(head);
//
//    return 0;
//}
//
////创建成员
//Member* create_member(const char* name, int age) {
//    Member* node = malloc(sizeof(Member));
//    if (node == NULL) {
//        return NULL;
//    }
//
//    memset(node, 0, sizeof(Member));
//    strncpy(node->name, name, sizeof(node->name) - 1);
//    node->age = age;
//    node->next = NULL;
//
//    return node;
//}
//
////打印链表
//void print_list(const Member* head) {
//    const Member* p = head;
//    while (p != NULL) {
//        printf("name=%s, age=%d\n", p->name, p->age);
//        p = p->next;
//    }
//}
//
////销毁链表
//void destroy_list(Member* head) {
//    Member* p = head;
//    while (p != NULL) {
//        Member* next = p->next;
//        free(p);
//        p = next;
//    }
//}
//
