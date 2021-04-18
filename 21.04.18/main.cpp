
#include <iostream>
#include <time.h>

// enum : 열거형
// 자료형 CHARACTER_MOTION type = IDLE; (0)
//enum CHARACTER_MOTION
//{
//    IDLE = 0,
//    MOVE,
//    JUMP,
//    ATTACK,
//    HIT,
//    DEATH
//
//    // 2배수 씩 찍는 법
//};


int main()
{
#pragma region 스타일 가이드

    //삼항 연산자 (또는 ? 연산자)
    //bool isResult;
    //if (100 > 0) isResult = true;
    //else isResult = false;
    //항상 왼쪽이 조건부 true (c언어)
    //bool isResult = (100 > 0) ? true : false;

    //멤버 변수는 m_(변수형.ToUpper()) > 앞 글자 대문자) ex : int m_Number;
    //글로벌 변수는 g_(변수형.ToUpper()) > 앞 글자 대문자) ex : int g_value;
    //Function 은 자료형 대문자+소문자+ 단어 추가시 앞 대문자 > void Initialize() {}
    //void SetNumber() {}
    //bool isResult > 조건 변수는 접두 is(변수형)
    //대표적인 공식 문저는 c++ google style

    //쉬운 숙제
    //1. 헝가리안 표기법, 스네이크 표기법, 허스칼 표기법 알아오고 쌤한테 설명할 수 있도록 보고 오기
    //2. OOP > 객체지향에 대해서 간단히 알아오기 (ex : 캡슐화, 종, 상속성, 등등)
    //3. DOD > 데이터 지향 힐끔 보기
    //! unity DOT 아닙니다
#pragma endregion

    //CHARACTER_MOTION type = IDLE; // (int)
    //int code = 0;
    //std::cin >> code;

    ////명시적 형변환 ?  개발자가 직접 표기하여 해당 형식을 표기한 형식으로 바꾸는 변환법
    //type = (CHARACTER_MOTION)code;

    //// 묵시적 형변환 (암묵적 형변황) 컴파일러 (프로그램) 이 해당 형식을 추정하여 변경하는 변환법
    //float data = code;
    //
    //switch (type)
    //{
    //case IDLE:
    //    break;
    //case MOVE:
    //    break;
    //case JUMP:
    //    break;
    //case ATTACK:
    //    break;
    //case HIT:
    //    break;
    //case DEATH:
    //    break;
    //default:
    //}

    //빙고 만들기

    srand(time(NULL));
    int bingo[25];

    for (int i = 0; i < 5; ++i)
    {
        int value = rand() % 25 + 1;

        for (int j = 0; j < 5; ++j)
        {
                value = rand() % 25 + 1;
                std::cout << "[" << value << "]  ";

                if (value == bingo[j])
                {
                    value = rand() % 25 + 1;
                    j = -1;
                }

        }
        std::cout << "" << std::endl;
        bingo[i] = value;
    }
    return 0;
}