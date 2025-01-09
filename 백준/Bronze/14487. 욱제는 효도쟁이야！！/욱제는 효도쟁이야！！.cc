#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 백준 4487
// 욱제는 KOI를 망친 기념으로 부모님과 함께 코드게이트 섬으로 여행을 떠났다.
// 코드게이트 섬에는 오징어로 유명한 준오마을(심술쟁이 해커 임준오 아님), 밥으로 유명한 재훈마을, 영중마을 등 많은 관광지들이 있다.
// 욱제는 부모님을 모시고 코드게이트 섬을 관광하려고 한다.

// 코드게이트 섬은 해안가를 따라 원형으로 마을들이 위치해있다.
// 임의의 A마을에서 임의의 B마을로 가기 위해서는 왼쪽 또는 오른쪽 도로를 통해 해안가를 따라 섬을 돌아야 한다.
// 섬을 빙빙 도는 원형의 길 외에 다른 길은 존재하지 않는다.

int main()
{
    int num;
    cin >> num;

    vector<int> cost(num);

    for (int i = 0; i < num; i++)
        cin >> cost[i];

    sort(cost.begin(), cost.end());

    int sum = 0;
    for (int i = 0; i < cost.size() - 1; i++)
        sum += cost[i];

    cout << sum;

    return 0;
}