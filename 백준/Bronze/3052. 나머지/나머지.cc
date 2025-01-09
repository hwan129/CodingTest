#include <iostream>
#include <algorithm>

using namespace std;

// 백준 3052
// 두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다.

// 수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.

int main()
{
    int nums[10];

    for (int i = 0; i < 10; i++)
    {
        int x;
        cin >> x;

        nums[i] = x % 42;
    }

    sort(nums, nums + 10); // 배열 sort. vector면 sort(nums.begin(), nums.end())

    int a = -1, answer = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a != nums[i])
        {
            answer++;
            a = nums[i];
        }
    }

    cout << answer;

    return 0;
}