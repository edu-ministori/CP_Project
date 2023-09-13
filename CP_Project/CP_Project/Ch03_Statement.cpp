#include "io.h"

void StatementIf() {
    // if
    int Total1 = 70;
    // 총점이 60이상이면 "합격" 출력
    if (Total1 >= 60) {
        cout << "합격" << endl;
    }
    // 총점이 60이상이면 "합격" 출력 아니면 "불합격"
    int Total2 = 50;
    if (Total2 >= 60) {
        cout << "합격" << endl;
    }
    else { cout << "불합격" << endl; }

    // 총점이 90이상이면 "수", 80이상이면 "우", 아니면 "재수강"
    int Total3 = 85;

    if (Total3 >= 90) {
        cout << "수" << endl;
    }
    else if (Total3 >= 80) {
        cout << "우" << endl;
    }
    else {
        cout << "재수강" << endl;
    }

    // 3과목 평균점수가 60이상이면 합격, 아니면 불합격
    // 각 과목당 점수가 60미만이면 과락
    int Subject1 = 90;
    int Subject2 = 80;
    int Subject3 = 50;
    int Average = (Subject1 + Subject2 + Subject3) / 3;

    // 평균,과목당 점수 모두 60이상이면 합격
    // 평균>=60 && 과목1>=60 && 과목2>=60 && 과목3>=60
    if (Average >= 60 && Subject1 >= 60 && Subject2 >= 60 && Subject3 >= 60) {
        cout << "합격" << endl;
    }
    else {
        cout << "불합격" << endl;
    }

    int Subject4 = 0;
    int Subject5 = 0;
    int Subject6 = 0;

    cout << "1과목 점수를 입력해주세요 : ";
    cin >> Subject4;
    cout << "2과목 점수를 입력해주세요 : ";
    cin >> Subject5;
    cout << "3과목 점수를 입력해주세요 : ";
    cin >> Subject6;

    int AverageIn = (Subject4 + Subject5 + Subject6) / 3;

    if (AverageIn >= 60 && Subject4 >= 60 && Subject5 >= 60 && Subject6 >= 60) {
        cout << "합격" << endl;
    }
    else {
        cout << "불합격" << endl;
    }

    // 과목 번호 : 1-C++, 2-언리얼엔진, 3-VR
    int SubjectNumber = 0;
    cout << "과목 번호를 입력해주세요 : ";
    cin >> SubjectNumber;

    if (SubjectNumber == 1) {
        cout << "C++" << endl;
    }
    else if (SubjectNumber == 2) {
        cout << "언리얼엔진" << endl;
    }
    else if (SubjectNumber == 3) {
        cout << "VR" << endl;
    }
    else {
        cout << "과목 번호를 다시 입력해주세요." << endl;
    }
}

void StatementSwitch() {
    // 과목 번호 : 1-C++, 2-언리얼엔진, 3-VR
    int SubjectNumber = 0;
    cout << "과목 번호를 입력해주세요 : ";
    cin >> SubjectNumber;

    switch (SubjectNumber) {
    case 1:
        cout << "C++" << endl;
        break;
    case 2:
        cout << "언리얼엔진" << endl;
        break;
    case 3:
        cout << "VR" << endl;
        break;
    default:
        cout << "과목 번호를 다시 입력해주세요." << endl;
    }
}

void StatementNestedIf() {
    int a = 10;
    int b = 20;
    int c = 30;

    if (a < b) {
        cout << "a<b 비교식만 다루는 실행문" << endl;

        if (b < c) {
            cout << "중첩 IF" << endl;
        }
    }

    if (a < b && b < c) {
        cout << "And 연산 IF" << endl;
    }
}

void StatementFor() {
    // integer, iterate(iterable) : 반복하다
    for (int i = 0; i < 10; i++) {
        cout << i;
    }

    cout << endl;

    int StepSum = 0;
    for (int i = 1; i <= 10; i++) {
        StepSum = StepSum + i;

        cout << StepSum << " : ";
    }

    cout << endl;

    int StepSum2 = 0;
    for (int i = 1; i <= 10; i += 2) {
        StepSum2 = StepSum2 + i;

        cout << StepSum2 << " : ";
    }

    cout << endl;

    for (int i = 1; i <= 9; i++) {
        cout << 2 * i << " : ";
    }

    cout << endl;

    for (int i = 2; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << i * j << " : ";
        }
        cout << endl;
    }
}

void StatementWhile() {
    int LoopNumber = 0;
    while (LoopNumber <= 10) {
        cout << LoopNumber << " : ";
        LoopNumber++;
    }

    cout << endl;

    int IdNumber = 123456;
    int InputId = 0;

    while (true) {

        cout << "로그인";
        cin >> InputId;

        if (InputId == IdNumber) {
            cout << "로그인 성공" << endl;
            break;
        }
        else {
            cout << "다시 입력해주세요." << endl;
        }
    }
}

int GuGuDan(int Dan) {
    int result = 0;

    for (int i = 1; i <= 9; i++) {
        result += Dan * i;
    }

    return result;
}

// 전역 변수(Global Scope)
int GlobalValue = 10;

void VarScope(int Number) {
    int FunctionValue = 20;

    if (true) {
        int BlockValue = 30;

        cout << "전역변수값 : " << GlobalValue << endl;
        cout << "함수지역변수값 : " << FunctionValue << endl;
        cout << "블록지역변수값 : " << BlockValue << endl;
        cout << "파라미터 값 : " << Number << endl;
    }

    cout << "전역변수값 : " << GlobalValue << endl;
    cout << "함수지역변수값 : " << FunctionValue << endl;
    // cout << "블록지역변수값 : " << BlockValue << endl;
    cout << "파라미터 값 : " << Number << endl;
}