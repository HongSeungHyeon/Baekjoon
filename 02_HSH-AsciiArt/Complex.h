#pragma once
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

class Complex
{
	double real;
	double imag;
	static int count;

public:

	Complex(double r=0.0, double i=0.0) : real(r), imag(i) { 
		printf("  디폴트생성자\n");
		count++;
		Complex::printCount();
	}
	Complex(Complex& v) : real(v.real), imag(v.imag) { 
		printf("  복사생성자\n");
		count++;
		Complex::printCount();
	}
	~Complex(void) { 
		printf("  소멸자\n");
		count--;
		Complex::printCount();
	};

	static int getCount() { return count; }
	static void printCount() {
		printf("  현재 복소수 객체의 수 = %d\n", count);
	}

	void set( double r,	double i) {						//멤버변수 접근자
		real = r;
		imag = i;		
	}
	void read( char* msg = " 복소수 입력 = ") {			//복소수 입력
		printf(" %s ", msg);
		scanf("%lf%lf", &real, &imag);
	}
	void print( char* msg = " 복소수 = ") {				//객체의 데이터변수 값을 출력하는 함수
		printf("\t%s", msg);							//디폴트매개변수값 출력
		if (real>0.0) printf(" +%3.2lf", real);			//실수부가 0보다 클 때
		else if (real<0.0) printf(" -%3.2lf", -real);	//실수부가 0보다 작을 때
		if (real == 0 && imag == 0)						//실수부 허수부 모두 0일 때
			printf("  0.00");
		if (imag>0.0) printf(" +%3.2lfi", imag);		//허수부가 0보다 클 때
		else if (imag<0.0) printf(" -%3.2lfi", -imag);	//허수부가 0보다 작을 때
		printf("\n");
	}

	Complex& operator= (Complex& b) {
		printf("  대입연산자\n");
		real = b.real;
		imag = b.imag;
		return *this;
	}
	Complex operator+ (Complex& b) {			//operator+ 오버로딩
		Complex c(real+b.real, imag+b.imag);	//새로운 객체를 생성
		return c;								//새로운 객체 반환
	}
	Complex add (Complex& b) {
		Complex c;		//디폴트 생성자 생성
		c.real=real+b.real;
		c.imag=imag+b.imag;
		return c;		//복사생성자 무조건 생성
	}
	void add (Complex& a, Complex& b) {
		real=a.real+b.real;
		imag=a.imag+b.imag;
	}
	Complex operator++ () {						//operator++(전위) 오버로딩
		Complex c(++real, ++imag);				//새로운 객체를 생성
		return c;									//새로운 객체 반환
	}
	Complex operator++ (int){					//operator++(후위) 오버로딩
		Complex c(real++, imag++);				//새로운 객체를 생성
		return c;									//새로운 객체 반환
	}
	Complex operator* (double alpha) {			//operator*(객체*상수) 오버로딩
		Complex c(real*alpha, imag*alpha);		//새로운 객체를 생성
		return c;									//새로운 객체 반환
	}
	friend Complex operator* (double alpha, Complex& b) {
		Complex c(alpha*b.real, alpha*b.imag);	//operator*(상수*객체) 오버로딩
		return c;									//일반함수로 선언
	}
	Complex operator+= (Complex& b) {		//operator+= 오버로딩
		Complex c(real += b.real, imag += b.imag);		
		return c;									//새로운 객체 생성, 반환
	}
	bool operator> (Complex& b) {				//operator> 오버로딩
		if (this->real > b.real)						//실수부 값 비교
			return true;							
		else
			return false;
	}
	bool operator== (Complex& b) {
		if (this->real == b.real && this->imag == b.imag) 
			return true;
		else
			return false;
	}
	friend ostream& operator<< (ostream &os, const Complex &com)
	{												//operator<< 오버로딩
		os << "\t" <<com.real << "+" << com.imag << "i" << " ";
		return os;									//ostream os 재정의
	}
};
int Complex::count=0;