///*
//#include <stdio.h>
//#include "asdf.h"
//// stdio.h STanDardInputOutput.Header 
//// "#" Preprocessor
//#define LENGTH 10
//// main() func: Program's Start and Exit
//int main(void)
//{
//	// printf("Hello, World"); // printf(): stardard print func 
//	//exam2();
//	//exam3();
//	//exam4();
//	//test1();
//	//exam5();
//	//test2();
//	//test3();
//	//exam7();
//	//exam9();
//	//exam10();
//	//exam11();
//	//exam12();
//	//test4();
//	//exam14();
//	exam15();
//	return 0;
//
//}
//// Ctrl + Shift + B
//// Build Short-cut 
///*
//int exam14(void)
//{
//	int number = 3;
//	const int NUMBER = 5;
//	number = 10;
//	NUMM
//
//	printf("%d\n", LENGTH);
//	printf("%d\n", number);
//	printf("%d\n", NUMBER);
//
//}
//*/
///*
//int exam15(void)
//{
//	printf("%d\n", a);
//	printf("%d\n", b);
//}
//*/
///*
//#include <stdio.h>
//#define POW_VALUE(a) (a*a)
//int main(void)
//{
//	printf("%d\n", POW_VALUE(2));
//
//	return 0;
//}
//*/
//
///*
//int main(void)
//{
//	double dNumber = 10;
//	printf("%lf\n", dNumber);
//
//	int iNumber = 5.4321;
//	printf("%d\n", iNumber);
//
//	float fNumber = 1.2345;
//	printf("%f\n", fNumber);
//
//	return 0;
//}
//*/
///*
//#include<stdio.h>
//int main(void)
//{
//	double dNumber = 10;
//	int iNumber = 1.2345;
//	short stNumber = 70000;
//
//	printf("%f\n", dNumber);
//	printf("%d\n", iNumber);
//	printf("%d\n", stNumber);
//
//	return 0;
//}
//*/
///*
//// 강제형변환 - 데이터 손실
//#include <stdio.h>
//int main(void)
//{
//	int nData1 = 129;
//	int nData2 = 130;
//
//	char ch1 = (char)nData1;
//	char ch2 = (char)nData2;
//
//	printf("%d\n", ch1);
//	printf("%d\n", ch2);
//	return 0;
//}
//*/
///*
//int main(void)
//{
//	int num = 10;
//	int div = 4;
//	double result1 = num / div; // 실수형 result1에 정수형(num/div)를 넣어서 소수점아래는 버려짐
//	double result2 = (double)num / div;
//	printf("result1 = %lf\n", result1);
//	printf("result2 = %lf\n", result2);
//	return 0;
//}
//// scanf(표준 입력 함수), 연산자
////sizeof()
//// 피연산자의 자료형에 대한 연산.
//// 많이 쓸수록 좋다. ㅁ낳이 써도 프로그램 수행속도에 저하없음.
//// 컴파일 타임에 수행되는 연산자.
//*/
//
///*
//# include<stdio.h>
//int main(void)
//{
//	int nData = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(5));
//	printf("%d\n", sizeof(nData));
//	printf("%d\n", sizeof(123.45));
//	printf("%d\n", sizeof(123.45F));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof('A'));
//	// 'A' = 65 -> integer type
//	char cA = 'A';
//	printf("%d\n", sizeof(cA));
//	// 위에는 char cA라고 명시되어 있다.
//
//	return 0; 
//}
//*/
//
//// scanf scan format Input Bus
//// printf print f
//
//// both 서식문자
//
//// %d : 10진 정수 서식
//// %f : 10진 실수 서식
//// %c : 문자 1개 서식
//// %s : 문자열 서식
//#include <stdio.h>
//int main(void)
//{
//	/*
//	// input에서는 정확한 type를 서식해야한다.
//	char character;
//	int iNum;
//	float fNum;
//	scanf_s("%d", &iNum);
//	scanf_s("%c", &character);
//	scanf_s("%f", &fNum);
//
//	printf("%c\n%d\n%f\n", character, iNum, fNum);
//	return 0;
//	*/
//	/*
//	int iNum = 0;
//	printf("정수 1개 입력 해주세요: ");
//	scanf_s("%d", &iNum);
//	printf("입력한 정수의 값은: %d입니다.", iNum);
//	return 0;
//	*/
//	/*
//	int nData_1 = 0;
//	int nData_2 = 0;
//
//	int sum = 0;
//
//	printf("정수 2개를 입력해 주세요: ");
//	scanf_s("%d%d", &nData_1, &nData_2);
//
//	sum = nData_1 + nData_2;
//
//	printf("두 수의 합은 %d입니다. \n", sum);
//	*/
//	/*
//	int nInput = 0;
//	scanf_s("%d", &nInput);
//	printf("nInput = %d\n", nInput);
//	return 0;
//	*/
//	//scanf_s("Input : %d", &nInput);
//	//위 문장은 안된다
//	/*
//	float fData = 0.0F;
//	double dData = 0.0;
//
//	printf("float형 실수 입력: ");
//	scanf_s("%f", &fData);
//	printf("double형 실수 입력: ");
//	scanf_s("%lf", &dData);
//
//	printf("fData = %f\n", fData);
//	printf("dData = %lf\n", dData);
//	*/
//
//	/*
//	char ch = NULL;// NULL : 빈 문자
//	printf("문자 한개를 입력해 주세요.");
//	scanf_s("%c", &ch, sizeof(ch));
//	
//	printf("%c\n", ch);
//	printf("%d\n", ch);
//
//	return 0;
//	*/
//
////	int korScore = 0;
////	int matScore = 0;
////	int engScore = 0;
////	
////	int total = 0;
////	double avg = 0.0;
////
////	scanf_s("%d", &korScore);
////	scanf_s("%d", &matScore);
////	scanf_s("%d", &engScore);
////	total = korScore + matScore + engScore;
////	avg = (double)total / 3;
////	
////	printf("국어성적 : %d\n", korScore);
////	printf("수학성적 : %d\n", matScore);
////	printf("영어성적 : %d\n", engScore);
////	printf("총합 : %d 평균 : %.2lf\n", total, avg);
////	test5();
////	char arr[10] = { NULL };
////
////	printf("문자열 입력 : ");
////
////	scanf_s("%s", arr, sizeof(arr));
////
////	printf("이름 출력 : %s\n", arr);
////	printf("성 : %c%c\n", arr[0], arr[1]);
////	printf("이름 : %c%c%c%c\n", arr[2], arr[3], arr[4], arr[5]);
////	return 0;
//	char name[6] = { NULL };
//	int age = 0;
//
//	printf("당신의 이름은 무엇입니까?: ");
//	scanf_s("%s", name, sizeof(name));
//
//	printf("%s님의 나이는 몇살입니까?: ", name);
//	scanf_s("%d", &age);
//
//	printf("%s님의 나이는 %d세 입니다.", name, age);
//	return 0;
//}
//
// 연산자
// 1. 산술 연산자
// 2. 대입 연산자
// 3. 복합 대입 연산자
// 4. 관계 연산자(비교연산자)
// 5. 논리 연산자
// 6. 증감 연산자
// 7. 삼항 연산자
// 8. 비트 / 시프트 연산자
// 
//	int nData1 = 7, nData2 = 3;
//	printf("%d + %d = %d\n", nData1, nData2, num1 + num2);

