#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string gender{}, zodiac{};
	int age{};

	std::cout << "Введите пол: ";
	std::cin >> gender;
	std::cout << "Введите знак зодиака : ";
	std::cin >> zodiac;
	std::cout << "Введите возраст: ";
	std::cin >> age;
	std::cout << "Ваше предсказание: " << std::endl;

	bool water = (zodiac == "рак") || (zodiac == "скорпион") || (zodiac == "рыбы");
	bool earth = (zodiac == "телец") || (zodiac == "дева") || (zodiac == "козерог");
	bool fire = (zodiac == "овен") || (zodiac == "лев") || (zodiac == "стрелец");
	bool air = (zodiac == "близнецы") || (zodiac == "весы") || (zodiac == "водолей");
	bool male = (gender == "мужской" || gender == "м");
	bool female = (gender == "женский" || gender == "ж");

	if (male == true && water == true && (age < 40)) {
		std::cout << "Сегодня очень плодотворный день.Можно добиться того, что прежде казалось почти невозможным." << std::endl;
	}
	else if ((female == true) && (earth == true) && (15 <= age && age <= 30)) {
		std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок." << std::endl;
		std::cout << "Будет не только весело, но и интересно : найдётся дело, которое увлечёт всех." << std::endl;
	}
	else {
		std::cout << "Гороскоп для вас находится в разработке.Приходите чуточку позже;)" << std::endl;
	}

	return 0;
}
