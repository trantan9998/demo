# include<stdio.h>
# include <iostream>
# include <conio.h>
using namespace std;
class hinhchunhat
{
private:
	int chieurong;
	int chieudai;
public:
	void nhap() {
		cout << "\n nhap chieu dai va chieu rong :";
		cin >> chieudai >> chieurong;
	}
	void xuat() {
		cout << "\n chieu dai :" << chieudai;
		cout << "\n chieu rong :" << chieurong;
	}
	float dientich() {
		return chieudai * chieurong;
	}
	float chuvi() {
		return 2 * (chieudai + chieurong);
	}
};



int main() {
	hinhchunhat hcn;
	hcn.nhap();
	hcn.xuat();
	float dt = hcn.dientich();
	float cv = hcn.chuvi();
	cout << "\n dien tich : " << dt;
	cout << "\n chu vi :" << cv;
	system("pause");
}