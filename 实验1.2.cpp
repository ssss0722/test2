#include<iostream>
using namespace std;
int main()
{
	//����Բ���ʳ���
	const double p = 3.14;
	//�������
	double r, h,v;
	//��ʾ�������������ֵ
	cout << "������Բ׶�ĵ���뾶�͸ߣ�" << endl;
	cin >> r >> h;
	//�������
	v = p * r * r * h/3;
	//���
	cout << "���Բ׶������ǣ�" << v << endl;
	return 0;
}