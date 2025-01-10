#include <iostream>

using namespace std;

// 백준 1193

// 무한히 큰 배열에 다음과 같이 분수들이 적혀있다.

// 1/1	1/2	1/3	1/4	1/5	…
// 2/1	2/2	2/3	2/4	…	…
// 3/1	3/2	3/3	…	…	…
// 4/1	4/2	…	…	…	…
// 5/1	…	…	…	…	…
// …	…	…	…	…	…
// 이와 같이 나열된 분수들을 1/1 → 1/2 → 2/1 → 3/1 → 2/2 → … 과 같은 지그재그 순서로 차례대로 1번, 2번, 3번, 4번, 5번, … 분수라고 하자.

// X가 주어졌을 때, X번째 분수를 구하는 프로그램을 작성하시오.

// 순서 1 2. 3 4. 5 6 7. 8 9 10 11...
// 합   2 3  3 4  4 4 5  5 5  5  6...

int main()
{
    int num;

    cin >> num;

    int sum = 2;   // 분수 합
    int count = 2; // 합이 커질 타이밍. 2, 4, 7, 11

    for (int i = 0; i < num + 1; i++) // 합 구하기
    {
        if (i == count)
        {
            count += sum;
            sum++;
        }
    }

    int numerator = 0;     // 분자
    int denominator = sum; // 분모

    if (sum % 2 == 0)
    {
        numerator = sum;
        denominator = 0;

        for (int i = 0; i < num - count + sum; i++) // 합이 같은 부분에서 순서만큼 돌기
        {
            numerator--;
            denominator++;
        }
    }
    else
    {
        for (int i = 0; i < num - count + sum; i++) // 합이 같은 부분에서 순서만큼 돌기
        {
            numerator++;
            denominator--;
        }
    }

    cout << numerator << "/" << denominator;

    return 0;
}