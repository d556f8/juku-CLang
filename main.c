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
//// ��������ȯ - ������ �ս�
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
//	double result1 = num / div; // �Ǽ��� result1�� ������(num/div)�� �־ �Ҽ����Ʒ��� ������
//	double result2 = (double)num / div;
//	printf("result1 = %lf\n", result1);
//	printf("result2 = %lf\n", result2);
//	return 0;
//}
//// scanf(ǥ�� �Է� �Լ�), ������
////sizeof()
//// �ǿ������� �ڷ����� ���� ����.
//// ���� ������ ����. ������ �ᵵ ���α׷� ����ӵ��� ���Ͼ���.
//// ������ Ÿ�ӿ� ����Ǵ� ������.
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
//	// ������ char cA��� ��õǾ� �ִ�.
//
//	return 0; 
//}
//*/
//
//// scanf scan format Input Bus
//// printf print f
//
//// both ���Ĺ���
//
//// %d : 10�� ���� ����
//// %f : 10�� �Ǽ� ����
//// %c : ���� 1�� ����
//// %s : ���ڿ� ����
//#include <stdio.h>
//int main(void)
//{
//	/*
//	// input������ ��Ȯ�� type�� �����ؾ��Ѵ�.
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
//	printf("���� 1�� �Է� ���ּ���: ");
//	scanf_s("%d", &iNum);
//	printf("�Է��� ������ ����: %d�Դϴ�.", iNum);
//	return 0;
//	*/
//	/*
//	int nData_1 = 0;
//	int nData_2 = 0;
//
//	int sum = 0;
//
//	printf("���� 2���� �Է��� �ּ���: ");
//	scanf_s("%d%d", &nData_1, &nData_2);
//
//	sum = nData_1 + nData_2;
//
//	printf("�� ���� ���� %d�Դϴ�. \n", sum);
//	*/
//	/*
//	int nInput = 0;
//	scanf_s("%d", &nInput);
//	printf("nInput = %d\n", nInput);
//	return 0;
//	*/
//	//scanf_s("Input : %d", &nInput);
//	//�� ������ �ȵȴ�
//	/*
//	float fData = 0.0F;
//	double dData = 0.0;
//
//	printf("float�� �Ǽ� �Է�: ");
//	scanf_s("%f", &fData);
//	printf("double�� �Ǽ� �Է�: ");
//	scanf_s("%lf", &dData);
//
//	printf("fData = %f\n", fData);
//	printf("dData = %lf\n", dData);
//	*/
//
//	/*
//	char ch = NULL;// NULL : �� ����
//	printf("���� �Ѱ��� �Է��� �ּ���.");
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
////	printf("����� : %d\n", korScore);
////	printf("���м��� : %d\n", matScore);
////	printf("����� : %d\n", engScore);
////	printf("���� : %d ��� : %.2lf\n", total, avg);
////	test5();
////	char arr[10] = { NULL };
////
////	printf("���ڿ� �Է� : ");
////
////	scanf_s("%s", arr, sizeof(arr));
////
////	printf("�̸� ��� : %s\n", arr);
////	printf("�� : %c%c\n", arr[0], arr[1]);
////	printf("�̸� : %c%c%c%c\n", arr[2], arr[3], arr[4], arr[5]);
////	return 0;
//	char name[6] = { NULL };
//	int age = 0;
//
//	printf("����� �̸��� �����Դϱ�?: ");
//	scanf_s("%s", name, sizeof(name));
//
//	printf("%s���� ���̴� ����Դϱ�?: ", name);
//	scanf_s("%d", &age);
//
//	printf("%s���� ���̴� %d�� �Դϴ�.", name, age);
//	return 0;
//}
//
// ������
// 1. ��� ������
// 2. ���� ������
// 3. ���� ���� ������
// 4. ���� ������(�񱳿�����)
// 5. �� ������
// 6. ���� ������
// 7. ���� ������
// 8. ��Ʈ / ����Ʈ ������
// 
//	int nData1 = 7, nData2 = 3;
//	printf("%d + %d = %d\n", nData1, nData2, num1 + num2);

//	printf("%d - %d = %d\n", nData1, nData2, num1 - num2);
//	printf("%d * %d = %d\n", nData1, nData2, num1 * num2);
//	printf("%d / %d = %d\n", nData1, nData2, num1 / num2);
//	printf("%d %% %d = %d\n", nData1, nData2, num1 % num2);
//
//	printf("%d\n", -nData1);


