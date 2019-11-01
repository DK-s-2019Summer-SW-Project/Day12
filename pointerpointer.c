// pointer pointer 
// Pointer pointer�� ������ ������ ����Ű�� �� �ٸ� ������ ������ ���ϴ� �����ν� ���� '���� ������ ��� ��Ī�Ѵ�.
// ������ ������ ������ ��� ���� ������ �ּ� ���� �����ϴ� �����̴�. �ٸ� �������� �ִٸ� ������ ������ �����ϴ� ����̴�. 

/*
 int main 
 {
    double num = 3.14;
	double *ptr = &num;
	������: �� �� �����̴�, ���� ���� ������ �����ϴ�
	������: �����ϴ� ���� ����(����)�� �ٸ���.
	*/
// �̷��� ptr�� �޸� ������ �Ҵ��� �Ǵ� �����̴�. ���� �̸� ������� &������ �����ϸ�, �̋� ��ȯ�Ǵ� �ּҴ°��� double�� ���� ����Ʈ ������ ������ �����ϴ�. 
// ������ �̱� ������ ���� ptr�� ������� ������ ���� ������ ������ �����ϴ� ==> double ** ptr=&ptr; 
// *dptr = *ptr�� ������ ���� ptr�� �ǹ��ϸ� **ptr�� ���� num�� �ǹ� �Ѵ�

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
	ptr2 = *dptr; // ptr2 = ptr�� ���� �����̴�. 
	printf("%9g %9g\n", num, **dptr);

	return 0;
}
// swap�� �̷������ ���� �߸��� ����
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

	SwapIntptr(ptr1, ptr2); // SwapIntptr(&ptr1, &ptr2) �̷��� �ּҸ� ������ �־�� �Ѵ�. 
	printf("*ptr1, *ptr2: %d %d\n", *ptr1, *ptr2);
	return 0;
}
// p1�� ptr1�� ������ �����̱� ������ swap�� �����ص� �� �ٷ� �̷������ �ʴ´�!

/*������ �迭�� ������ �迭�� ������ �� */

// int *arr1[20]; --> ���̰� 20�� int�� ������ �迭 arr1
// double *arr2[30]; --> ���̰� 30�� double�� ������ �迭 arr2
// int arr[30]; --> �̸��� arr�� int�� ������

// Pointer ArrayType Exampe

int main()
{
	int num1 = 10, num2 = 20, num3 = 30;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int *ptr3 = &num3;


	int *ptrArr[] = { ptr1, ptr2, ptr3 }; // �迭�� ũ�⸦ ������ �� ���¿��� �迭�� ���Ҹ� �־���.
	int **dptr = ptrArr;

	printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
	printf("%d %d %d\n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
	return 0;
}