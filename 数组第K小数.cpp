// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include"stdafx.h"
#include <iostream>
#include<string>
#include<vector>
using namespace std;

void Sort(vector<int>&arr) {
	for (int i = 0; i < arr.size()-1; i++){	
		for (int i = 0; i < arr.size()-1; i++)
	    {
		if (arr[i] > arr[i + 1]) {
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	}
}
int main() {
	int n, k;
	cin >> n>> k;
	vector<int>arr(n);
//	vector<int>small(k);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	Sort(arr);
	
	cout << arr[k-1];

/*	for (int j = 0; j < k; j++)
	{
		small[j] = arr[j];   //初始化
	}
	for (int j = 0; j < k; j++) {
		for (int i = 0; i < n; i++)
		{
			if (j == 0) { if (small[j] > arr[i]) small[j] = arr[i]; }
			else
			{
				if ((arr[i] > small[j - 1]) && (arr[i] < small[j] )) small[j] = arr[i];
			}
		}
	}
	cout << small[k-1];
*/	
	return 0;
}




