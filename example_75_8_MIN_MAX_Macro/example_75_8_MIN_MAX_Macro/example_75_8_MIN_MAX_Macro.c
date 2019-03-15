﻿#include <stdio.h>
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))
#include <math.h>
int main()
{
	printf("%d\n", MIN(10, 20));
	printf("%d\n", MAX(4 & 4, 2 & 2));
	printf("%d\n", MIN(10, 20)); //math.h 

	return 0;
}
/*
매크로를 이용하여 두 값 
중 작은 값과 큰 값을 구하는 문제입니다. 
매크로를 정의할 때 먼저 MIN(a, b)와 같이 
괄호 안에 인수 목록을 지정해주고 (a) < (b) ? (a) : (b)
와 같이 삼항 연산자를 사용하여 작은 값을 구합니다. 
마찬가지로 큰 값을 구하는 MAX(a, b)는 
부등호를 반대로 해주면 됩니다. 
단, MAX(4 & 4, 2 & 2)에서 & 보다 >의 우선순위가 높기 때문에 
a와 b가 연산자 우선순위에 영향을 받지 않도록 모두 괄호로 묶어줍니다. 
또한 <, >의 결과와 삼항 연산자의 결과도 다른 연산자의 
우선순위에 영향을 받지 않도록 모두 괄호로 묶어줍니다.

*/