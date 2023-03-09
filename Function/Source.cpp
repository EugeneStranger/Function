#include <iostream>;
using namespace std;

int factorial(int n);
double power(double a, double b);

void main()
{
	setlocale(LC_ALL, "");
	int x = 0, a = 0 , b = 0;
	cout << "¬ведите число, дл€ которого нужно посчитать факториал: "; cin >> x;
	if (x >= 1) cout << "\n" << factorial(x) << "\n\n";
	else cout << "¬ведЄнное значение должно быть не меньше 1"<<"\n\n";
	cout << "¬ведите число и степень, в которую его нужно возвести через пробел: "; cin >> a >> b;
	cout << "\n" << power(a, b) << "\n";
}
int factorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
double power(double a, double b)
{
	double	result = 1;
	if (b >= 0)
	{
		for (int i = 1; i <= b; i++)
		{
			result *= a;
		}
	}
	else
	{
		for (int i = 1; i <= -b; i++)
		{
			result *= result / a;
		}
	}
	return result;
}
