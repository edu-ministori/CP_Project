#include "io.h"

void CountNumber()
{
  int Counter = 0;
  cout << "숫자 개수를 입력해주세요 : ";
  cin >> Counter;

  // int Number[Counter]; - 정적 선언 : 크기에 변수 사용할 수 없음
  // 동적 선언
  int* pNumber = new int[Counter];

  for(int i=0; i<Counter; i++)
  {
    cout << "수 데이터를 입력해주세요 : ";
    cin >> pNumber[i];
  }

  int FindNumber;
  cout << "찾을 수를 입력해주세요 :";
  cin >> FindNumber;

  int FindCount = 0;
  for(int i=0; i<Counter; i++)
  {
    if(pNumber[i] == FindNumber)
    {
      FindCount++;
    }
  }

  cout << "찾는 수의 개수는 " << FindCount << "개 입니다.";
}

void LessNumber()
{
  int Counter = 0;
  cout << "숫자 개수를 입력해주세요 : ";
  cin >> Counter;

  int FindNumber;
  cout << "기준 수를 입력해주세요 :";
  cin >> FindNumber;

  // int Number[Counter];
  int* pNumber = new int[Counter];

  for(int i=0; i<Counter; i++)
  {
    cout << "수 데이터를 입력해주세요 : ";
    cin >> pNumber[i];
  }

  for(int i=0; i<Counter; i++)
  {
    if(FindNumber > pNumber[i])
    {
      cout << pNumber[i] << " : ";
    }
  }
}

void MissingNumber()
{
  int Counter = 0;
  cout << "전체 학생 수를 입력해주세요 : ";
  cin >> Counter;

  int FindNumber;
  cout << "과제 제출하지 않은 학생 수를 입력해주세요 :";
  cin >> FindNumber;

  // 전체 학생의 번호 데이터 Set
  //int TotalMember[Counter];
  int* pTotalMember = new int[Counter];

  for(int i=0; i<Counter; i++)
  {
    pTotalMember[i] = i+1;
  }

  // 과제 제출한 학생 번호 Set
  // int WorkMember[Counter - FindNumber];
  int* pWorkMember = new int[Counter - FindNumber];

  for(int i=0; i<(Counter - FindNumber); i++)
  {
    cin >> pWorkMember[i];
  }

  // 제출 확인용 배열 변수 Set
  // bool Check[Counter];
  bool* pCheck = new bool[Counter];

  for(int i=0; i<Counter; i++)
  {
    pCheck[i] = false;
  }

  // 제출한 학생, 미제출 학생 구분 - true/false
  for(int i=0; i<(Counter - FindNumber); i++)
  {
    for(int j=0; j<Counter; j++)
    {
      if(pWorkMember[i] == pTotalMember[j]){
        pCheck[j] = true;
      }
    }
  }

  // 미제출 학생 번호 추출
  for(int i=0; i<Counter; i++)
  {
    if(pCheck[i] == false)
    {
      cout << i+1 << "번 안냄" << endl; 
    }
  }
}