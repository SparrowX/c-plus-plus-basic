//

#include"stdafx.h"

#include <iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<int>::iterator new_end;
	sort(a.begin(), a.end());
	new_end = unique(a.begin(), a.end());
	copy(a.begin(), new_end, ostream_iterator<int>(cout, "\n"));

}





