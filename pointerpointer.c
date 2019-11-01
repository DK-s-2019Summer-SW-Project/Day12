// pointer pointer 
// Pointer pointer는 포인터 변수를 가르키는 또 다른 포인터 변수를 뜻하는 것으로써 흔이 '이중 포인터 라고 지칭한다.
// 포인터 변수는 종류에 상관 없이 무조건 주소 값을 저장하는 변수이다. 다만 차이점이 있다면 포인터 변수가 지정하는 대상이다. 

/*
 int main 
 {
    double num = 3.14;
	double *ptr = &num;
	공통점: 둘 다 변수이다, 따라서 값의 저장이 가능하다
	차이점: 저장하는 값의 종류(유형)이 다르다.
	*/
// 이렇듯 ptr도 메모리 공간에 할당이 되는 변수이다. 따라서 이를 대상으로 &연산이 가능하며, 이떄 반환되는 주소는값은 double형 더블 포인트 변수에 저장이 가능하다. 
// 때문에 싱글 포인터 변수 ptr을 대상으로 다음과 같은 문장의 구성이 가능하다 ==> double ** ptr=&ptr; 
// *dptr = *ptr은 포인터 변수 ptr을 의미하며 **ptr은 변수 num을 의미 한다

#include <stdio.h>
#define _CRT_SECURE_NO_WARRNINGS

int main()
{
	double num = 3.14;
	double *ptr = &num;
	double **dptr = &ptr;
	double *ptr2;

	printf("%9p %9p \n", ptr, *ptr);
	printf("%9g %9g \n", num, **dptr);
	ptr2 = *dptr; // ptr2 = ptr과 같은 문장이다. 
	printf("%9g %9g\n", num, **dptr);

	return 0;
}
// swap이 이루어지지 않은 잘못된 예제
void SwapIntptr(int *p1, int *p2)
{
	int *temp = p1;
	p1 = p2;
	p2 = temp;
}


int main()
{
	int num1 = 10, num2 = 20;
	int *ptr1, *ptr2;
	ptr1 = &num1, ptr2 = &num2;

	printf("*ptr1, *ptr2: %d %d\n", *ptr1, *ptr2);

	SwapIntptr(ptr1, ptr2); // SwapIntptr(&ptr1, &ptr2) 이렇게 주소를 전달해 주어야 한다. 
	printf("*ptr1, *ptr2: %d %d\n", *ptr1, *ptr2);
	return 0;
}
// p1과 ptr1은 별개의 변수이기 때문에 swap을 실행해도 곧 바로 이루어지지 않는다!

/*포인터 배열과 포인터 배열의 포인터 형 */

// int *arr1[20]; --> 길이가 20인 int형 포인터 배열 arr1
// double *arr2[30]; --> 길이가 30인 double형 포인터 배열 arr2
// int arr[30]; --> 이름이 arr인 int형 포이터

// Pointer ArrayType Exampe

int main()
{
	int num1 = 10, num2 = 20, num3 = 30;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int *ptr3 = &num3;


	int *ptrArr[] = { ptr1, ptr2, ptr3 }; // 배열의 크기를 미지정 한 상태에서 배열의 원소를 넣었다.
	int **dptr = ptrArr;

	printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
	printf("%d %d %d\n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
	return 0;
}