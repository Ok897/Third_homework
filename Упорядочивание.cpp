#include <iostream>

int main()
{
	int n1{}, n2{}, n3{};
	std::cout << "Enter the first integer: ";
	std::cin >> n1;
	std::cout << "Enter the second integer: ";
	std::cin >> n2;
	std::cout << "Enter the third integer: ";
	std::cin >> n3;
	std::cout << std::endl;

	int first = (n1 >= n2 && n1 >= n3) ? n1
		: ((n2 >= n1 && n2 >= n3) ? n2 : n3);
	int third = (n2 <= n1 && n2 <= n3) ? n2
		: ((n3 <= n1 && n3 <= n2) ? n3 : n1);
	int second = (first == n1 && third == n2 || first == n2 && third == n1) ? n3
		: (first == n1 && third == n3 || first == n3 && third == n1) ? n2 : n1;

	std::cout << first << " " << second << " " << third << std::endl;

	return EXIT_SUCCESS;
}