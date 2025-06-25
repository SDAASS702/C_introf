// #pragma once // 이 헤더파일을 중복 포함시키는걸 방지, cpp style

#ifndef ___SBS_ACADEMY__C_PRGRAMMING__178489392848739____
#define ___SBS_ACADEMY__C_PRGRAMMING__178489392848739____



#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 매크로 상수 정의
#define COUNT		2
#define ROW		    5
#define COL         6



// 함수의 선언(함수의 원형 정의)
int binary_search(int arr[], int count, int to_find);
int find_value(int arr[], int count, int to_find);

void sequence_sort(int arr[], int count);
void my_qsort(int arr[], int left, int right);

void random_value(int arr[], int count);
void random_value(int arr[], int count, int max_val);

void exchange_value(int* p1, int* p2);
void print_array(int arr[], int count);

int sum(int n);
int factorial(int n);

int my_strlen(const char* psz);



#endif


