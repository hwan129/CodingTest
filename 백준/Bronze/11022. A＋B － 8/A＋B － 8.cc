#include <iostream>
#include <vector>

using namespace std;

// 백준 11022

// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

int main()
{
    int num;

    cin >> num;
    vector<int> a(num), b(num);
    for (int i = 0; i < num; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < num; i++)
    {
        printf("Case #%d: %d + %d = %d\n", i + 1, a[i], b[i], a[i] + b[i]);
    }

    return 0;
}