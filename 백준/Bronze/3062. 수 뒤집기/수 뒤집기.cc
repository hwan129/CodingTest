#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 백준 3062
// 수 124를 뒤집으면 421이 되고 이 두 수를 합하면 545가 된다. 124와 같이 원래 수와 뒤집은 수를 합한 수가 좌우 대칭이 되는지 테스트 하는 프로그램을 작성하시오.

int compare(string input)
{
    // string input; // 처음 받는 수

    string reverse(input.length(), 'a'); // input을 뒤집은 수. 사이즈 지정

    for (int i = 0; i < input.length(); i++)
    {
        reverse[input.length() - i - 1] = input[i];
    }

    // cout << reverse << endl;

    int carry = 0;
    string result(input.length(), 'a'); // input과 reverse를 합친 수 저장. 사이즈 지정
    for (int i = 0; i < input.length(); i++)
    {
        int sum = input[i] - '0' + reverse[i] - '0' + carry;
        carry = 0;
        if (sum / 10 > 0)
        {
            sum = sum % 10;
            carry++;
        }

        result[i] = sum + '0';
    }
    if (carry == 1)
    {
        result.resize(input.length() + 1, '1');
    }

    // cout << result;

    for (int i = 0; i < result.length(); i++)
    {
        if (result[i] != result[result.length() - 1 - i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}

int main()
{
    int num;
    cin >> num;

    vector<string> input(num);
    for (int i = 0; i < num; i++)
    {
        cin >> input[i];
    }

    for (int i = 0; i < num; i++)
    {
        compare(input[i]);
    }
}
