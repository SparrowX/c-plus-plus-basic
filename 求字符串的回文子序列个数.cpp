// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include"stdafx.h"

#include <iostream>
#include<string>
using namespace std;

bool reverseString(string s) {
	int i=0,n = s.size();
	for (int i = 0; i < n/2; i++)
	{
		if (s[i] != s[n - 1 - i]) return 0;
	}
	return 1;
}
int main() {
	int count = 0;
	string s1;
	cin >> s1;
	if (reverseString(s1)) count++;
	return 0;
	

}



