#include<iostream>
using namespace std;
int  swap(int f_E_oil) {
	int f_A_oil;
	f_A_oil=3.785*62.14/f_E_oil;
	return f_A_oil;
}

int main() {
	int E_oil, A_oil;
	//E_oil=n升/100公里
	//A_oil=n英里/1加仑
	cout << "输入耗油量(欧洲风格--L/100km): ";
	cin >> E_oil;
	A_oil= swap(E_oil);
	cout << "美国风格的耗油量为(mpg):" <<A_oil<< endl;
	return 0;
}