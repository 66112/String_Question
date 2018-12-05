#include <iostream>
#include <string>
using namespace std;

bool isNummberOrLetter(char c)
{
	if ((c >= '0'&& c <= '9') ||
		(c >= 'A'&& c <= 'Z') ||
		(c >= 'a'&& c <= 'z'))
	{
		return true;
	}
	return false;
}
bool isPalindrome(string s) {
	if (s.empty())
		return true;
	int begin = 0;
	int end = s.size() - 1;
	while (begin < end)
	{
		while (begin < end)
		{
			if (isNummberOrLetter(s[begin]))
				break;
			++begin;
		}
		while (begin < end)
		{
			if (isNummberOrLetter(s[end]))
				break;
			--end;
		}
		if (begin < end)
		{
			if ((s[begin] + 32 - 'a') % 32 != (s[end] + 32 - 'a') % 32)
				return false;
			++begin;
			--end;
		}
	}
	return true;
}
int main()
{
	string s("race a car");
	cout << isPalindrome(s) << endl;
	return 0;
}