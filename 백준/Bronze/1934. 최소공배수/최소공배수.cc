#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 백준 1934
// 두 자연수 A와 B에 대해서, A의 배수이면서 B의 배수인 자연수를 A와 B의 공배수라고 한다.
// 이런 공배수 중에서 가장 작은 수를 최소공배수라고 한다. 예를 들어, 6과 15의 공배수는 30, 60, 90등이 있으며, 최소 공배수는 30이다.

// 두 자연수 A와 B가 주어졌을 때, A와 B의 최소공배수를 구하는 프로그램을 작성하시오.

vector<int> CommonDivisor(int num) // 약수들
{
    int count = 2;
    vector<int> divisor;
    while (num > 1)
    {
        if (num % count == 0)
        {
            num = num / count;
            divisor.push_back(count);
        }
        else
            count++;
    }

    return divisor;
}

int LeastCommonMultiple(int num[2]) // 최소 공배수
{
    vector<vector<int>> CDs(2);
    for (int i = 0; i < 2; i++)
    {
        CDs[i] = CommonDivisor(num[i]);
    }

    vector<int> sameCD; // 공약수

    for (int i = 0; i < CDs[0].size(); i++)
    {
        for (int j = 0; j < CDs[1].size(); j++)
        {
            if (CDs[0][i] == CDs[1][j])
            {
                sameCD.push_back(CDs[0][i]);
                CDs[0].erase(CDs[0].begin() + i);
                i--;
                CDs[1].erase(CDs[1].begin() + j);
                j--;
            }
        }
    }

    int sum = 1;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < CDs[i].size(); j++)
        {
            sum *= CDs[i][j];
        }
    }
    for (int i = 0; i < sameCD.size(); i++)
    {
        sum *= sameCD[i];
    }

    return sum;
}

int main()
{
    int nums;
    cin >> nums;

    int num[2]; // 두개의 수
    vector<int> LCM;
    for (int i = 0; i < nums; i++)
    {
        cin >> num[0] >> num[1];
        LCM.push_back(LeastCommonMultiple(num));
    }

    for (int i = 0; i < LCM.size(); i++)
        cout << LCM[i] << endl;

    return 0;
}