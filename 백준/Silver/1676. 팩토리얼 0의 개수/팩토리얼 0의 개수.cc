#include <iostream>
#include <string>

using namespace std;

// 백준 1676

// N!에서 뒤에서부터 처음 0이 아닌 숫자가 나올 때까지 0의 개수를 구하는 프로그램을 작성하시오.

int main()
{
    int num;

    cin >> num;

    int count = 0;
    for (int i = 5; i <= num; i *= 5) // 5의 제곱으로 구하기
    {
        count += num / i;
    }

    cout << count;

    return 0;
}