#include <iostream>

using namespace std;

// 백준 25314

// 혜아는 책에 있는 정수 자료형과 관련된 내용을 기억해 냈다.책에는 long int는
// $4$바이트 정수까지 저장할 수 있는 정수 자료형이고 long long int는
// $8$바이트 정수까지 저장할 수 있는 정수 자료형이라고 적혀 있었다. 혜아는 이런 생각이 들었다. “int 앞에 long을 하나씩 더 붙일 때마다
// $4$바이트씩 저장할 수 있는 공간이 늘어나는 걸까? 분명 long long long int는
// $12$바이트, long long long long int는
// $16$바이트까지 저장할 수 있는 정수 자료형일 거야!”

int main()
{
    int num;

    cin >> num;

    for (int i = 0; i < num / 4; i++)
    {
        cout << "long ";
    }
    cout << "int";

    return 0;
}