//	printf("%d - %d = %d\n", nData1, nData2, num1 - num2);
//	printf("%d * %d = %d\n", nData1, nData2, num1 * num2);
//	printf("%d / %d = %d\n", nData1, nData2, num1 / num2);
//	printf("%d %% %d = %d\n", nData1, nData2, num1 % num2);
//
//	printf("%d\n", -nData1);


//// - 산술 연산자
//int test01(void)
//{
//	int nData1 = 0;
//	int nData2 = 0;
//	printf("두 정수를 입력하세요.: ");
//	scanf_s("%d%d", &nData1, &nData2);
//
//	printf("AVG : %.2lf", (nData1 + nData2) / 2.0);
//}
//
//// - 대입 연산자
// l-value: left-value or locator-value
// '=' : 대입 연산자의 왼쪽(l-value)는 '공간'으로 오른쪽(r-value)은 '값'으로 해석한다.
//		r-value 값의 처리를 먼저 한 뒤 저장 l-value로 대입한다.
int test02(void)
{
	int x = 0;
	int nInput = 0;

	printf("x = %d\n", x);

	printf("Input?: ");
	scanf_s("%d", &nInput);

	x = nInput;

	printf("x = %d\n", x);

}

// xor swap function 
int test03(void)
{
	int x = 10;
	int y = 20;
	printf("Before: x=%d, y=%d\n", x, y);
	// xor swaping 
	x = x ^ y; // x = x xor y
	y = y ^ x; // y = y xor (x xor y); y = x xor (y xor y=0); y = x 
	x = x ^ y; // x = (x xor y) xor x; y = y xor (x xor x=0); x = y

	printf("After: x=%d, y=%d\n", x, y);
}

