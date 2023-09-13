#include "io.h"

void PointerDefine()
{
	int a = 10;

	cout << " a : " << a << endl; // 값 출력
	cout << " &a : " << &a << endl; // &a : &(주소참조) 연산, 주소 출력

	int* pa = &a; // 포인터 변수에 주소값 대입

	cout << "pa : " << pa << endl; // 주소 출력
	cout << "*pa : " << *pa << endl; // 값 출력

	cout << "pa + 1 : " << pa + 1 << endl;
	cout << "*pa + 1 : " << *pa + 1 << endl;
	cout << "*(pa + 1) : " << *(pa + 1) << endl;

	int** ppa = &pa; // 포인터를 참조하는 포인터

	cout << "ppa : " << ppa << endl;
	cout << "*ppa : " << *ppa << endl;
	cout << "**ppa : " << **ppa << endl;

	cout << endl;

	int Array[3] = { 1,5,9 };
	int* pArray = Array;

	cout << "Array : " << Array << endl;
	cout << "pArray : " << pArray << endl;

	cout << "Array[1] : " << Array[1] << endl;
	cout << "pArray[1] : " << pArray[1] << endl;

	cout << "*pArray : " << *pArray << endl;
	cout << "*Array : " << *Array << endl;

	cout << "Array + 1 : " << Array + 1 << endl;
	cout << "pArray + 1 : " << pArray + 1 << endl;

	cout << "*Array + 1 : " << *Array + 1 << endl;
	cout << "*pArray + 1 : " << *pArray + 1 << endl;

	cout << "*(Array + 1) : " << *(Array + 1) << endl;
	cout << "*(pArray + 1) : " << *(pArray + 1) << endl;

}