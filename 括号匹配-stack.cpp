//

#include"stdafx.h"


#include <iostream>
#include <string>
using namespace std;

template<class T, int MAX = 1000>
class Stack
{
private:
	T list[MAX + 1];
	int top;
public:
	Stack();
	void push(const T &item);//将item压栈
	T pop();//将栈顶元素弹出栈
	const T & peek() const;//访问栈顶元素
	bool isEmpty() const;//判断是否栈空
};
//请完成栈模板类的实现，并解决括号匹配问题

template<class T, int MAX>
Stack<T, MAX>::Stack() {
	top = -1;
}

template<class T, int MAX>
void Stack<T, MAX>::push(const T&item) {
	list[++top] = item;   //top指向的是栈顶元素（有元素）
}

template<class T, int MAX>
T Stack<T, MAX>::pop() {
	return list[top--];
}

template<class T, int MAX>
const T & Stack<T, MAX>::peek() const {
	return list[top];
}

template<class T, int MAX>
bool Stack<T,MAX>::isEmpty() const {
	if (top == -1) return 1;
	else return 0;
}

void Bracket_Match(string str) {
	Stack<char>s;
	int flag = 1;
	for (int i = 0; i < (int)str.size(); i++)   // push 并判断
	{
		if (str[i] == '(') {
			flag = 0;
			s.push(str[i]);
		}
		if (str[i] == ')') {
			if (s.peek() == '(') {
				s.pop();
				flag = 1;
			}
			else {
				cout << "No" << endl;
				return;
			}
		}
	}
	if (!s.isEmpty()) flag = 0;
/*		s.push(str[i]);
		if (str[i] == '(') flag = 0;
		if (str[i] == ')') {   //发现右括号后，开始判断
			flag = 0;  //当发现 ） 时， 默认没有左括号， 找到左括号之后再置 1
			while (!s.isEmpty()) {
				int temp = s.pop();
				if (temp == '(') {
					flag = 1;
					break;
				}
				
			}  
			if (flag == 0) {   //pop检查结束 ，没找到（ 
				cout << "No" << endl;   
				return;
			}
		}
		
	}
	*/
	flag == 1 ? cout << "Yes" << endl : cout << "No" << endl;
}
int main() {
//	while(1)
//	{string str1;
//	cin >> str1;
//	Bracket_Match(str1);}

	string str;
	cin >>str;
	Bracket_Match(str);
	

	return 0;
}





