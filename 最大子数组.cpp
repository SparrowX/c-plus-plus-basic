// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include"stdafx.h"

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int thisSum, maxSum=a[0];
	for (int i = 0; i < n; i++)
	{	
		thisSum = a[i];
		for (int j = i+1; j < n; j++) {
			thisSum += a[j];
			if (thisSum > maxSum) maxSum = thisSum;
		}
	}
	cout << maxSum << endl;

}



