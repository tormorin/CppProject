#include<iostream>
using namespace std;
class arry {
public:
	arry(int capacity):m_capacity(capacity)
	{
		this->m_size = 0;
		m_arry = new int[capacity];
	}
	//尾插法
	void push_back(const int& data) {
		if (this->m_size == this->m_capacity) {
			return;
		}
		this->m_arry[this->m_size]=data;
		this->m_size++;
	}
	int& operator[](int index) {
		return this->m_arry[index];
	}
	int getsize() {
		return this->m_size;
	}
private:
	int* m_arry;//数组指针
	int m_size;//数组大小
	int m_capacity;//数组容量
};
int  calculate(arry &a) {
	int sum = 0,average=0;
	int size=a.getsize();
	
	for (int i = 0;i < size;i++) {
		sum += a[i];
		average++;
	}

	average = sum / size;
	return average;
}
int main() {
	arry a1(3);
	int p1, p2, p3;
	cout << "输入第一次的成绩(m/s):";
	cin >> p1;
	a1.push_back(p1);
	cout<<"平均成绩为:"<<calculate(a1)<<endl;
	cout << "输入第二次的成绩(m/s):";
	cin >> p2;
	a1.push_back(p2);
	cout << "平均成绩为:" << calculate(a1) << endl;
	cout << "输入第三次的成绩(m/s):";
	cin >> p3;
	a1.push_back(p3);
	cout << "平均成绩为:" << calculate(a1) << endl;
	return 0;
}