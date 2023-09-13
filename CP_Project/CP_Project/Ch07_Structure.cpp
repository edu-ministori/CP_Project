#include "io.h"

void Structure()
{
  // 구조체 서술 정의 : 데이터 타입을 생성
  struct inflatable {
    char name[20];
    float volume;
    double price;
  };

  inflatable People = { "Tom", 0.75, 15.235 };

  struct sesac{
    // 멤버 변수
    char name[20];
    char address[100];
    char phone[20];
    int age;
  };

  sesac Banjang;
  Banjang = {"Jane", "서울시", "01012345678", 25};
  Banjang.age = 30;
  
}

void Enum()
{
  // enum : 열거형 데이터 타입
  // Sun, Mon, Tue ... Sat : 열거형 상수
  // 0부터 시작하는 양수를 열거형 상수의 값으로 할당
  enum day {Sun, Mon, Tue, Wed=10, Thu, Fri, Sat};
  
  day DayName;
  DayName = Sat;
  cout << DayName << endl;

  switch(DayName)
  {
    case Sun:
      cout << "Bicycle";
      break;
    case Mon:
      cout << "Work";
      break;
    case Tue:
      cout << "Work";
      break;
    case Wed:
      cout << "Work";
      break;
    case Thu:
      cout << "Work";
      break;
    case Fri:
      cout << "Work";
      break;
    case Sat:
      cout << "Party";
      break;
  }
}

void ChangeValue(int a)
{
  a = 0;
}

int ChangeValue2(){
  return 0;
}

int c = 10;

void CallByvalue()
{
  // ChangeValue(c);
  c = ChangeValue2();
}