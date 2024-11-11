#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int so;
	cout << "Nhap so";
	cin >> so;
	if (so == 0) {
		cout << "khong\n";
	}
	else if (so == 1) {
		cout << "mot\n";
	}
	else if (so == 2) {
		cout << "hai\n";
	}
	else if (so == 3) {
		cout << "ba\n";
	}
	else if (so == 4) {
		cout << "bon\n";
	}
	else if (so == 5) {
		cout << "nam\n";
	}
	else if (so == 6) {
		cout << "sau\n";
	}
	else if (so == 7) {
		cout << "bay\n";
	}
	else if (so == 8) {
		cout << "tam\n";
	}
	else if (so == 9) {
		cout << "chin\n";
	}
	switch (so)
	{
	case 0:
		cout << "khong\n";
		break;
	case 1:
		cout << "mot\n";
		break;
	case 2:
		cout << "hai\n";
		break;
	case 3:
		cout << "ba\n";
		break;
	case 4:
		cout << "bon\n";
		break;
	case 5:
		cout << "nam\n";
		break;
	case 6:
		cout << "sau\n";
		break;
	case 7:
		cout << "bay\n";
		break;
	case 8:
		cout << "tam\n";
		break;
	case 9:
		cout << "chin\n";
		break;
		return 0;
	}