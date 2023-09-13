#include "io.h"

void MultipleCalculate()
{
  int LoopCount, Value1, Value2;
  
  cout << "반복 횟수를 입력하세요." << endl;
  cin >> LoopCount;
  
  for(int i=0; i<LoopCount; i++)
  {
    cout << "두 수를 입력해주세요" << endl;
    cin >> Value1;
    cin >> Value2;
    cout << "합 : " << Value1 + Value2 << endl;
  }
}

void Receipt()
{
  int TotalPrice = 0;
  int Count = 0;
  int Price = 0;
  int Number = 0;
  int SumPrice = 0;
  
  cout << "구입 총 금액 : " << endl;
  cin >> TotalPrice;
  cout << "물건 종류 수 : " << endl; // 반복 횟수
  cin >> Count;

  for(int i=1; i<=Count; i++)
  {
    cout << i << "번 물건 가격 : " << endl;
    cin >> Price;
    cout << i << "번 물건 개수 : " << endl;
    cin >> Number;
    cout << i << "번 물건 총 가격 : " << Price * Number << endl;

    SumPrice += Price * Number;
  }

  if(TotalPrice == SumPrice)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  cout << ( (TotalPrice == SumPrice) ? "Yes" : "No" );
  
}

void Star()
{
  for(int i=1; i<=5; i++)
  {
    for(int j=1; j<=i; j++)
    {
      cout << "*"; 
    }
    cout << endl;
  }

  for(int i=0; i<5; i++)
  {
    for(int j=1; j<=(5-i); j++)
    {
      cout << "*"; 
    }
    cout << endl;
  }

  for(int i=1; i<=5; i++)
  {
    for(int j=1; j<=(5-i); j++)
    {
      cout << " ";
    }
    for(int k=1; k<=i; k++)
    {
      cout << "*";
    }
    
    cout << endl;
  }
  
}