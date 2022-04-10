#include "Base.hpp"

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
		std::cout << " ---> Class A" << std::endl;
	else if (dynamic_cast <B*> (p))
		std::cout << " ---> Class B" << std::endl;
	else if (dynamic_cast <C*> (p))
		std::cout << " ---> Class C" << std::endl;
}

void	identify(Base &p)
{
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

	delete(base_test); 
	return (0);
}
