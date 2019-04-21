#include<iostream>

/*
default, parameterized, copy constructor, 
order of execution of constructors, destructors
*/

//Constructors: special class member functions
//that is automatically called when object of that class is instantiated

class Complex {
	int m_real;
	int m_img;

public:
	//default constructor: takes no parameters(or parameters with default values)
	Complex() {
		m_real = 1;
		m_img = 0;
	}

	//Parameterized constructor
	Complex(int real, int img) {
		m_real = real;
		m_img = img;
	}

	//Copy Constructor: used to create a new object as a copy of an existing object.
	Complex(const Complex& num) {
		m_real = num.m_real;
		m_img = num.m_img;
	}

	int getReal() {
		return m_real;
	}

	int getImg() {
		return m_img;
	}

	void Sum(Complex obj) {
		std::cout << m_real + obj.getReal() << "+" 
			<< m_img + obj.getImg() << "i" << std::endl;
	}

	~Complex() {
		std::cout << "Destructor" << std::endl;
 	}
};

int main() {
	Complex c;
	Complex c2{ 2, 3 }; //Uniform initialization : valid in c++11
	//Complex c2(2, 3); //or use this
	
	//Complex copy(c);
	Complex copy(Complex(4, 5)); //
	copy.Sum(c2);
}