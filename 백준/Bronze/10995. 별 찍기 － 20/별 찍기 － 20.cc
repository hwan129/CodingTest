#include <iostream>

using namespace std;

// 백준 10995

int main()
{
    int num;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i % 2 != 0)
                cout << " " << "*";
            else
                cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}