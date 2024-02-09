#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	float Max = -1000.f;
	float sum = 0.f;
	float* score = (float*)malloc(sizeof(float) * N);
	float average = 0.f;

	for (int i = 0; i < N; ++i)
	{
		cin >> score[i];
		if (score[i] > Max)
			Max = score[i];
	}
	for (int i = 0; i < N; ++i)
	{
		score[i] = score[i] / Max * 100;
		sum += score[i];
	}
	average = sum / (float)N;
	cout << average << endl;

	return 0;
}