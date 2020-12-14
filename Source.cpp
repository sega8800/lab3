
#include <iostream>
#include <math.h>

using namespace std;

class A
{
protected:
	int a;

public:
	A() { a = 0; }
	~A() {};

	A(int value)
	{
		a = value;
	}
};


class B : public A
{
protected:
	int b;

public:

	B() { b = 0; }
	~B() {};

	B(int value)
	{
		b = value;
	}
};


class C : public B
{
private:
	int c;

public:


	C() { c = 0; }
	~C() {};

	C(int value)
	{
		c = value;
	}

	void resh()
	{

		double D, x1, x2;
		cout << endl << a << endl << b << endl << c << endl;

		D = (b*b) - 4 * a*c;
		if (D > 0)
		{
			x1 = ((-1)*b + sqrt(D)) / 2 * a;
			x2 = ((-1)*b - sqrt(D)) / 2 * a;
			cout << "Корни вашего уравнения: " << x1 << " " << x2 << endl;
		}
		if (D == 0)
		{
			x1 = ((-1)*b / 2 * a);
			cout << "Корень вашего уравнения: " << x1 << endl;


		}
		if (D < 0)
			cout << "Корней нет!" << endl;

	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	int a1, b1, c1;
	cout << "Введите a" << endl;
	cin >> a1;

	cout << "Введите b" << endl;
	cin >> b1;

	cout << "Введите c" << endl;
	cin >> c1;
	A A1(a1);
	B A2(b1);
	C A3(c1);

	A3.resh();



	system("pause");
	return 0;
}