//// - ��� ������
//int test01(void)
//{
//	int nData1 = 0;
//	int nData2 = 0;
//	printf("�� ������ �Է��ϼ���.: ");
//	scanf_s("%d%d", &nData1, &nData2);
//
//	printf("AVG : %.2lf", (nData1 + nData2) / 2.0);
//}
//
//// - ���� ������
// l-value: left-value or locator-value
// '=' : ���� �������� ����(l-value)�� '����'���� ������(r-value)�� '��'���� �ؼ��Ѵ�.
//		r-value ���� ó���� ���� �� �� ���� l-value�� �����Ѵ�.
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

	printf("num1�� ��: %d\n", num1);
	printf("num2�� ��: %d\n", num2);
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
//	printf("sizeof(%d)", sizeof(a == b)); //int ������ �޴´�.
//	
//}
//// ���� ���մ��Կ����ڻ��, ���� �߰� ����, 
int test08(void)
{
	int nInput = 0;
	int nTotal = 0;

	printf("ù��° ��:");
	scanf_s("%d", &nInput);
	nTotal += nInput;

	printf("�ι�° ��:");
	scanf_s("%d", &nInput);
	nTotal += nInput;

	printf("����° ��:");
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

// - ���� ������(�� ������)
// Ư�� �ǿ����ڵ��� ���Ͽ� ��/����, TRUE/FALSE�� ��, 1(��) or 0(����)�� ��ȯ�Ѵ�.
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
// - �� ������
// AND ������ ( && ) : �� �ǿ��� ��ΰ� ���̸� ���� ��ȯ.
// OR ������ ( || ) : �� �ǿ��� �� �ϳ����̶� ���̶�� ���� ��ȯ.
// ���� ���� ( ! ) : �� �ǿ����� ���� ���̸� ����, �����̸� ���� ��ȯ.


// - ���� ������
// - ������ ���� 1��ŭ ������Ű�ų�, �Ǵ� ���� ��ų�� ���Ǵ� ������.
// 1) ����(Prefix) : �ǿ����� �տ� ���� �����ڰ� ����, �������� ���� �� ������ ���� ó�� ����.
// 2) ����(Postfix) : �ǿ����� �ڿ� ���� �����ڰ� ����, ��� ���� ó�� �Ŀ� ���������� ����.
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
	printf("���� ��� : %d\n", result);

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
// - ���� ������ �߾Ⱦ�. ��Ȥ���� ���ϱ� �˰�� �־�� ��.

int test14(void)
{
	int num = 0;
	int absolute = 0;

	printf("���� �Է�: ");
	scanf_s("%d", &num);
	absolute = num > 0 ? num : num * -1;
	// num�� 0���� ũ�� �׳� ���, �ƴϸ� -1�� ���� ���밪���� ����
	printf("���� ��: %d\n", absolute);
}

int test15(void)
{
	int nData1 = 0;
	int nData2 = 0;
	printf("�� ���� �Է�: ");
	scanf_s("%d%d", &nData1, &nData2);

	printf("%d", nData1 > nData2 ? nData1 : nData2);
}

// - ������� %(������ ������)
int test16(void)
{
	int nData = 0;
	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &nData);
	printf(nData % 2 == 0 ? "%d�� ¦��" : "%d�� Ȧ��", nData);

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
	printf("�Է� ��: ");
	scanf_s("%d", &nInput);
	nHrs = nInput / 60 / 60;
	nMins = nInput / 60 % 60;
	nSecs = nInput % 60;
	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.", nInput, nHrs, nMins, nSecs);
}

int test20(void)
{
	int nData1 = 0;
	int nData2 = 0;
	int nTotal = 0;

	printf("���� 2�� �Է� : ");
	scanf_s("%d%d", &nData1, &nData2);

	nTotal = nData1 + nData2;

	printf(nTotal % 4 == 0 ? "%d�� %d�� ����Դϴ�.\n" : "%d�� %d�� ����� �ƴմϴ�.\n", nTotal, 4);
}
// ��Ʈ �����ڿ� ����Ʈ ������
// ��Ʈ ������
// & : AND ������
// | : OR ������
// ^ : XOR ������
// ~ : NOT ������

// ����Ʈ ������

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

	printf("<< ����Ʈ ���� ���: %d\n", num3);
	printf(">> ����Ʈ ���� ���: %d\n", num4);
}

int test23(void)
{
	int nAge = 0;
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &nAge);
	printf("����� ���̴� %d���̸� , ����� %d���Դϴ�.\n", nAge, nAge < 20 ? 800 : 1250);
}

