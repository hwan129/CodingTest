#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 백준 1302

// 김형택은 탑문고의 직원이다.
// 김형택은 계산대에서 계산을 하는 직원이다.
// 김형택은 그날 근무가 끝난 후에, 오늘 판매한 책의 제목을 보면서 가장 많이 팔린 책의 제목을 칠판에 써놓는 일도 같이 하고 있다.

// 오늘 하루 동안 팔린 책의 제목이 입력으로 들어왔을 때, 가장 많이 팔린 책의 제목을 출력하는 프로그램을 작성하시오.

int main()
{
    int num;
    cin >> num;

    vector<string> books;

    for (int i = 0; i < num; i++)
    {
        string x;
        cin >> x;
        books.push_back(x);
    }

    vector<int> count(num, 0);
    int bookNum = 0; // 책 번호
    sort(books.begin(), books.end());

    for (int i = 1; i < books.size(); i++)
    {
        // cout << books[i] << " ";
        if (books[i - 1] != books[i]) // 다른 애가 나오는 경우
        {
            bookNum++;
        }
        else
        {
            count[bookNum]++;
            books.erase(books.begin() + i);
            i--;
        }
    }

    int max = count[0], maxIndex = 0;
    for (int i = 0; i < count.size(); i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            maxIndex = i;
        }
    }

    cout << books[maxIndex];

    return 0;
}