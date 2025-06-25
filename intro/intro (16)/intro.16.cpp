#define _CRT_SECURE_NO_WARNINGS  // MSC 컴파일만 씁니다..

#define  MAX_VALUE   100

#define  CHECH_PARAM(x)    if(!x) return
#define  RTEA_CHPARAM(x)    if(!x) return NULL

#include <stdio.h>
#include <time.h>
#include <string.h> // 문자열 처리를 하는 함수들이 정의되어 있는 헤더 파일
#include <stdlib.h>



// 타입 재정의
typedef unsigned short MyAge;      // 새로운 데이터 타입을 만들 수 있도록 만듬
typedef const  char* MyString;


// 구조체(Structure)

//typedef A B;

typedef struct PERSON {
	// maber  맴버
	unsigned int no;// no                                          // no       4
	char name[30]; // 이름                                         // 이름     30
	MyAge age;     // 나이                                         // 나이     2
	unsigned char gender;// 성별                                   // 성별     1  // 4바이트 변한다?

} PERSON;   // 이 만큼에 덩어리를 PERSON으로 만들겠다  // 데이터 타입을 만든거임

void print_person(const PERSON* p) // p를 변경을 시키지 않을 것이다 const 그래서 값을 추가하면 애러가 생긴다
{
	CHECH_PARAM(p);                           // if (!p) return;

	printf(" 번호 : %u\n", p->no);     // 주소를 직접 핸들링 할 수 있다  // (*p) .no); 이런식으로 쓸 수도 있음
	printf(" 번호 : %s\n", p->name);
	printf(" 번호 : %u\n", p->age);
	printf(" 번호 : %s\n", (p->gender == 1) ? "남자" : "여자");  // p.gender 가 1이면  남자이고 1이 아니면 여자로
}

// memcpy(Void *pDest, void pSrc, size_t size)

void copy_person(PERSON* pSrc, PERSON* pDest)
{

	if (!pSrc || !pDest) // pSrc와  pDest가 둘다 NULL이 아니어야 한다.
		return;

	// RTEA_CHPARAM(p);
	// ...


	// PERSON pDest;      //지역 변수를 전환하는 것은 안된다

	pDest->no = pSrc->no;
	strcpy(pDest->name, pSrc->name);
	pDest->age = pSrc->age;
	pDest->gender = pSrc->gender;



	//return &pDest; // 지역 변수의 주소를 반환하면 안된다!!!	
}

int main()
{

	// Data type : char, short , int , long , float , double ...pointer(Address)  // 데이터 타입에 본질은 cpu가 결과를 처리하는 방식 // 데이터 타입이 이게 끝임


	size_t ullSize = sizeof(int); // 4 아래에 코드와 같이 작동을 함
	// unsigned long long ullSize = sizeof(int); // 4

	MyAge age;
	//MyString name = "김길동"; // const char *
	//name = "안녕";
	//name[0] = 'a';  // 이런식으로 숫자는 바꾸지는 못함

	char car[20] = "Sonata";
	car[0] = 'C';
	car[1] = 'o';
	// car = "Grandure";


	time_t tm = time(NULL);
	//unsigned short age;

	PERSON p1;// 4바이트 정렬 총 40바이트  // 0으로 초기화 하는것도 필요할때만 한다// 하는 이유는  40 바이트의 구조체 변수의  배열을 초기화 시키는 것 
	PERSON p2;

	/// struct PERSON  p1; // 데이터 타입
	p1.no = 1;
	strcpy(p1.name, "김길동"); // p1.name = "김길동" 이거지만 이렇게는 못쓴다 , 문자열 복사 함수 // 뒤에 있는 "김길동" 이라는 이름은 복사해서 앞에다 복사를 해서 집어 넣는다.
	p1.age = 20;
	p1.gender = 1;
	printf("PERSON형의 크기 : %llu\n", sizeof(PERSON));

	print_person(&p1);  // 포인터를 이용하여 전달 =====> 메모리 절약 , 시간 절약 







	// 깊은 복사(Deep Copy)
	// memcpy(&p2, &p1, sizeof(PERSON));  // 메모리 복사(대상, 원본, 복사할 크기)

/*
	p2 = &p1;
	p2->age = 30;
	print_person(&p1);
*/


	copy_person(&p1, &p2);
	print_person(&p2);


	// _s는 들어가는  함순느  MSC 이다

	// arrPerson[10]

	// 항상 포인터는 8바이트 기억하자



	return 0;

}
