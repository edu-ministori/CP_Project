#include "io.h"

void DynamicVariable()
{
	int* pNum = new int;
	char* pValue = new char;

	*pNum = 10;
	*pValue = 'a';

	cout << pNum << endl;
	cout << pValue << endl;

	cout << *pNum << endl;
	cout << *pValue << endl;

	delete pNum;
	delete pValue;

	int a[3] = { 1,2,3 };
	int* pa = a;

	cout << a[0] << ":" << pa[0] << endl;

	int size = 3;
	int* pArray = new int[size];

	pArray[0] = 10;

	cout << pArray[0] << endl;
}