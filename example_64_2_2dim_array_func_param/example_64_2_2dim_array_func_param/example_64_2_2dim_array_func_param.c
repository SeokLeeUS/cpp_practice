﻿#include<stdio.h>

void print2DArray(int arr[][5], int col, int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}
/*
함수에서 2차원 배열을 매개변수로 
사용할 때는 매개변수 이름 뒤에 []를 
두 개 붙이고 두 번째 대괄호에는 배열의 
가로 크기를 지정해야 합니다
(첫 번째 대괄호 안에는 세로 크기를 지정하더라도 무시됩니다). 
즉, arr[][5]는 2차원 배열의 메모리 주소를 담고 있는 포인터이며 
2차원 배열의 실제 크기를 알 수 없으므로 
다른 매개변수로 배열의 가로, 세로 크기를 받아야 합니다.
*/

int main()
{
	int numArr[2][5] = {
		{1,2,3,4,5},{6,7,8,9,10}
	};

	int col = sizeof(numArr[0]) / sizeof(int);
	// 2차원 배열의 가로 크기를 구할 때는 
    // 가로 한 줄을 요소의 크기로 나눠줌
	int row = sizeof(numArr) / sizeof(numArr[0]);
	// 2: 2차원 배열의 세로 크기를 구할 때는 
	// 배열이 차지하는 공간을 가로 한 줄의 크기로 나눠줌
		print2DArray(numArr, col, row);
	return 0;
}

/*
지금까지 함수에서 배열 매개변수를 
사용하는 방법을 배웠는데 
실제로 함수에 배열을 전달하는 것은 생각보다 까다롭습니다. 
당장은 문법과 개념을 모두 이해하지 않아도 됩니다. 
나중에 함수에서 배열을 전달해야 된다면 
다시 돌아와서 찾아보면 됩니다.

int (*arr)[5]와 같이 int형 배열의 
포인터로 지정하면 2차원 배열을 
매개변수로 사용할 수 있습니다.
*/