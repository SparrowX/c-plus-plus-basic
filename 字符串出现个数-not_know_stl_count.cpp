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
	string str1, str2;
	cin >> str1;
	cin >> str2;
	int l1 = str1.length();
	int l2 = str2.length();
	int count = 0;
	for (int i = 0; i < l1; i++)
	{
		if (str1[i] == str2[0]) {
			int k = i ;
			int j = 0;
			while(str1[++k] == str2[++j]){
				if (j == l2 - 1)  //到末尾了，相等
				{
					count++;
					break;
				}
			}
		}
	}
	cout << count << endl;
	return 0;

}





