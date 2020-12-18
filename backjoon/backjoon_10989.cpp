#include <iostream>
#include <vector>

using namespace std;

int num_arr[10001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int number=0;
	cin >> number;

	for (int i = 0; i < number; i++)
	{
		int arr;
		cin >> arr;
		num_arr[arr]++;
	}

	for (int i = 1; i <= 10000; i++)
	{
		for(int j=0 ; j<num_arr[i]; j++)
		{
			cout << i << "\n";
		}
	}
}

//N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.