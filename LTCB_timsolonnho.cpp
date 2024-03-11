#include  <iostream>
using namespace std;
int main() {
	int a, b, c, nhonhat, lonnhat;
	cout << "nhap a:"; cin >> a;
	cout << "mhap b:"; cin >> b;
	cout << "nhap c:"; cin >> c;
	lonnhat = nhonhat = a;

	if (nhonhat > b) {
		nhonhat = b;
	}

	if (lonnhat < b) {
		lonnhat = b;
	}
	if (nhonhat > c) {
		nhonhat = c;
	}
	if (lonnhat < c) {
		lonnhat = c;
	}
	cout << "gia tri lon nhat:" << lonnhat << endl;
	cout << "gia tri nho nhat:" << nhonhat << endl;
	return 0;

}