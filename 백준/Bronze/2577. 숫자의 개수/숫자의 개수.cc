#include <iostream>
#include <string>

using namespace std;

// 백준 2577
// 세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.

// 예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고, 계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.

int main()
{
    int sum = 1;

    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;

        sum *= x;
    }

    string sum_s = to_string(sum); // int를 string으으로 변경
    int num[10] = {0};

    for (int i = 0; i < sum_s.size(); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            string ch = to_string(j);
            if (ch[0] == sum_s[i]) // string 비교
            {
                num[j]++;
            }
        }
    }

    for (int i = 0; i < 10; i++)
        cout << num[i] << endl;

    return 0;
}