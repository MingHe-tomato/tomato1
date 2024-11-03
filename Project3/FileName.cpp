#include<iostream>
using namespace std;
int main()
{
	const int MaxN = 100, CourseN = 5;
	int n, score[MaxN][CourseN + 1] = { 0 };
	for (n = 0; n < MaxN; n++)
	{
		for (int j = 0; j < CourseN; j++)
			cin >> score[n][j];
		if (score[n][0] < 0)break;
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<CourseN;j++)
			score[i][CourseN]=score[i][CourseN]
}