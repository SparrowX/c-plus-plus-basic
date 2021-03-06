//

#include"stdafx.h"

#include <iostream>
#include <stdexcept>
#include <cmath>
#include<iomanip>

using namespace std;



/*完善此函数*/
double calArea(double a, double b, double c) throw (invalid_argument)
{
	if (a <= 0 || b <= 0 || c <= 0) {
		throw invalid_argument("The input is illegal");
	}
	if (a + b <= c || a + c <= b || b + c <= a) {
		throw invalid_argument("The input is illegal");
	}
	if ( (a==b)|| (b==c) || (a==c) ) {
		double s = (a + b + c) / 2;
		return sqrt(s * (s - a) * (s - b) * (s - c));
	}
	else {
		throw invalid_argument("The input is illegal");
	}

}

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	try {
		double area = calArea(a, b, c);
		cout << area << endl;
	}
	catch (exception& e) {
		cout <<setiosflags(ios::fixed)<<setprecision(2)<<e.what() << endl;
	}

	return 0;
}




