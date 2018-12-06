//#include <iostream>
//#include <string>
//using namespace std;
//void Reverse(char* s, int len)
//{
//	int start = 0;
//	int end = len - 1;
//	while (start < end)
//	{
//		swap(s[start], s[end]);
//		start++;
//		end--;
//	}
//}
//string reverseWords(string s) {
//	int start = 0;
//	int end = 0;
//	while (start < s.size())
//	{
//		int pos = s.find(' ', start);
//		if (pos < 0)
//		{
//			Reverse((char*)s.c_str() + start, s.size() - start);
//			break;
//		}
//		Reverse((char*)s.c_str() + start, pos-start);
//		start = pos + 1;
//	}
//	return s;
//}
//int main() {
//	//std::cout << "Hello World!\n";class Solution {
//	string s = "i have a dream";
//	string ret = reverseWords(s);
//	cout << ret.c_str() << endl;
//}