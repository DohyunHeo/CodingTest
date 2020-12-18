#include <iostream>

using namespace std;
int main()
{
	int test_case;
	int student_number;
	int student_score[1000];
	cin >> test_case;

	for (int i=0; i<test_case; i++)
	{
		int student_sum = 0;
		double score_avg = 0;
		int count = 0;
		cin >> student_number;
		for (int j = 0; j < student_number; j++)
		{
			cin >> student_score[j];
			student_sum += student_score[j];
		}
		score_avg = student_sum / student_number;
		for (int k = 0; k < student_number; k++)
		{
			if (student_score[k] > score_avg)
				count++;
		}
		cout << fixed;
		cout.precision(3);
		cout << (float)count / student_number*100 << "%\n";
	}

}
//대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.
//첫째 줄에는 테스트 케이스의 개수 C가 주어진다.
//
//둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 
//이어서 N명의 점수가 주어진다.점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.