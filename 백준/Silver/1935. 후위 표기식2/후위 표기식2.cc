#include <iostream>
#include <vector>

using namespace std;

// 백준 1935

// 첫째 줄에 피연산자의 개수(1 ≤ N ≤ 26) 가 주어진다.
// 그리고 둘째 줄에는 후위 표기식이 주어진다.
// (여기서 피연산자는 A~Z의 영대문자이며, A부터 순서대로 N개의 영대문자만이 사용되며, 길이는 100을 넘지 않는다)
// 그리고 셋째 줄부터 N+2번째 줄까지는 각 피연산자에 대응하는 값이 주어진다.
// 3번째 줄에는 A에 해당하는 값, 4번째 줄에는 B에 해당하는값 , 5번째 줄에는 C ...이 주어진다,
// 그리고 피연산자에 대응 하는 값은 100보다 작거나 같은 자연수이다.

// 후위 표기식을 앞에서부터 계산했을 때, 식의 결과와 중간 결과가 -20억보다 크거나 같고, 20억보다 작거나 같은 입력만 주어진다.

int main()
{
    int num;
    string str;

    cin >> num;
    cin >> str; // 식

    vector<double> operand(num);
    for (int i = 0; i < num; i++) // 숫자 가져오기
    {
        cin >> operand[i];
    }

    vector<double> stack; // 스택택으로 사용
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') // 계산 해야할 때
        {
            double b = stack.back();
            stack.pop_back();

            double a = stack.back();
            stack.pop_back();

            switch (str[i]) // 스위치 이용
            {
            case '+':
                stack.push_back(a + b);
                break;
            case '-':
                stack.push_back(a - b);
                break;
            case '*':
                stack.push_back(a * b);
                break;
            case '/':
                stack.push_back(a / b);
                break;
            }
            continue;
        }
        stack.push_back(operand[str[i] - 'A']); // 숫자로 바꿔서 넣기
    }

    printf("%.2f", stack.back());

    return 0;
}