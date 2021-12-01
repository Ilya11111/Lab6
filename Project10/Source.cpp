#include <iostream>

using namespace std;

double max(double nam1, double nam2){
	if (nam1 > nam2)
		return nam1;

	return nam2;
}

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double T = (max(a, a + b) + max(a, b + c)) / (1 + max(a + b * c, 1.15));
	cout << T;

}