int test04(void)
{
	int num1 = 3;
	int num2 = 4;

	num1 += 3;
	num2 *= 4;

	printf("num1의 값: %d\n", num1);
	printf("num2의 값: %d\n", num2);
}

int test05(void)
{
	printf("%4s\n", "*");
	printf("%5s\n", "***");
	printf("%6s\n", "*****");
	printf("%7s\n", "*******");

}
//int test06(void)
//{
//	double nData = 0;
//	scanf_s("%d", &nData);
//	printf("%d", nData);
//}
//int test07(void)
//{
//	int a = 10;
//	int b = 11;
//	printf("a == b: %d\n", a == b);
//	printf("sizeof(%d)", sizeof(a == b)); //int 정수를 받는다.
//	
//}
//// 조건 복합대입연산자사용, 변수 추가 금지, 
int test08(void)
{
	int nInput = 0;
	int nTotal = 0;

	printf("첫번째 값:");
	scanf_s("%d", &nInput);
	nTotal += nInput;

	printf("두번째 값:");
	scanf_s("%d", &nInput);
	nTotal += nInput;

	printf("세번째 값:");
	scanf_s("%d", &nInput);
	nTotal += nInput;

	printf("Total: %d\n", nTotal);
	return 0;
}
int test09(void)
{
	int num = 10;
	num++;

	printf("%d\n", num);
	printf("%d\n", num + 3);
	printf("%d\n", ++num);
	printf("%d\n", num++);
	printf("%d\n", num);
}

// - 관계 연산자(비교 연산자)
// 특정 피연산자들을 비교하여 참/거짓, TRUE/FALSE의 값, 1(참) or 0(거짓)을 변환한다.
// 
int test10(void)
{
	int a = 10;
	int b = 11;

	printf("%d == %d: %d\n", a, b, a == b);
	printf("%d > %d: %d\n", a, b, a > b);
	printf("%d < %d: %d\n", a, b, a < b);
	printf("%d >= %d: %d\n", a, b, a >= b);
	printf("%d <= %d: %d\n", a, b, a <= b);
	printf("%d != %d: %d\n", a, b, a != b);

}
// - 논리 연산자
// AND 연산자 ( && ) : 두 피연자 모두가 참이면 참을 반환.
// OR 연산자 ( || ) : 두 피연자 중 하나만이라도 참이라면 참을 반환.
// 부정 연산 ( ! ) : 두 피연자의 값이 참이면 거짓, 거짓이면 참을 반환.


// - 증감 연산자
// - 변수의 값을 1만큼 증가시키거나, 또는 감소 시킬때 사용되는 연산자.
// 1) 전위(Prefix) : 피연산자 앞에 증감 연산자가 붙음, 증감연산 수행 후 나머지 문장 처리 진행.
// 2) 후위(Postfix) : 피연산자 뒤에 증감 연산자가 붙음, 모든 문장 처리 후에 증감연산을 수행.
// ++ , --

