// myheader.h
#ifndef ___SBS_ACADEMY__C_PRGRAMMING__178489392848739____
#define ___SBS_ACADEMY__C_PRGRAMMING__178489392848739____


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



// ?? ���� ���ڿ� ���� extern ���� �߰�
extern char sz[];

// ��ũ�� ��� ����
#define COUNT 2

// �Լ��� ����(�Լ��� ���� ����)
int binary_search(int arr[], int count, int to_find);
int find_value(int arr[], int count, int to_find);

void sequence_sort(int arr[], int count);
void my_qsort(int arr[], int left, int right);

void random_value(int arr[], int count);
void exchange_value(int* p1, int* p2);
void print_array(int arr[], int count);

int my_strlen(const char* psz);

int sum(int n);
int factorial(int n);

#endif
