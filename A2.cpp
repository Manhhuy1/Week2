#include <iostream>
using namespace std;
int main()
{
	int read,k;
	cin >> read;
	k = read;
	for (int i = 1;k >= 3;i++)
	 k /=3;
	cout << k << endl;
	k = read;
	while (true)
	{
		k /= 3;
		if (k < 3) break;
	}
	cout << k << endl;
	k = read;
	while (k >= 3)
	{
		k /= 3;
	}
	cout << k << endl;
	k = read;
	while (true)
	{
		k /= 3;
		if (k < 3) break;
	}
	cout << k << endl;
	k = read;
	while (true)
	{
		k /= 3;
		if (k >= 3) continue;else break;
	}
	cout << k;
	return 0;
}
