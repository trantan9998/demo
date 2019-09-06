#include "stdio.h"
# include"conio.h"
#include <iostream>
using namespace std;

class PhanSo
{
private:
	int iTuSo;
	int iMauSo;
private:
	int UCLN(int a, int b);
public:
	PhanSo();
	PhanSo(int iTu, int iMau);
	
	void Nhap();
	void Xuat();
	void RutGon();
	PhanSo Cong(const PhanSo &);
	PhanSo Tru(const PhanSo &);
	PhanSo Nhan(const PhanSo &);
	PhanSo Chia(const PhanSo &);
	int SoSanh(const PhanSo &);
};


// xử lý tính toán phân số
PhanSo::PhanSo()
{
	iTuSo = 0;
	iMauSo = 1;
}
PhanSo::PhanSo(int iTu, int iMau)
{
	iTuSo = iTu;
	if (iMau != 0)
	{
		iMauSo = iMau;
	}
	else
	{
		iMauSo = 1;
	}

}
int PhanSo::UCLN(int a, int b)
{
	if (a% b == 0)
		return b;
	else
		return UCLN(b, a%b);
}
void PhanSo::Nhap()
{
	cout << "\tNhap tu So: "; cin >> iTuSo;
	cout << "\tNhap mau so: "; cin >> iMauSo;
}
void PhanSo::Xuat()
{
	cout << iTuSo << "/" << iMauSo << "\n";
}

void PhanSo::RutGon()
{
	int iUCLN = UCLN(iTuSo, iMauSo);
	iTuSo = iTuSo / iUCLN;
	iMauSo = iMauSo / iUCLN;
}
PhanSo PhanSo::Cong(const PhanSo &b)
{
	return PhanSo((iTuSo*b.iMauSo) + (iMauSo*b.iTuSo), iMauSo*b.iMauSo);
}
PhanSo PhanSo::Tru(const PhanSo &b)
{
	return PhanSo((iTuSo*b.iMauSo) - (iMauSo*b.iTuSo), iMauSo*b.iMauSo);
}
PhanSo PhanSo::Nhan(const PhanSo &b)
{
	return PhanSo(this->iTuSo*b.iTuSo, this->iMauSo*b.iMauSo);
}
PhanSo PhanSo::Chia(const PhanSo &b)
{
	return PhanSo(this->iTuSo*b.iMauSo, this->iMauSo*b.iTuSo);
}
int PhanSo::SoSanh(const PhanSo &b)
{
	int x = this->iTuSo / this->iMauSo;
	int y = b.iTuSo / b.iMauSo;
	if (x < y) return -1; if (x > y)
		return 1;
	else return 0;
}

// HÀM MAIN
int main()
{
	PhanSo ps1, ps2, ps;
	cout << "Phan so 1:\n";
	ps1.Nhap();
	cout << "\tPhan so vua nhap:";
	ps1.Xuat();
	ps1.RutGon();
	cout << "\tPhan so rut gon:";
	ps1.Xuat();
	cout << "Phan so 2:\n";
	ps2.Nhap();
	cout << "\tPhan so vua nhap:";
	ps2.Xuat();
	ps2.RutGon();
	cout << "\tPhan so rut gon:";
	ps2.Xuat();
	PhanSo psTong = ps1.Cong(ps2);
	cout << "\nCong hai phan so: ";
	psTong.RutGon();
	psTong.Xuat();
	PhanSo psHieu = ps1.Tru(ps2);
	cout << "\nTru hai phan so: ";
	psHieu.RutGon();
	psHieu.Xuat();

	PhanSo psTich = ps1.Nhan(ps2);
	cout << "\nNhan hai phan so: ";
	psTich.RutGon();
	psTich.Xuat(); PhanSo psThuong = ps1.Chia(ps2);
	cout << "\nChia hai phan so: ";


	psThuong.RutGon();
	psThuong.Xuat();
	int ss = ps1.SoSanh(ps2);
	switch (ss)
	{
	case -1:
		cout << "\nPhan so 1 nho hon phan so 2";
		break;
	case 1:
		cout << "\nPhan so 1 lon hon phan so 2";
		break;
	case 0:
		cout << "\nPhan so 1 bang phan so 2";
		break;
	default:
		break;
	}

	system("pause");

}