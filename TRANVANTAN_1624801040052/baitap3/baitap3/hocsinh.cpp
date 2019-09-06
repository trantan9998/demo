#include <stdio.h>
#include<iostream>
#include<conio.h>

using namespace std; 
class hocsinh
{
private:
	char ho[30], ten[30];
	float van, toan, diemtrungbinh;
public:
	void nhap();
	void xuat();
};
void hocsinh::nhap()
{
	cout << "\n vui long nhap ho: ";
	gets_s(ho);
	cout << "\n vui long nhap ten: ";
	gets_s(ten);
	cout << "\n vui long nhap diem van: ";
	cin >> van;
	cout << "\n vui long nhap diem toan: ";
	cin >> toan;

}
void hocsinh::xuat() {
	cout << "\n ho la:" << ho;
	cout << "\n ten la: " << ten;
	cout << "\n diem van la: " << van;
	cout << "\n diem toan la:" << toan;
	cout << "\n diem trung binh la:" << (van + toan) / 2;
}

int main() {
	hocsinh hs;
	hs.nhap();
	hs.xuat();
	system("pause");
	return 0;
}