#include <iostream>
#include <vector>

using namespace std;

// 백준 2010
// 선영이의 집에는 플러그를 꽂을 수 있는 콘센트가 하나밖에 없다. 선영이는 많은 컴퓨터를 가지고 있는데, 컴퓨터의 전원 문제는 어떻게 해결하는 것일까?

// 하나의 콘센트가 있고, N개의 멀티탭이 있다. 각 멀티탭은 몇 개의 콘센트로 이루어져 있다고 한다. 최대 몇 대의 컴퓨터를 전원에 연결할 수 있을까?

int main()
{
    int taps;

    cin >> taps;

    int sum = 0;

    for (int i = 0; i < taps; i++)
    {
        int x;
        cin >> x;

        sum += x;
    }

    cout << sum - taps + 1;

    return 0;
}