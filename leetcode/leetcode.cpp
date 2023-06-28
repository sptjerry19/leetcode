// Bai tap phan so

#include <iostream>

using namespace std;

class Phanso
{
public:
	Phanso() {
		tuso = 0;
		mauso = 1;
	};
	Phanso(int tuso, int mauso) {
		this->tuso = tuso;
		this->mauso = mauso;
	}
	~Phanso() {
		tuso = 0;
		mauso = 1;
	};

	void get() {
		cout << "Nhap tu so : ";
		cin >> tuso;
		cout << "Nhap mau so : ";
		cin >> mauso;
	}

	void set() {
		cout << tuso << "/" << mauso << endl;
	}

	Phanso Cong(Phanso ps1, Phanso ps2) {
		Phanso ps3;
		ps3.tuso = ps1.tuso * ps2.mauso + ps2.tuso * ps1.mauso;
		ps3.mauso = ps1.mauso * ps2.mauso;
		return ps3;
	}

	Phanso Rutgon(Phanso ps) {
		for (int i = ps.mauso; i > 1; i--) {
			if (ps.tuso % i == 0 && ps.mauso % i == 0) {
				ps.tuso = ps.tuso / i;
				ps.mauso = ps.mauso / i;
			}
		}
		return ps;
	}

private:
	int tuso, mauso;
};

struct Room
{
	int cd, cr, cc;
	void KichthuocRoom(int cd, int cr, int cc) {
		cout << cd << "-" << cr << "-" << cc;
	}
};

void UCLN(int a, int b) {
	for (int i = a; i > 1; i--) {
		if (a % i == 0 && b % i == 0) {
			a = a / i;
			b = b / i;
		}
	}
}

int main() {
	Phanso ps1, ps2, ps3;
	ps1.get(), ps2.get();
	ps1.set(), ps2.set();

	//cout << (6 / 3 ) <<endl;
	
	//UCLN(10, 8);
	
	ps3 = ps3.Cong(ps1, ps2);ps3.Rutgon(ps3).set();

	return 0;
}