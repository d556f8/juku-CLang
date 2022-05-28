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
