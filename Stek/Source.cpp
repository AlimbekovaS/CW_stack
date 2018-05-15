#include"library.h"
#include"stek.h"
#include"stek.cpp"

int main()
{
	int a[5] = { 6,3,4,8,1 };

	Stack<int> s(a,3);
	s.push(3);
	s.push(5);
	
	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}

	/*cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	cout << s.empty() << endl;*/
	system("pause");
}