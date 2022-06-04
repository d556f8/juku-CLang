/*
파일명: exam-01-02.c
작성자: Lee
수정날짜: 22-05-28
기능: print String using printf()
*/
#include <stdio.h>
int exam2(void) // not required return type keyword, just return 0
{
	printf("Hello!");
	return 0;
}

// c: source file
// obj: create when compiler run source file (translated to Low-level Language)
// exe: linked each objs to filled in execute file

// Escape character
// \n: line change
// \t: tab
// \r: return to row start
// \b: del before charater

int exam3(void)
{
	printf("boy\tapple\n");
	printf("down\rup\n");
	printf("morning\b\b  \n");
	return 0;
}

int exam4(void)
{
	printf("I say \"Hello?\"");
}

int test1(void)
{
	printf("이름 : 이주현\n");
	printf("나이 : 20\n");
	printf("성별 : 남\n");
	printf("주소 : 대구광역시\n");
}
int exam5(void)
{
	// 서식(format) : 서류를 꾸미는 일정한 '양식'
	/*
	%d : 10진 정수를 표시하는 서식문자
	%f : 10진 실수를 표시하는 서식문자
	%c : 문자를 표시하는 서식문자(1byte)
	%s : 문자열을 표시하는 서식문자
	*/
	printf("숫자(정수)서식문자 : %d\n", 10);
	printf("%d + %d = %d\n", 10, 20, 10 + 20);
	printf("숫자(실수)서식문자 : %f\n", 123.45);
	printf("한문자 서식문자 : %c\n", 'a');
	printf("문자열 서식문자 : %s\n", "Hello, World");
	printf("\n");
	printf("이름: %s\n", "이주현");
	printf("나이: %d\n", 20);
	printf("성별: %c\n", 'M');
	printf("신장: %.2f\n", 181.5);
	printf("\n");
	printf("이름: %s\n나이: %d\n성별: %c\n신장: %.2f\n", "이주현", 20, 'M', 181.5);

	// CTRL + K + F
	// kataduke code
}
int exam6(void)
{
	printf("%d + %d = %d\n", 5, 12, 5 + 12);
}
int test2(void)
{
	printf("이름\t나이\t성별\t주소\n");
	printf("%s\t%d\t%c\t%s\n", "홍길동", 20, 'M', "달서구");
	printf("%s\t%d\t%c\t%s\n", "서길동", 30, 'M', "수성구");
	printf("%s\t%d\t%c\t%s\n", "남길동", 40, 'W', "동구");

}
int test3(void)
{
	printf("%d\n", 123);
	printf("%5d\n", 123); // on right
	printf("%-5d\n", 123); // on left
	printf("%f\n", 123.456);
	printf("%10.2f\n", 123.456); // dot is included in 10space
}
int exam7(void)
{
	printf("[%5d] [%05d] [%-5d]", 7, 7, 7);
	// %05d -> fill '0' in blank
}
int exam8(void)
{
	printf("Hello, World\n"); printf("Hello, World\n"); printf("Hello, World\n");
}
// Manipulation Code (escape char)
// Escape character
// \n: line change
// \t: tab
// \r: return to row start
// \b: cursor move to before charater
int exam9(void)
{
	printf("1234567\b0");
}

// Data Type 
/*
char : Character (정수를 표현하는 자료형)
signed char : 부호가 있는 1바이트 저장공간 (-128 ~ 127)
unsigned char : 부호가 없는 1바이트 저장공간
float : 실수를 저장하는 공간 4바이트 저장공간 거의 안쓴다 go to double
double : 실수를 저장하는 공간 8바이트 저장공간 
*/
int exam10(void)
{
	signed char temperature1;
	temperature1 = 127;

	int temperature2;
	temperature2 = 127;

	printf("%d\n", temperature1);
	printf("%d\n", temperature2);
	//printf("%d\n", sizeof(temperature1));
	//printf("%d\n", sizeof(temperature2));
}

int exam11(void)
{
	unsigned char age;
	age = 45;

	int age2;
	age2 = 45;

	//printf("%d, %dByte\n", age, sizeof(age));
	//printf("%d, %dByte\n", age2, sizeof(age2));
}
/*
// Constant : never change value
	1) Number Constant
	 - integer Constant: -7, 0, 10, 0xA7
	 - real Constant: -7.2, 3.14
	2) Character Constant: 'a', 'A', '7', '='
	3) String Constant: "Hello, World"
*/

int exam12(void)
{
	printf("%d", '7');
}
/*
// Variable: Load space when we save data
	hennsui
	define mean assign storage space

	// attention when define variable
	english, number and underspace can be use
	number can't be located first
	can't include gap space
	distinguish between small letter and upper letter
	keyword can't be use
*/
int exam13(void)
{
	// int data;	// defined a 4byte Variable
	//int data = 0;	// defined and reset to Integer 0
	//int data2;
	//data2 = 17;		// define variable 'data' = reset
	int data = 7;
	printf("%d\n", data);
	data = 10;
	printf("%d\n", data);

}
int test4(void)
{
	char age = 22;
	double height = 181;
	double weight = 72;
	printf("나의 나이는 %d 입니다.\n", age);
	printf("나의 키는 %.lf 입니다.\n", height);
	printf("나의 몸무게는 %.lf 입니다.\n", weight);
}

// #define prep(macro const)
// macro = 자주사용한느 명령을 묶어서 하나의 명령으로 사용한다.
// #define  DATA       7
//         치완할 이름 치완될 내용
