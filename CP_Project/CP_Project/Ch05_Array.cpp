#include "io.h"

void DefineArray()
{
  int Num = 0;

  // 선언, declare(define)
  int a[3] = {1,2,3};
  int b[10] = {1,2};
  // int c[3] = {1,2,3,4}; => Syntax Error
  int d[3];

  // 대입 => 접근, access
  // d[3] = {1,2,3};
  d[0] = 1;
  d[1] = 2;
  d[2] = 3;

  // d 배열의 개수는 3개, 반복 5번 값을 대입 => 에러 발생
  for(int i=0; i<5; i++)
  {
    cout << "c" << i;
    d[i] = i+1;
  }

  cout << endl;
  
  // 출력 => 접근, Access
  for(int i=0; i<3; i++)
  {
    cout << a[i] << " : ";
  }

  cout << endl;

  // 배열 개수 10개, 13번 반복 출력 => 10개 범위 넘어서는 부분은 쓰레기값 출력
  for(int i=0; i<13; i++)
  {
    cout << b[i] << " : ";
  }

  cout << endl;

  for(int i=0; i<5; i++)
  {
    cout << d[i] << " : ";
  }

  cout << endl;
  
}

void TwoDimension()
{
  int number[3][2] = {
    {1,2},
    {3,4},
    {5,6}
  };

  cout << number[0][0];
  cout << number[2][1];

  for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
      cout << number[i][j] << endl;
    }
  }
}