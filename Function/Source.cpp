#include <iostream>;
using namespace std;

int factorial(int n);
double power(double a, double b);

void main()
{
	setlocale(LC_ALL, "");
	int x = 0, a = 0 , b = 0;
	cout << "������� �����, ��� �������� ����� ��������� ���������: "; cin >> x;
	if (x >= 1) cout << "\n" << factorial(x) << "\n\n";
	else cout << "�������� �������� ������ ���� �� ������ 1"<<"\n\n";
	cout << "������� ����� � �������, � ������� ��� ����� �������� ����� ������: "; cin >> a >> b;
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
