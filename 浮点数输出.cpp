//

#include"stdafx.h"

#include <iostream>
#include<string>
using namespace std;


int main() {
	int m, n;
	cin >> m >> n;
	string x, y;
	getchar();   //防止\n被getline读入
	getline(cin, x, '.');
	cin >> y;
	if (m == 0 && n == 0)
	{
		cout << 0;
		return 0;
	}
	if (x.size() >= m) {
		for (int i = 0; i < m; i++)
			cout << x[i];
	}
	if (x.size() < m)
	{
		for (int i = 0; i < (m - x.size()); i++)
			cout << 0;
		cout << x;

	}
	if (n != 0)
		cout << '.';

	for (int i = 0; i < n; i++)
	{
		if (i < y.size())
			cout << y[i];
		else
			cout << 0;
	}
	cout << endl;
	return 0;
}





