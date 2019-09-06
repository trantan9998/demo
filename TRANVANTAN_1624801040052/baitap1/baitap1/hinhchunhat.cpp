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
		cout << "\nhập chiều dài và chiều rộng:";
		cin >> chieudai >> chieurong;
	}
	void xuat() {
		cout << "\n chiều dài:" << chieudai;
		cout << "\n chiều rộng" << chieurong;
	}
	float dientich(){
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
	cout << "diện tích" << dt;
	cout << "chu vi" << cv;
	system("pause");
 }