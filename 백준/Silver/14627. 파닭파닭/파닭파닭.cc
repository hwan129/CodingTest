#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canMake(long long length, const vector<long long>& gOnion, long long C) // 치킨을 만들 수 있는가?. length = mid
{
    long long count = 0;

    for (long long i = 0; i < gOnion.size(); i++) // 총 만들 수 있는 치킨 수 세기기
    {
        count += gOnion[i] / length;
    }

    return count >= C; // 요구하는 치킨 수와 만들수 있는 치킨 수 비교
}

int main()
{
    long long S, C; // 사온 파 개수, 주문 받은 파닭

    cin >> S >> C;
    vector<long long> gOnion(S);
    for (long long i = 0; i < S; i++)
    {
        cin >> gOnion[i];
    }

    long long left = 1, right = *max_element(gOnion.begin(), gOnion.end());
    long long maxLength = 0;

    while (left <= right)
    {
        long long mid = (left + right) / 2;

        if (canMake(mid, gOnion, C))
        {
            maxLength = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    long long totalOnion = 0;
    for (long long i = 0; i < gOnion.size(); i++)
    {
        totalOnion += gOnion[i];
    }

    long long usedOnion = maxLength * C;
    long long remainingOnion = totalOnion - usedOnion;

    cout << remainingOnion << endl;

    return 0;
}