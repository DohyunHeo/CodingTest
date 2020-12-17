#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct ball
{
	int index = 0;
	int color = 0;
	int size = 0;
	int score = 0;
};

bool operator<(ball a, ball b)
{
	if (a.size == b.size) { return a.color < b.color; }
	return a.size > b.size;
}
int main()
{
	int player = 0;
	int color = 0;
	int size = 0;
	int size_sum = 0;
	int equal_size[2001]{ 0 };
	cin >> player;
	ball p[200001];
	vector<int> color_sum(player + 1);
	vector<int> ans(player);

	for (int i = 0; i < player; i++)
	{
		cin >> color >> size;
		p[i].size = size;
		p[i].color = color;
		p[i].index = i;
		color_sum[p[i].color] += p[i].size;
		size_sum += p[i].size;
		equal_size[p[i].size]++;
	}
	sort(p, p+player+1);

	for (int i = 0; i < player; i++)
	{
		int low = lower_bound(p+i, p + player + 1, p[i]) -p;
		int up = upper_bound(p + i, p + player + 1, p[i]) -p;

		p[i].score = p[i].score + size_sum - color_sum[p[i].color];
		p[i].score = p[i].score - ((equal_size[p[i].size]-(up-low)) * p[i].size);
		equal_size[p[i].size]--;
		size_sum -= p[i].size;
		color_sum[p[i].color] -= p[i].size;
		ans[p[i].index] = p[i].score;
	}
	for (int i = 0; i < player; i++)
	{
		cout << ans[i] << "\n";
	}
}

//지훈이가 최근에 즐기는 컴퓨터 게임이 있다.이 게임은 여러 플레이어가 참여하며, 
//각 플레이어는 특정한 색과 크기를 가진 자기 공 하나를 조종하여 게임에 참여한다.
//각 플레이어의 목표는 자기 공보다 크기가 작고 색이 다른 공을 사로잡아 그 공의 크기만큼의 점수를 얻는 것이다.
//그리고 다른 공을 사로잡은 이후에도 본인의 공의 색과 크기는 변하지 않는다.