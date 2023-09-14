#include "io.h"

void BallInsert()
{
	int BasketCount;
	cout << "바구니의 개수를 입력해주세요 :";
	cin >> BasketCount;

	int InsertCount;
	cout << "공 넣는 횟수를 입력해주세요 :";
	cin >> InsertCount;

	int* pBasket = new int[BasketCount];

	for (int i = 0; i < BasketCount; i++) {
		pBasket[i] = 0;
	}

	int StartBasketNumber, EndBasketNumber, BallNumber;

	for (int i = 0; i < InsertCount; i++) {

		cout << "시작 바구니 번호 : ";
		cin >> StartBasketNumber;
		cout << "종료 바구니 번호 : ";
		cin >> EndBasketNumber;
		cout << "넣어줄 공 번호 : ";
		cin >> BallNumber;

		for (int j = StartBasketNumber-1; j <= EndBasketNumber-1; j++) {

			pBasket[j] = BallNumber;

		}

	}

	for (int i = 0; i < BasketCount; i++) {
		cout << pBasket[i] << ":";
	}

	cout << endl;
}

void BallSwap()
{
	int BasketCount;
	cout << "바구니의 개수를 입력해주세요 :";
	cin >> BasketCount;

	int InsertCount;
	cout << "공을 맞바꾸는 횟수를 입력해주세요 :";
	cin >> InsertCount;

	int* pBasket = new int[BasketCount];

	for (int i = 0; i < BasketCount; i++) {
		pBasket[i] = i+1;
	}

	int LeftBasketNumber, RightBasketNumber, temp;

	for (int i = 0; i < InsertCount; i++) {

		cout << "왼쪽 바구니 번호 : ";
		cin >> LeftBasketNumber;
		cout << "오른쪽 바구니 번호 : ";
		cin >> RightBasketNumber;

		//swap
		temp = pBasket[LeftBasketNumber - 1];
		pBasket[LeftBasketNumber - 1] = pBasket[RightBasketNumber - 1];
		pBasket[RightBasketNumber - 1] = temp;
	}

	for (int i = 0; i < BasketCount; i++) {
		cout << pBasket[i] << ":";
	}

	cout << endl;
}