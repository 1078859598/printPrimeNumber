#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cout << "100以内的素数为：" << endl;
	for (n = 2; n <= 100; n++)
	{
		for (m = 2; m <= n; m++)
			if (n%m == 0)
				break;
		if (m == n)
		{
			cout << n << endl;
		}
	}
	system("pause");
	return 0;

}