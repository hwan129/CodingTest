#include <iostream>

using namespace std;

// 백준 2004

// nCm 의 끝자리 0의 개수를 출력하는 프로그램을 작성하시오.

// 25C12 =

int zeroNum(long long num, long long fac)
{
    int count = 0;

    for (long long i = fac; i <= num; i *= fac) // 5의 제곱으로 구하기
    {
        count += num / i;
    }

    return count;
}

// 조합에서 뒤의 0개수를 구하기 위해서는 2와 5 두 제곱근으로 나누어 계산을 해야한다.

int main()
{
    long long n, m;

    cin >> n >> m;

    cout << min(zeroNum(n, 2) - zeroNum(m, 2) - zeroNum(n - m, 2), zeroNum(n, 5) - zeroNum(m, 5) - zeroNum(n - m, 5));

    return 0;
}