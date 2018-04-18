#include "Complex.h"

void main() {
	
	Complex::printCount();
	Complex a, b, c;
	a.set(2.4, 12.4);
	b.set(4.123, 3.12);
	
	a.print(" a는 ");
	b.print(" b는 ");	
	c.print(" c는 ");

	c=a;
	a.print(" a는 ");
	b.print(" b는 ");
	c.print(" c는 ");

	c=a+b;
	a.print(" a는 ");
	b.print(" b는 ");
	c.print(" c는 ");
	c=a.add(b);
	a.print(" a는 ");
	b.print(" b는 ");	
	c.print(" c는 ");
	c.add(a,b);
	a.print(" a는 ");
	b.print(" b는 ");
	c.print(" c는 ");
	c=a++;
	a.print(" a는 ");
	b.print(" b는 ");
	c.print(" c는 ");
	c=++a;
	a.print(" a는 ");
	b.print(" b는 ");
	c.print(" c는 ");
	c=a*2;
	a.print(" a는 ");
	b.print(" b는 ");
	c.print(" c는 ");
	c=2*a;
	c.print(" c는 ");
	c+=b;
	c.print(" c는 ");
	if (c>a) 
		printf(" c가 a보다 크당\n");
	else
		printf(" a가 c보다 크당\n");
	if (c==b)
		printf(" c와 b가 같당\n");
	else
		printf(" c와 b가 다르당\n");

//	cout << a << b << c <<endl;
	getchar();
	getchar();
}