#include <iostream>

using namespace std;

// 백준 8393

// n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

int main()
{
    int num;

    cin >> num;

    cout << num * (num + 1) / 2;

    return 0;
}