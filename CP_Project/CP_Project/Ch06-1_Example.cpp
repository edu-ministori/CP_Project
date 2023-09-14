#include "io.h"

void IndexChar()
{

  char word[20];
  int number;
  
  cout << "원하는 단어를 입력해주세요.";
  cin >> word;

  cout << "출력을 원하는 자리 수를 입력해주세요.";
  cin >> number;

  cout << word[number-1];
  
}

void AlphaNumber()
{
  char Word[20];
  int WordSize = sizeof(Word)-1;
  
  cout << "원하는 단어를 입력해주세요.";
  cin >> Word;

  char Alpha[] = "abcdefghijklmnopqrstvuwxyz";
  int AlphaSize = sizeof(Alpha)-1;

  // 배열 변수 선언시 크기 인덱스는 변수로 지정할 수 없음
  // C++ 컴파일 언어 => 컴파일하는 시간에 배열 크기가 결정 => 크기를 변수로 지정하면 크기를 지정할 수 없음
  // int Check[AlphaSize];
  
  // int Check[26];
  int* pCheck = new int[AlphaSize];

  for(int i=0;i<AlphaSize;i++)
  {
    pCheck[i] = -1;
  }
  
  for(int i=0; i<WordSize; i++)
  {
    for(int j=0; j<AlphaSize; j++)
    {
      if(Word[i] == Alpha[j]){
        if(pCheck[j] == -1){
          pCheck[j] = i;
        }
      }
    }
  }
  
  for(int i=0; i<AlphaSize; i++)
  {
    cout << pCheck[i] << " ";
  }
}