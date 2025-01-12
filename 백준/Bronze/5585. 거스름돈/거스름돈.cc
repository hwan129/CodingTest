#include <iostream>

using namespace std;

int main()
{
    int money;
    cin >> money;

    int require = 1000 - money;
    int coin[6] = {500,
                   100,
                   50,
                   10,
                   5,
                   1};
    int count = 0; // 잔돈 개수

    for (int i = 0; i < 6; i++)
        while (require / coin[i] > 0)
        {
            require -= coin[i];
            count++;
        }

    cout << count;

    return 0;
}