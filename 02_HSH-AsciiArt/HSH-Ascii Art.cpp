#include "Complex.h"

void main() {
	
	Complex::printCount();
	Complex a, b, c;
	a.set(2.4, 12.4);
	b.set(4.123, 3.12);
	
	a.print(" a�� ");
	b.print(" b�� ");	
	c.print(" c�� ");

	c=a;
	a.print(" a�� ");
	b.print(" b�� ");
	c.print(" c�� ");

	c=a+b;
	a.print(" a�� ");
	b.print(" b�� ");
	c.print(" c�� ");
	c=a.add(b);
	a.print(" a�� ");
	b.print(" b�� ");	
	c.print(" c�� ");
	c.add(a,b);
	a.print(" a�� ");
	b.print(" b�� ");
	c.print(" c�� ");
	c=a++;
	a.print(" a�� ");
	b.print(" b�� ");
	c.print(" c�� ");
	c=++a;
	a.print(" a�� ");
	b.print(" b�� ");
	c.print(" c�� ");
	c=a*2;
	a.print(" a�� ");
	b.print(" b�� ");
	c.print(" c�� ");
	c=2*a;
	c.print(" c�� ");
	c+=b;
	c.print(" c�� ");
	if (c>a) 
		printf(" c�� a���� ũ��\n");
	else
		printf(" a�� c���� ũ��\n");
	if (c==b)
		printf(" c�� b�� ����\n");
	else
		printf(" c�� b�� �ٸ���\n");

//	cout << a << b << c <<endl;
	getchar();
	getchar();
}