#include <iostream>
#include <cstdlib>

class Base { public: virtual ~Base(void){} };
class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *generate(void)
{
	srand(time(0));
	switch (rand() % 3)
	{
		case 0: return (new A);
		case 1: return (new B);
		case 2: return (new C);
	}
	return(NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast <A*> (p))
		std::cout << "The actual type of object pointed to by p is ---> A" << std::endl;
	else if (dynamic_cast <B*> (p))
		std::cout << "The actual type of object pointed to by p is ---> B" << std::endl;
	else if (dynamic_cast <C*> (p))
		std::cout << "The actual type of object pointed to by p is ---> C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		Base test_A = dynamic_cast <A &> (p);
		std::cout << "The actual type of object pointed to by p is ---> A" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		Base test_B = dynamic_cast <B &> (p);
		std::cout << "The actual type of object pointed to by p is ---> B" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		Base test_C = dynamic_cast <C &> (p);
		std::cout << "The actual type of object pointed to by p is ---> C" << std::endl;
	}
	catch (std::exception &e) {}
}

int main(void)
{
	Base *p;
	p = generate();

	std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "  TESTING WITH POINTER " << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
	identify(*p);

	std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << " TESTING WITH REFERENCE "<< std::endl;
	std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
	identify(p);

	delete(p); 
	return (0);
}
