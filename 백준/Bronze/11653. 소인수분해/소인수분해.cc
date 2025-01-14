#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 백준 11653

// 정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.

int main()
{
    int num;
    cin >> num;

    vector<int> factor;
    int i = 2;

    while (num != 1)
    {
        if (num % i == 0)
        {
            num = num / i;
            factor.push_back(i);
            i = 1;
        }
        i++;
    }

    sort(factor.begin(), factor.end());
    for (int i = 0; i < factor.size(); i++)
        cout << factor[i] << endl;

    return 0;
}