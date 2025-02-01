#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// 백준 17087

// 수빈이는 동생 N명과 숨바꼭질을 하고 있다. 수빈이는 현재 점 S에 있고, 동생은 A1, A2, ..., AN에 있다.

// 수빈이는 걸어서 이동을 할 수 있다. 수빈이의 위치가 X일때 걷는다면 1초 후에 X+D나 X-D로 이동할 수 있다. 수빈이의 위치가 동생이 있는 위치와 같으면, 동생을 찾았다고 한다.

// 모든 동생을 찾기위해 D의 값을 정하려고 한다. 가능한 D의 최댓값을 구해보자.

long long gcd(long long a, long long b)
// 유클리드 호제법.
// b가 0이 될 때까지 a를 b로 나눈 나머지로 a를 대체하고
// b를 나머지로 대체하는 과정을 반복
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int N, S; // 동생 N명, 수빈 위치 S

    cin >> N >> S;

    vector<long long> people;

    for (int i = 0; i < N; i++) // 수빈 위치와 동생들 위치의 차이를 절댓값으로
    {
        int x;
        cin >> x;
        people.push_back(abs(x - S));
    }

    // 모든 차이의 최대공약수를 구함
    long long result = people[0];
    for (int i = 1; i < people.size(); i++)
    {
        result = gcd(result, people[i]);
    }

    cout << result;

    return 0;
}