int test11(void)
{
	int a = 10;
	int b = 10;
	printf("a: %d\n", a);
	printf("a: %d\n", ++a);
	printf("a: %d\n", a);

	printf("b: %d\n", b);
	printf("b: %d\n", b++);
	printf("b: %d\n", b);

}
int test12(void)
{
	int num1 = 3;
	int num2 = 5;

	int result = num1++ + num2 * 3;
	printf("연산 결과 : %d\n", result);

}

int test13(void)
{
	int x = 0;
	int nResult = 0;

	++x;
	printf("%d\n", x);

	x++;
	printf("%d\n", x);

	nResult = ++x;
	printf("%d, %d\n", nResult, x);

	nResult = x--;
	printf("%d, %d\n", nResult, x);

}
// - 삼항 연산자 잘안씀. 간혹가다 쓰니깐 알고는 있어야 함.

int test14(void)
{
	int num = 0;
	int absolute = 0;

	printf("정수 입력: ");
	scanf_s("%d", &num);
	absolute = num > 0 ? num : num * -1;
	// num이 0보다 크면 그냥 출력, 아니면 -1을 곱해 절대값으로 만듬
	printf("절대 값: %d\n", absolute);
}

int test15(void)
{
	int nData1 = 0;
	int nData2 = 0;
	printf("두 수를 입력: ");
	scanf_s("%d%d", &nData1, &nData2);

	printf("%d", nData1 > nData2 ? nData1 : nData2);
}

// - 산술연자 %(나머지 연산자)
int test16(void)
{
	int nData = 0;
	printf("숫자를 입력하세요: ");
	scanf_s("%d", &nData);
	printf(nData % 2 == 0 ? "%d는 짝수" : "%d는 홀수", nData);

}

int test17(void)
{
	int nResult = 0;
	int nData = 10;

	nResult -= nData - 5;
	printf("%d\n", nResult);

}

int test18(void)
{
	int x = 0;
	int y = 0;
	x = y = 10;
	printf("%d, %d", x, y);

}

int test19(void)
{
	int nInput = 0;
	int nHrs = 0;
	int nMins = 0;
	int nSecs = 0;
	printf("입력 초: ");
	scanf_s("%d", &nInput);
	nHrs = nInput / 60 / 60;
	nMins = nInput / 60 % 60;
	nSecs = nInput % 60;
	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", nInput, nHrs, nMins, nSecs);
}

int test20(void)
{
	int nData1 = 0;
	int nData2 = 0;
	int nTotal = 0;

	printf("정수 2개 입력 : ");
	scanf_s("%d%d", &nData1, &nData2);

	nTotal = nData1 + nData2;

	printf(nTotal % 4 == 0 ? "%d는 %d의 배수입니다.\n" : "%d는 %d의 배수가 아닙니다.\n", nTotal, 4);
}
// 비트 연산자와 시프트 연산자
// 비트 연산자
// & : AND 연산자
// | : OR 연산자
// ^ : XOR 연산자
// ~ : NOT 연산자

// 시프트 연산자

int test21(void)
{
	unsigned char cData = 10;
	unsigned char cBitTest = 9;

	printf("%d\n", cData & cBitTest);
	printf("%d\n", cData | cBitTest);
	printf("%d\n", cData ^ cBitTest);
	printf("%d\n", ~cData);

	printf("%d\n", cData << 1);
	printf("%d\n", cData >> 1);
	

}

int test22(void)
{
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 << 2;
	int num4 = num2 >> 3;

	printf("<< 시프트 연산 결과: %d\n", num3);
	printf(">> 시프트 연산 결과: %d\n", num4);
}

int test23(void)
{
	int nAge = 0;
	printf("나이를 입력하세요: ");
	scanf_s("%d", &nAge);
	printf("당신의 나이는 %d세이며 , 요금은 %d원입니다.\n", nAge, nAge < 20 ? 800 : 1250);
}

