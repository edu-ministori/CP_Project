#include <iostream>
#include <cstdlib>

using namespace std;

/*
1���� 6���� ���ڰ� ���� �ֻ����� �� �� �ֽ��ϴ�. �� �ֻ����� ������ �� ���� ���ڿ� ���� ������ ���� ������ ����ϴ�.

�� �ֻ������� ���� ���ڰ� ��� p�� ���ٸ� 1111 �� p���� ����ϴ�.
�� �ֻ������� ���� ���ڰ� p�� ���� ������ �ٸ� �ֻ������� ���� ���ڰ� q(p �� q)��� (10 �� p + q)2 ���� ����ϴ�.
�ֻ����� �� ���� ���� ���� ������, ���� ���ڸ� ���� p, q(p �� q)��� �Ѵٸ� (p + q) �� |p - q|���� ����ϴ�.
��� �� �ֻ������� ���� ���ڰ� p�� ���� ������ �� �ֻ������� ���� ���ڰ� ���� p�� �ٸ� q, r(q �� r)�̶�� q �� r���� ����ϴ�.
�� �ֻ����� ���� ���ڰ� ��� �ٸ��ٸ� ���� ���� �� ���� ���� ���� ��ŭ�� ������ ����ϴ�.

�� �ֻ����� ������ �� ���� ���ڰ� ���� �Ű����� a, b, c, d�� �־��� ��, ��� ������ return �ϴ� solution �Լ��� �ۼ��� �ּ���.

���ѻ���
a, b, c, d�� 1 �̻� 6 ������ �����Դϴ�.

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
// �������� ����
// 
// 1 - ��� ���� ��� {1,1,1,1} => ù��°���� == ����������
// 2 - 3�� ����, 1�� �ٸ� ���
//     {1,1,1,2} => ù��° ���� == ����° ����
//     {1,2,2,2} => �ι�° ���� == �׹�° ����
// 3 - 2���� ���� ��
//     {1,1,2,2} => ù��° ���� == �ι�° ���� && ����° ���� == �׹�° ����
// 4 - 2���� ����, ���� �ٸ� ��
//     {1,1,2,3} => ù��° ���� == �ι�° ����, [�ι�° ���� != ����° ����, �ι�° ���� != �׹�° ����]
//     {1,2,2,3} => �ι�° ���� == ������ ���� 
//     {1,2,3,3} => ����° ���� == �׹�° ����
// 5 - ������

void Dice(int a, int b, int c, int d)
{
	// �������� ����
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

