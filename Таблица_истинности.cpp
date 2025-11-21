#include <iostream>

int main()
{
	bool t { true };
	bool f { false };

	std::cout << "Operator: ||" << std::endl;
	std::cout << std::boolalpha;
	std::cout << t << "\t" << !f << "\t" << (t || !f) << std::endl;
	std::cout << !t << "\t" << !f << "\t" << (!t || !f) << std::endl;
	std::cout << t << "\t" << f << "\t" << (t || f) << std::endl;
	std::cout << !t << "\t" << f << "\t" << (!t || f) << "\n" << std::endl;

	std::cout << "Operator: &&" << std::endl;
	std::cout << t << "\t" << !f << "\t" << (t && !f) << std::endl;
	std::cout << !t << "\t" << !f << "\t" << (!t && !f) << std::endl;
	std::cout << t << "\t" << f << "\t" << (t && f) << std::endl;
	std::cout << !t << "\t" << f << "\t" << (!t && f) << "\n" << std::endl;

	return EXIT_SUCCESS;
}