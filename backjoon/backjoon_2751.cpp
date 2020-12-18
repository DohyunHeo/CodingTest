#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int number = 0;
	cin >> number;

	vector<int> num(number);
	for (int i = 0; i < number; i++)
	{
		cin >> num[i];
	}
	sort(num.begin(), num.end());
	for (int i = 0; i < number; i++)
	{
		cout << num[i] << "\n";
	}
}
//N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
//첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 
//이 수는 절댓값이 1,000,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.