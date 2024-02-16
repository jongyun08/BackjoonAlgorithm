#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string subject;
	float grades;
	float grades_total = 0.f;
	string rating;
	float rating_total = 0.f;
	float average = 0.f;
	float major_rating_total = 0.f;
	for (int i = 0; i < 20; ++i)
	{
		cin >> subject >> grades >> rating;
		grades_total += grades;
		if (rating == "A+")
			major_rating_total += grades * 4.5f;
		else if (rating == "A0")
			major_rating_total += grades * 4.0f;
		else if (rating == "B+")
			major_rating_total += grades * 3.5f;
		else if (rating == "B0")
			major_rating_total += grades * 3.0f;
		else if (rating == "C+")
			major_rating_total += grades * 2.5f;
		else if (rating == "C0")
			major_rating_total += grades * 2.0f;
		else if (rating == "D+")
			major_rating_total += grades * 1.5f;
		else if (rating == "D0")
			major_rating_total += grades * 1.0f;
		else if (rating == "F")
			major_rating_total += grades * 0.f;
		else if (rating == "P")
		{
			grades_total -= grades;
		}
			
	}
	average = major_rating_total / grades_total;
	cout << average;
	return 0;
}