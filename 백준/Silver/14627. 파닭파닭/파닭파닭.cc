#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 백준 14627

// 평소 요리에 관심이 많은 승균이는 치킨집을 개업하였다.
// 승균이네 치킨집은 파닭이 주메뉴다. 승균이는 가게를 오픈하기 전에 남부시장에 들러서 길이가 일정하지 않은 파를 여러 개 구매하였다.
// 승균이는 파닭의 일정한 맛을 유지하기 위해 각각의 파닭에 같은 양의 파를 넣는다.
// 또 파닭 맛은 파의 양에 따라 좌우된다고 생각하기 때문에 될 수 있는 한 파의 양을 최대한 많이 넣으려고 한다. (하지만 하나의 파닭에는 하나 이상의 파가 들어가면 안 된다.)
// 힘든 하루를 마치고 승균이는 파닭을 만들고 남은 파를 라면에 넣어 먹으려고 한다. 이때 라면에 넣을 파의 양을 구하는 프로그램을 작성하시오.
// 승균이네 치킨집 자는 정수만 표현되기 때문에 정수의 크기로만 자를 수 있다.

bool canMake(long long length, const vector<long long> &gOnion, long long C) // 치킨을 만들 수 있는가?. length = mid
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

    // 사이에서 가장 큰 요소. 반환 값을 int로 하기 위해 *를 붙임
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

    long long total = 0;
    for (int i = 0; i < gOnion.size(); i++)
    {
        total += gOnion[i];
    }

    cout << total - (maxLength * C);

    return 0;
}