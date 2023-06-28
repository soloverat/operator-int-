#include <iostream>
using namespace std;

class circle
{
private:
	double x, y, r;

public:
	circle(double x1, double y1, double r1)
	{
		x = x1;
		y = y1;
		r = r1;
	}
	operator int() { return int(r); }
	operator double() { return 2 * 3.14 * r; }
	operator float() { return (float)3.14 * r * r; }
};

int main() {
	circle c(2.3, 3.4, 2.5);
	//int r = c;         //调用operator int()，将Circle类型转换成int
	//double length = c; //调用operator double()，转Circle类型换成double
	//float area = c;    //调用operator float()，将Circle类型转换成float
	double len = (double)c; //将Cirlce类型对象强制转换成double   c.operator double()=(double)c
	//cout << r << endl;
	//cout << length << endl;
	//cout << area << endl;
	cout << len << endl;
	return 0;
}
