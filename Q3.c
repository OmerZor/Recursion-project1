//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int lex(char* str1, char* str2);
//
//void main() {
//	char str1[20], str2[20];
//	printf("enter strings\n");
//	gets(str1);
//	gets(str2);
//	printf("%d", lex(str1, str2));
//}
//
//
//int lex(char* str1, char* str2) {
//	if (!*str1 && !*str2) {
//		return 0;
//	}
//	else
//		if (*str1 == *str2) {
//			lex((str1 + 1), (str2 + 1));
//		}
//		else 
//			if (*str1 < *str2) {
//				return -1;
//			}
//			else
//				if (*str1 > *str2) {
//					return 1;
//				}
//
//}
//
//