int test24(void)
{
	int nAge = 0;
	int nHeight = 0;
	
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &nAge);
	printf("Ű�� �Է��ϼ���: ");
	scanf_s("%d", &nHeight);
	printf(nAge >= 12 & nHeight >= 120 ? "���̱ⱸ�� ž���Ͻ� �� �ֽ��ϴ�.\n" : "���̱ⱸ�� ž���Ͻ� �� �����ϴ�.\n");

}
// ���
// Change the Flow of the Program
// if�� - �б⹮(branching statement)�̶�� �Ѵ�.
// ���ǽ��� �ٰŷ� �������� �帧�� �����Ѵ�.
// ���� �⺻���� ���, ���� ������ ����.

int test25(void)
{
	int num = 0;

	printf("���� �Է�: ");
	scanf_s("%d", &num);

	if (num % 2 == 0) 
	{
		printf("�Է��� ���� ¦���Դϴ�.\n");
	}
	printf("ù��° if�� Ż��\n");

	if (num % 2 == 1) 
	{
		printf("�Է��� ���� Ȧ���Դϴ�.\n");
	}
	printf("�ι�° if�� Ż��\n");
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

	printf("ù��° ������: ");
	scanf_s("%d", &nData1);
	printf("�ι�° ������: ");
	scanf_s("%d", &nData2);
	printf("����° ������: ");
	scanf_s("%d", &nData3);

	if (nData1 % 2 == 0)
	{
		printf("%d�� ¦��\n", nData1);
	}
	if (nData2 % 2 == 0)
	{
		printf("%d�� ¦��\n", nData2);
	}
	if (nData3 % 2 == 0)
	{
		printf("%d�� ¦��\n", nData3);
	}
}

int test29(void)
{
	int nInput = 0;
	int nMax = 0;

	printf("ù��° ������: ");
	scanf_s("%d", &nInput);
	nMax = nInput;

	printf("�ι�° ������: ");
	scanf_s("%d", &nInput);
	if (nInput > nMax)
	{
		nMax = nInput;
	}

	printf("����° ������: ");
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

	printf("���� �Է�: ");
	scanf_s("%c", &cData1, sizeof(cData1));
	
	if ('A' <= cData1 && 'Z' >= cData1)
	{
		printf("���ĺ� �빮�� �Է��ϼ̽��ϴ�.\n");
	}
	if ('a' <= cData1 && 'z' >= cData1)
	{
		printf("���ĺ� �ҹ��� �Է��ϼ̽��ϴ�.\n");
	}
}
//if-else
// else�� if�� �־�� ����� �� �ִ�.

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
		printf("¦���̸鼭 ");
	}
	else
	{
		printf("Ȧ���̸鼭 ");
	}

	if (nInput % 3 == 0)
	{
		printf("3�� ����̴�.\n");
	}
	else if (nInput % 5 == 0)
	{
		printf("5�� ����̴�.\n");
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
// goto���� break��ó�� Ư�� ��ġ�� ���α׷��� �帧�� '���'�����Ѵ�.
// break���� ����� �� �ִ� ���� ���������� �������̴�.(switch, �ݺ���)
// ������ goto���� ����ڰ� Lable�� ����ϸ� �����ġ�� �̵� �����ϴ�
// ��, �ƹ� ���Ѿ��� �ڵ��� �帧�� ������ �� �ִ�.

int test37(void)
{
	const int PRICE = 5000;
	int nInput = 0;
	int total = 0;

	printf("n�� �Է�: ");
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
	printf("%d�� �Դϴ�.", total);
}

int test38(void)
{
	int nInput = 0;

	printf("�� �Է�: ");
	scanf_s("%d", &nInput);

	switch (nInput)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ�");
		break;

	case 3:
	case 4:
	case 5:
		printf("��");
		break;

	case 6:
	case 7:
	case 8:
		printf("����");
		break;

	case 9:
	case 10:
	case 11:
		printf("����");
		break;

	default:
		printf("ERROR");
		break;
	}
	printf("�Դϴ�.\n");
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
// �ݺ��� ���
// 1) ���ǹ�, ������ �����ϸ� �ݸ� ����
// 2) �ʱⰪ
// 3) ������ 
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
		printf("���ڸ� �Է��ϼ���. ('-1' ����): ");
		scanf_s("%d", &num);

		if (num == -1) 
		{
			printf("�����մϴ�.");
		}
		else
		{
			printf("%��(��) �Է��ϼ̳׿�.\n", num);
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


