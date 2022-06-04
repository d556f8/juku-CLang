/*
���ϸ�: exam-01-02.c
�ۼ���: Lee
������¥: 22-05-28
���: print String using printf()
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
	printf("�̸� : ������\n");
	printf("���� : 20\n");
	printf("���� : ��\n");
	printf("�ּ� : �뱸������\n");
}
int exam5(void)
{
	// ����(format) : ������ �ٹ̴� ������ '���'
	/*
	%d : 10�� ������ ǥ���ϴ� ���Ĺ���
	%f : 10�� �Ǽ��� ǥ���ϴ� ���Ĺ���
	%c : ���ڸ� ǥ���ϴ� ���Ĺ���(1byte)
	%s : ���ڿ��� ǥ���ϴ� ���Ĺ���
	*/
	printf("����(����)���Ĺ��� : %d\n", 10);
	printf("%d + %d = %d\n", 10, 20, 10 + 20);
	printf("����(�Ǽ�)���Ĺ��� : %f\n", 123.45);
	printf("�ѹ��� ���Ĺ��� : %c\n", 'a');
	printf("���ڿ� ���Ĺ��� : %s\n", "Hello, World");
	printf("\n");
	printf("�̸�: %s\n", "������");
	printf("����: %d\n", 20);
	printf("����: %c\n", 'M');
	printf("����: %.2f\n", 181.5);
	printf("\n");
	printf("�̸�: %s\n����: %d\n����: %c\n����: %.2f\n", "������", 20, 'M', 181.5);

	// CTRL + K + F
	// kataduke code
}
int exam6(void)
{
	printf("%d + %d = %d\n", 5, 12, 5 + 12);
}
int test2(void)
{
	printf("�̸�\t����\t����\t�ּ�\n");
	printf("%s\t%d\t%c\t%s\n", "ȫ�浿", 20, 'M', "�޼���");
	printf("%s\t%d\t%c\t%s\n", "���浿", 30, 'M', "������");
	printf("%s\t%d\t%c\t%s\n", "���浿", 40, 'W', "����");

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
char : Character (������ ǥ���ϴ� �ڷ���)
signed char : ��ȣ�� �ִ� 1����Ʈ ������� (-128 ~ 127)
unsigned char : ��ȣ�� ���� 1����Ʈ �������
float : �Ǽ��� �����ϴ� ���� 4����Ʈ ������� ���� �Ⱦ��� go to double
double : �Ǽ��� �����ϴ� ���� 8����Ʈ ������� 
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
	printf("���� ���̴� %d �Դϴ�.\n", age);
	printf("���� Ű�� %.lf �Դϴ�.\n", height);
	printf("���� �����Դ� %.lf �Դϴ�.\n", weight);
}

// #define prep(macro const)
// macro = ���ֻ���Ѵ� ����� ��� �ϳ��� ������� ����Ѵ�.
// #define  DATA       7
//         ġ���� �̸� ġ�ϵ� ����
