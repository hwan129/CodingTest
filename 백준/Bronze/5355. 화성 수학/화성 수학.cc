#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

// 백준 5355
// 겨울 방학에 달에 다녀온 상근이는 여름 방학 때는 화성에 갔다 올 예정이다.
// (3996번) 화성에서는 지구와는 조금 다른 연산자 @, %, #을 사용한다. @는 3을 곱하고, %는 5를 더하며, #는 7을 빼는 연산자이다.
// 따라서, 화성에서는 수학 식의 가장 앞에 수가 하나 있고, 그 다음에는 연산자가 있다.

int main()
{
    int nums;
    cin >> nums;
    cin.ignore();

    vector<double> answer;

    for (int i = 0; i < nums; i++)
    {
        string line;
        getline(cin, line);

        stringstream ss(line);

        double result;
        ss >> result; // 숫자 가져오기

        string op;
        while (ss >> op)
        { // 연산자
            if (op == "@")
            {
                result *= 3;
            }
            else if (op == "%")
            {
                result += 5;
            }
            else if (op == "#")
            {
                result -= 7;
            }
        }
        answer.push_back(result);
    }

    for (int i = 0; i < answer.size(); i++)
        printf("%.2lf\n", answer[i]);

    return 0;
}