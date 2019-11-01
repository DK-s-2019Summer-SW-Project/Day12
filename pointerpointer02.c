// 다중 포인터 변수와 포인터 필요성
// 포인터 변수의 선언에 있어서 *연산자가 둘 이상 사용되어 선언되는 포인터 변수를 가르켜 '다중 포인터 변수'라 한다 
// 또한 포인터 변수 선언 시 *연산자는 얼마든지 추가 될 수 있다. 
// 삼중 포인터란?? --> 이중 포인터 변수를 가르키는 용도로 이중 포인터 변수의 주소 값을 저장하는 용도로 사용 된다. 

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int num = 100;
	int *ptr = &num;
	int **dptr = &ptr;
	int ***tptr = &dptr;

	printf("%d %d %d\n", *ptr, **dptr, ***tptr);

	return 0;
}

// 3중 포인터는 어디서 쓰이는가? ==> 자료 구조를 공부할 때 삼중 포인터의 필요성을 느끼게 된다. 