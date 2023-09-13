#include "io.h"

void OvenTime() {
  int StartHour, StartMinute, CookingTime;

  // 입력 받은 값에 대해서 시간 범위안에 포함되는지 여부 판단
  // 범위를 벗어나는 값이 입력되면 메세지를 출력하고 다시 입력받음
  while(true)
  {
    cout << "시작하는 시간 시 입력 : ";
    cin >> StartHour;

    // 0 <= StartHour <= 23 : StartHour >= 0 && StartHour <= 23 
    if(StartHour >= 0 && StartHour <= 23)
    {
      break;
    }
    else
    {
      cout << "잘못 입력하셨습니다." << endl;
    }
  }

  while(true){
    cout << "시작하는 시간 분 입력 : ";
    cin >> StartMinute;

    if(StartMinute >= 0 && StartMinute <= 59)
    {
      break;
    }
    else
    {
      cout << "잘못 입력하셨습니다." << endl;
    }
  }

  while(true){
    cout << "요리 시간 입력 : ";
    cin >> CookingTime;

    if(CookingTime >= 0 && CookingTime <= 1000)
    {
      break;
    }
    else
    {
      cout << "잘못 입력하셨습니다." << endl;
    }
  }
  
  // 시작 시간의 분과 요리 시간에 분 값을 더했을 때 60이 넘었을 때
  // 시 부분에 1을 증가시키고 분 값은 60을 뺀값으로 출력
  int AddHour = ( StartMinute + CookingTime ) / 60;
  int FinishMinute = ( StartMinute + CookingTime ) % 60;

  // 시작 시간에 요리 시간으로 추가되는 시간을 더했을 때 24가 넘었을 때
  // 시간을 0부터 시작하도록 조정해줌
  int FinishHour = ( StartHour + AddHour ) % 24;
  
  cout << FinishHour << ":" << FinishMinute << endl;
  
}

void Quadrant() {
  int x;
  int y;
  cout << "x값 입력 : ";
  cin >> x;
  cout << "y값 입력 : ";
  cin >> y;

  // x>0 && y>0 : 모두 양수
  // x<0 && y>0 : x 음수, y 양수
  // x<0 && y<0 : 모두 음수
  // x>0 && y<0 : x 양수, y 음수

  if (x > 0 && y > 0) {
    cout << "1사분면" << endl;
  } else if (x < 0 && y > 0) {
    cout << "2사분면" << endl;
  } else if (x < 0 && y < 0) {
    cout << "3사분면" << endl;
  } else {
    cout << "4사분면" << endl;
  }
}

void LeapYear() {
  int Year;
  cout << "연도를 입력해주세요.";
  cin >> Year;

  // Year % 4 == 0 : 4의 배수
  // Year % 100 != 0 : 100의 배수가 아님
  // (Year % 4 == 0) && (Year % 100 != 0)
  // Year % 400 == 0
  // ( (Year % 4 == 0) && (Year % 100 != 0) ) || Year % 400 == 0

  if (((Year % 4 == 0) && (Year % 100 != 0)) || Year % 400 == 0) {
    cout << "윤년" << endl;
  } else {
    cout << "평년" << endl;
  }
}

void SizeComparison() {
  int Value1 = 0;
  int Value2 = 0;

  cout << "첫번째 값을 입력해주세요.";
  cin >> Value1;
  cout << "두번째 값을 입력해주세요.";
  cin >> Value2;

  if (Value1 > Value2) {
    cout << ">" << endl;
  } else if (Value1 < Value2) {
    cout << "<" << endl;
  } else {
    cout << "==" << endl;
  }
}