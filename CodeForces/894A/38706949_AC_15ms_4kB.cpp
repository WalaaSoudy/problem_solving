
#include <iostream>
using namespace std;
 
int main()
{
	string s;
	cin >> s;
	int Q=0, QA=0, res = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i]=='Q')
		{
			res += QA;
			Q++;
		}
		else if (s[i] == 'A')
			QA+=Q;
	}
	cout << res;
}