#include <iostream>

using namespace std;

// 백준 2953
// "나는 요리사다"는 다섯 참가자들이 서로의 요리 실력을 뽐내는 티비 프로이다. 각 참가자는 자신있는 음식을 하나씩 만들어오고, 서로 다른 사람의 음식을 점수로 평가해준다. 점수는 1점부터 5점까지 있다.

// 각 참가자가 얻은 점수는 다른 사람이 평가해 준 점수의 합이다. 이 쇼의 우승자는 가장 많은 점수를 얻은 사람이 된다.

// 각 참가자가 얻은 평가 점수가 주어졌을 때, 우승자와 그의 점수를 구하는 프로그램을 작성하시오.

int main()
{
    int sum[5] = {0};

    for (int i = 0; i < 5; i++) // 사람
        for (int j = 0; j < 4; j++)
        { // 점수
            int x;
            cin >> x;
            sum[i] += x;
        }

    int max = 0, index;
    for (int i = 0; i < 5; i++)
    {
        if (max < sum[i])
        {
            max = sum[i];
            index = i;
        }
    }

    cout << index + 1 << " " << max;

    return 0;
}