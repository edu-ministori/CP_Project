#include <iostream>
#include <cstdlib>

using namespace std;

/*
1부터 6까지 숫자가 적힌 주사위가 네 개 있습니다. 네 주사위를 굴렸을 때 나온 숫자에 따라 다음과 같은 점수를 얻습니다.

네 주사위에서 나온 숫자가 모두 p로 같다면 1111 × p점을 얻습니다.
세 주사위에서 나온 숫자가 p로 같고 나머지 다른 주사위에서 나온 숫자가 q(p ≠ q)라면 (10 × p + q)2 점을 얻습니다.
주사위가 두 개씩 같은 값이 나오고, 나온 숫자를 각각 p, q(p ≠ q)라고 한다면 (p + q) × |p - q|점을 얻습니다.
어느 두 주사위에서 나온 숫자가 p로 같고 나머지 두 주사위에서 나온 숫자가 각각 p와 다른 q, r(q ≠ r)이라면 q × r점을 얻습니다.
네 주사위에 적힌 숫자가 모두 다르다면 나온 숫자 중 가장 작은 숫자 만큼의 점수를 얻습니다.

네 주사위를 굴렸을 때 나온 숫자가 정수 매개변수 a, b, c, d로 주어질 때, 얻는 점수를 return 하는 solution 함수를 작성해 주세요.

제한사항
a, b, c, d는 1 이상 6 이하의 정수입니다.

a	b	c	d	result
2	2	2	2	2222
4	1	4	4	1681
6	3	3	6	27
2	5	2	6	30
6	4	2	5	2
*/

/*
void DiceIf(int a, int b, int c, int d) {

	// 1
	if(a == b && b == c && c == d ){}

	// 2
	if( a == b && b == c && c != d ){}

	if( b == c && c == d && d != a ){}

	if( c == d && d == a && a != b ){}

	if( d == a && a == b && b != c ){}

	// 3
	if( a == b && c == d ){}

	if( a == c && b == d ){}

	if( a == d && b == c ){}

	// 4
	if( a == b && c != d && a != c && b != c && a != d && b != d ){}

	if( a == c ) {}

	if( a == d ) {}

	if( b == c && a != d && b != a && c != a && b != d && c != d){}

	if( b == d ){}

	if( c == d ){}

	// 5
	if(a != b && b != c && c != d && a != c && b != d && a != d){}

}
*/
// 오름차순 정렬
// 
// 1 - 모두 같은 경우 {1,1,1,1} => 첫번째원소 == 마지막원소
// 2 - 3개 같고, 1개 다른 경우
//     {1,1,1,2} => 첫번째 원소 == 세번째 원소
//     {1,2,2,2} => 두번째 원소 == 네번째 원소
// 3 - 2개씩 같은 값
//     {1,1,2,2} => 첫번째 원소 == 두번째 원소 && 세번째 원소 == 네번째 원소
// 4 - 2개가 같고, 각각 다른 값
//     {1,1,2,3} => 첫번째 원소 == 두번째 원소, [두번째 원소 != 세번째 원소, 두번째 원소 != 네번째 원소]
//     {1,2,2,3} => 두번째 원소 == 세번쨰 원소 
//     {1,2,3,3} => 세번째 원소 == 네번째 원소
// 5 - 나머지

void Dice(int a, int b, int c, int d)
{
	// 오름차순 정렬
	int DiceNumber[4] = { a,b,c,d };
	int temp;
	
	for (int i = 3; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (DiceNumber[j] > DiceNumber[j + 1])
			{
				temp = DiceNumber[j];
				DiceNumber[j] = DiceNumber[j + 1];
				DiceNumber[j + 1] = temp;
			}
		}
	}
	

	for (int i = 0; i < 4; i++) {
		cout << DiceNumber[i] << " : ";
	}

	cout << endl << "----------------------------" << endl;

	// 1
	if (DiceNumber[0] == DiceNumber[3])
	{
		cout << 1111 * DiceNumber[0] << endl;
	}
	// 2
	else if ( DiceNumber[0] == DiceNumber[2])
	{
		cout << (10 * DiceNumber[0] + DiceNumber[3]) * (10 * DiceNumber[0] + DiceNumber[3]) << endl;
	}
	else if (DiceNumber[1] == DiceNumber[3])
	{
		cout << (10 * DiceNumber[1] + DiceNumber[0]) * (10 * DiceNumber[1] + DiceNumber[0]) << endl;
	}
	// 3
	else if (DiceNumber[0] == DiceNumber[1] && DiceNumber[2] == DiceNumber[3])
	{
		cout << (DiceNumber[0] + DiceNumber[2]) * abs(DiceNumber[0] - DiceNumber[2]) << endl;
	}
	// 4
	else if (DiceNumber[0] == DiceNumber[1])
	{
		cout << DiceNumber[2] * DiceNumber[3] << endl;
	}
	else if (DiceNumber[1] == DiceNumber[2])
	{
		cout << DiceNumber[0] * DiceNumber[3] << endl;
	}
	else if (DiceNumber[2] == DiceNumber[3])
	{
		cout << DiceNumber[0] * DiceNumber[1] << endl;
	}
	// 5
	else
	{
		cout << DiceNumber[0] << endl;
	}

}

