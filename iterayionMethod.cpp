/*TASK*/
/*To find solution of equation f(x) = (10 * g + sin(x-(10 * g / k)) / k= 0
(where g and k any numbers, start - begin of segment, end - end of segment, eps - precision) using iteration method*/
/*Знайти розв'язок рівняння f(x) = (10 * g + sin(x-(10 * g / k)) / k = 0
(де g і k будь-які цифри, start - початок відрізка, end - кінець відрізка, eps - точність) використовуючи ітераційний метод*/

#include <iostream>

using namespace std;

float func(float x, int g, int k) {
	return (10 * (float)g + sin(x - (10 * (float)g / (float)k))) / (float)k;
}

void iteration(float start, float end, int g, int k, float eps) {
	cout << "Itertation method" << endl;
	float x0 = (start + end) / 2;
	float x1;
	do
	{
		x1 = x0;
		x0 = func(x1, g, k);
		cout << "x: " << x0 << endl;
	} while (fabs(x0 - x1) > eps);
	cout << "x: " << x0 << endl;
}


int main()
{
	int g = 9;
	int k = 7;
	float start;
	float end;
	float eps = 0.01;
	cout << "Start = ";
	cin >> start;
	cout << "End = ";
	cin >> end;
	iteration(start, end, g, k, eps);
}