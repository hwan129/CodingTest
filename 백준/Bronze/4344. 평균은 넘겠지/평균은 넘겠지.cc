#include <iostream>
#include <vector>

using namespace std;

// 백준 4344
// 첫째 줄에는 테스트 케이스의 개수 C가 주어진다.
// 둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
// 각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다. 정답과 출력값의 절대/상대 오차는 10-3이하이면 정답이다.

int main()
{
    int num;
    vector<double> rate;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int stu, sum = 0;
        double count = 0;

        vector<int> score;
        cin >> stu;

        for (int j = 0; j < stu; j++)
        {
            int x;
            cin >> x;

            score.push_back(x);
            sum += x;
        }

        double avg = sum / stu;
        for (int j = 0; j < stu; j++)
        {
            if (score[j] > avg)
            {
                count++;
            }
        }

        rate.push_back(count * 100 / stu);
    }

    for (int i = 0; i < num; i++)
    {
        printf("%.3lf%%\n", rate[i]);
    }

    return 0;
}