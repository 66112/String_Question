//#include <iostream>
//#include <string>
//using namespace std;
//
//string multiply(string num1, string num2) {
//	int l1 = num1.size(), l2 = num2.size();
//	string res(l1 + l2, '0');
//	if (l1 == 0 || l2 == 0)
//		return "";
//	for (int i = l1 - 1; i >= 0; i--){
//		int add = 0;
//		for (int j = l2 - 1; j >= 0; j--){
//			int mul = (num1[i] - '0')*(num2[j] - '0');
//			int sum = res[i + j + 1] + add + mul % 10 - '0';
//			res[i + j + 1] = '0' + sum % 10;
//			add = mul / 10 + sum / 10;
//		}
//		res[i] += add;
//	}
//	for (int i = 0; i < l1 + l2; i++)
//	if (res[i] != '0')
//		return res.substr(i);
//	return "0";
//}
//
//string multiply(string& num1, string& num2)
//{
//	int len1 = num1.size();
//	int len2 = num2.size();
//	if (len1 == 0 || len2 == 0){
//		return "";
//	}
//	string ret(len1 + len2, '0');
//	for (int i = len1 - 1; i >= 0; i--){
//		int add = 0;           //��λ
//		for (int j = len2 - 1; j >= 0; j--){
//			int reslut = (num1[i] - '0')*(num2[j] - '0');   //��˽��
//			int sum = ret[i + j + 1] - '0' + reslut % 10 + add;  //ԭλ+��λ+��λ
//			ret[i + j + 1] = sum % 10 + '0';        //���ø�λ
//			add = reslut / 10 + sum / 10;           //���ý�λ
//		}
//		ret[i] += add;                              //����ǰһλ
//	}
//	for (int i = 0; i < len1 + len2; i++){
//		if (ret[i] != 0){
//			return ret.substr(i);    //��iλ�ø����ַ���
//		}
//	}
//	return "0";
//}
//int main()
//{
//    string s1("99");
//	string s2("32");
//	string ret = multiply(s1, s2);
//	cout << ret.c_str() << endl;
//	return 0;
//}