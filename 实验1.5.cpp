#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//�������f,c
	double f, c;
	//��ʾ����һ�������¶�
	cout << "������һ�������¶ȣ�" << endl;
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << "ת��Ϊ�����¶��ǣ�" <<fixed<<setprecision(2)<<c<< endl;
	return 0;
}