#include <iostream>
#include <string>

using namespace std;

// 백준 1212

// 8진수가 주어졌을 때, 2진수로 변환하는 프로그램을 작성하시오.

int main()
{
    string num8;
    cin >> num8;

    string num2;
    for (int i = 0; i < num8.length(); i++)
    {
        int a = num8[i] - '0'; // 정수로 치환
        string str = "";
        // 4로 나눠진다 : 100, 4로 나누면 나머지가 있다 : 010, 2로 나누면 나머지가 있다 001
        if (a / 4 == 0)
        {
            str += '0';
        }
        else
        {
            str += '1';
            a -= 4;
        }
        if (a / 2 == 0)
        {
            str += '0';
        }
        else
        {
            str += '1';
            a -= 2;
        }
        if (a % 2 == 0 || a == 0)
        {
            str += '0';
        }
        else
        {
            str += '1';
        }
        // cout << str << " ";
        num2 += str;
    }
    // 앞의 불필요한 0 제거
    while (num2.length() > 1 && num2[0] == '0')
    {
        num2.erase(0, 1);
    }

    cout << num2;

    return 0;
}