int test24(void)
{
	int nAge = 0;
	int nHeight = 0;
	
	printf("나이를 입력하세요: ");
	scanf_s("%d", &nAge);
	printf("키를 입력하세요: ");
	scanf_s("%d", &nHeight);
	printf(nAge >= 12 & nHeight >= 120 ? "놀이기구에 탑승하실 수 있습니다.\n" : "놀이기구에 탑승하실 수 없습니다.\n");

}
// 제어문
// Change the Flow of the Program
// if문 - 분기문(branching statement)이라고 한다.
// 조건식을 근거로 구문들의 흐름을 변경한다.
// 가장 기본적인 제어문, 사용빈도 굉장히 높음.

int test25(void)
{
	int num = 0;

	printf("정수 입력: ");
	scanf_s("%d", &num);

	if (num % 2 == 0) 
	{
		printf("입력한 수는 짝수입니다.\n");
	}
	printf("첫번째 if문 탈출\n");

	if (num % 2 == 1) 
	{
		printf("입력한 수는 홀수입니다.\n");
	}
	printf("두번째 if문 탈출\n");
}

int test26(void)
{
	int nData = 5;
	if (nData == 3) {
		nData++;
	}
	printf("nData = %d\n", nData);
}

int test27(void)
{
	int num = 0;
	scanf_s("%d", &num);
	if (num < 3) 
	{
		printf("num is smaller than 3!\n");
	}
	if (num == 3) 
	{
		printf("num is 3!\n");
	}
	if (num > 3) 
	{
		printf("num is bigger than 3!\n");
	}
}

int test28(void)
{
	int nData1= 0;
	int nData2 = 0;
	int nData3 = 0;

	printf("첫번째 변수값: ");
	scanf_s("%d", &nData1);
	printf("두번째 변수값: ");
	scanf_s("%d", &nData2);
	printf("세번째 변수값: ");
	scanf_s("%d", &nData3);

	if (nData1 % 2 == 0)
	{
		printf("%d는 짝수\n", nData1);
	}
	if (nData2 % 2 == 0)
	{
		printf("%d는 짝수\n", nData2);
	}
	if (nData3 % 2 == 0)
	{
		printf("%d는 짝수\n", nData3);
	}
}

int test29(void)
{
	int nInput = 0;
	int nMax = 0;

	printf("첫번째 변수값: ");
	scanf_s("%d", &nInput);
	nMax = nInput;

	printf("두번째 변수값: ");
	scanf_s("%d", &nInput);
	if (nInput > nMax)
	{
		nMax = nInput;
	}

	printf("세번째 변수값: ");
	scanf_s("%d", &nInput);
	if (nInput > nMax)
	{
		nMax = nInput;
	}

	printf("MAX: %d", nMax);

}

int test30(void)
{
	char cData1 = 0;

	printf("문자 입력: ");
	scanf_s("%c", &cData1, sizeof(cData1));
	
	if ('A' <= cData1 && 'Z' >= cData1)
	{
		printf("알파벳 대문자 입력하셨습니다.\n");
	}
	if ('a' <= cData1 && 'z' >= cData1)
	{
		printf("알파벳 소문자 입력하셨습니다.\n");
	}
}
//if-else
// else는 if가 있어야 사용할 수 있다.

int test31(void)
{
	char alpha = 'A';
	if (alpha == 'B')
	{
		printf("alpha is B");
	}
	else
	{
		printf("alpha isn't B");
	}
}

int test32(void)
{
	int nData = 10;
	if (nData == 10)
	{
		nData = 0;
	}
	else
	{
		nData++;
	}
	printf("%d", nData);
}

int test33(void)
{
	int nInput = 0;
	scanf_s("%d", &nInput);

	if (nInput % 2 == 0) {
		printf("짝수이면서 ");
	}
	else
	{
		printf("홀수이면서 ");
	}

	if (nInput % 3 == 0)
	{
		printf("3의 배수이다.\n");
	}
	else if (nInput % 5 == 0)
	{
		printf("5의 배수이다.\n");
	}
}

