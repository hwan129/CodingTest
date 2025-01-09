#include <iostream>

using namespace std;

// 백준 10757
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

int main()
{
    string a, b;
    cin >> a >> b;

    while (a.length() < b.length())
        a = '0' + a;
    while (b.length() < a.length())
        b = '0' + b;

    int carry = 0;
    string answer = "";
    for (int i = 0; i < a.length(); i++)
    {
        int sum = a[a.length() - i - 1] - '0' + b[b.length() - i - 1] - '0' + carry;

        if (sum > 9)
        {
            carry = sum / 10;
            sum = sum % 10;
        }
        else
            carry = 0;

        answer += sum + '0';
    }

    if (carry > 0)
        answer += '1';

    for (int i = 0; i < answer.length(); i++)
    {
        cout << answer[answer.length() - i - 1];
    }

    return 0;
}