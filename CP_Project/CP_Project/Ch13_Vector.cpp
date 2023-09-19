#include "io.h"

#include <vector>

using namespace std;

void VectorClass()
{
	// 동적 생성
	vector<int> vd1; // 배열 생성 : vd1 - 원소 개수, 내용 모두 지정되지 않음
	vector<int> vd2(3); // 원소 개수
	vector<int> vd3(3, 2); // 원소 개수와 원소 내용 모두 지정됨

	vd1.push_back(33);

	cout << vd1.front() << endl;

	vd1.push_back(55);

	cout << vd1.at(1) << endl;

	vd1.push_back(77);

	cout << vd1.size() << endl;

	vd1.pop_back();

	cout << vd1.size() << endl;

	cout << vd1.capacity() << endl;
}