int test34(void)
{
	char cInput = 0;
	scanf_s("%c", &cInput, sizeof(cInput));
	
	if (cInput >= 'A' && cInput <= 'Z')
	{
		cInput = cInput + 1;
		if (cInput > 'Z')
		{
			cInput = 'A';
		}
	}
	if (cInput >= 'a' && cInput <= 'z')
	{
		cInput = cInput + 1;
		if (cInput > 'z')
		{
			cInput = 'a';
		}
	}
	printf("%c", cInput);
}
int test35(void)
{
	char cInput = 0;
	scanf_s("%c", &cInput, sizeof(cInput));
	cInput = cInput + 1;

	if (cInput == 'z' + 1)
	{
		cInput = 'a';
	}
	if (cInput == 'Z' + 1)
	{
		cInput = 'A';
	}

	printf("%c", cInput);
}
int test36(void)
{
	char cInput = 0;
	scanf_s("%c", &cInput, sizeof(cInput));
	if (cInput >= 'a' && cInput <= 'z' || cInput >= 'A' && cInput <= 'Z')
	{
		if (cInput == 'z' || cInput == 'Z')
		{
			cInput = cInput - 25;
		}
		else {
			cInput = cInput + 1;
		}
	}
	else
	{
		return 1;
	}
	printf("%c\n", cInput);
}
// goto (don't use it)
// goto문은 break문처럼 특정 위치로 프로그램의 흐름을 '즉시'변경한다.
// break문은 사용할 수 있는 곳이 문법적으로 제한적이다.(switch, 반복문)
// 하지만 goto문은 사용자가 Lable만 명시하면 어느위치든 이동 가능하다
// 즉, 아무 제한없이 코드의 흐름을 변경할 수 있다.

int test37(void)
{
	const int PRICE = 5000;
	int nInput = 0;
	int total = 0;

	printf("n개 입력: ");
	scanf_s("%d", &nInput);
	
	total = PRICE * nInput;

	if (nInput >= 100)
	{
		total = total * 0.8;
	}
	else if (nInput >= 10)
	{
		total = total * 0.9;
	}
	printf("%d원 입니다.", total);
}

int test38(void)
{
	int nInput = 0;

	printf("월 입력: ");
	scanf_s("%d", &nInput);

	switch (nInput)
	{
	case 12:
	case 1:
	case 2:
		printf("겨울");
		break;

	case 3:
	case 4:
	case 5:
		printf("봄");
		break;

	case 6:
	case 7:
	case 8:
		printf("여름");
		break;

	case 9:
	case 10:
	case 11:
		printf("가을");
		break;

	default:
		printf("ERROR");
		break;
	}
	printf("입니다.\n");
}
int test39(void)
{
	printf("Hello, World\n");
	printf("Hello, World\n");
	printf("Hello, World\n");
	printf("Hello, World\n");
	printf("Hello, World\n");
	printf("Hello, World\n");
	printf("Hello, World\n");
	printf("Hello, World\n");
	printf("Hello, World\n");
	printf("Hello, World\n");
}
// 반복문 요소
// 1) 조건문, 조건을 만족하면 반목문 실행
// 2) 초기값
// 3) 증감식 
int test40(void)
{
	int num = 0;
	while (num < 3)
	{
		printf("num is %d\n", num);
		num++;
	}

}

int test41(void)
{
	int num = 0;
	while (num != -1)
	{
		printf("숫자를 입력하세요. ('-1' 종료): ");
		scanf_s("%d", &num);

		if (num == -1) 
		{
			printf("종료합니다.");
		}
		else
		{
			printf("%을(를) 입력하셨네요.\n", num);
		}
	}
}

#include <stdio.h>
#define TRUE 1
#define FALSE 0
int main(void)
{
	//	test35();
	//	test36();
	//	test37();
	//	test38();
	//	test39();
	//	test40();
	test41();
	return 0;
}


