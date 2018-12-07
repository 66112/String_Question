//#include <iostream>
//#include <list>
//
//using namespace std;
//int main()
//{
//	class Solution {
//	public:
//		static void Reverse(char* s, int len)
//		{
//			int start = 0;
//			int end = len - 1;
//			while (start < end)
//			{
//				swap(s[start], s[end]);
//				start++;
//				end--;
//			}
//		}
//		static string reverseStr(string s, int k) {
//			size_t sz = s.size();
//			int a = 0;
//			while (a < sz){
//				Reverse((char*)s.c_str() + a, k);        
//				a += 2 * k;                    
//				if ((sz - a) < k)
//					break;
//			}
//			if (sz - a < k)
//				Reverse((char*)s.c_str()+a, sz - a);
//			return s;
//		}
//	};
//	string s1("abcdefgh");
//	string ret = Solution::reverseStr(s1, 3);      //·­×ªÇ°3¸ö
//	cout << ret.c_str() << endl;
//	return 0;
//}