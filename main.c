/*
#include <stdio.h>
#include "asdf.h"
// stdio.h STanDardInputOutput.Header 
// "#" Preprocessor
#define LENGTH 10
// main() func: Program's Start and Exit
int main(void)
{
	// printf("Hello, World"); // printf(): stardard print func 
	//exam2();
	//exam3();
	//exam4();
	//test1();
	//exam5();
	//test2();
	//test3();
	//exam7();
	//exam9();
	//exam10();
	//exam11();
	//exam12();
	//test4();
	//exam14();
	exam15();
	return 0;

}
// Ctrl + Shift + B
// Build Short-cut 
/*
int exam14(void)
{
	int number = 3;
	const int NUMBER = 5;
	number = 10;
	NUMM

	printf("%d\n", LENGTH);
	printf("%d\n", number);
	printf("%d\n", NUMBER);

}
*/
/*
int exam15(void)
{
	printf("%d\n", a);
	printf("%d\n", b);
}
*/
/*
#include <stdio.h>
#define POW_VALUE(a) (a*a)
int main(void)
{
	printf("%d\n", POW_VALUE(2));

	return 0;
}
*/

/*
int main(void)
{
	double dNumber = 10;
	printf("%lf\n", dNumber);

	int iNumber = 5.4321;
	printf("%d\n", iNumber);

	float fNumber = 1.2345;
	printf("%f\n", fNumber);

	return 0;
}
*/
/*
#include<stdio.h>
int main(void)
{
	double dNumber = 10;
	int iNumber = 1.2345;
	short stNumber = 70000;

	printf("%f\n", dNumber);
	printf("%d\n", iNumber);
	printf("%d\n", stNumber);

	return 0;
}
*/
/*
// 강제형변환 - 데이터 손실
#include <stdio.h>
int main(void)
{
	int num1 = 129;
	int num2 = 130;

	char ch1 = (char)num1;
	char ch2 = (char)num2;

	printf("%d\n", ch1);
	printf("%d\n", ch2);
	return 0;
}
*/
/*
int main(void)
{
	int num = 10;
	int div = 4;
	double result1 = num / div; // 실수형 result1에 정수형(num/div)를 넣어서 소수점아래는 버려짐
	double result2 = (double)num / div;
	printf("result1 = %lf\n", result1);
	printf("result2 = %lf\n", result2);
	return 0;
}
// scanf(표준 입력 함수), 연산자
//sizeof()
// 피연산자의 자료형에 대한 연산.
// 많이 쓸수록 좋다. ㅁ낳이 써도 프로그램 수행속도에 저하없음.
// 컴파일 타임에 수행되는 연산자.
*/

# include<stdio.h>
int main(void)
{
	printf("%d\n", sizeof(int));
	return 0; 
}