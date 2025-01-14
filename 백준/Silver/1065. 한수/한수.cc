#include <iostream>
#include <string>

// 백준 1065
// 어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다.
// 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다.
// N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오.

// 210 -> 1 ~ 99, 111, 123, 135, 147, 159, 210
using namespace std;

int main()
{
    int num, count = 0;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        string str_num = to_string(i);
        bool TF = true;

        if (str_num.size() > 2)
            for (int j = 1; j < str_num.length() - 1; j++)
            {
                int first = str_num[j - 1], second = str_num[j], third = str_num[j + 1];
                if (first - second != second - third)
                {
                    TF = false;
                    break;
                }
            }
        if (TF)
            count++;
    }

    cout << count;

    return 0;
}