//

#include"stdafx.h"

#include <iostream>
#include<map>
#include<string>
using namespace std;

int main() {
	string s;
	map<string, int> my_map;
	while (1) {
		cin >> s;
		if (s[0]=='Q' && s[1]=='U') break;
		cout << my_map[s]++<<endl;
	}

	return 0;
}





