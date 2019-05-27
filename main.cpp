#include <iostream>
#include <Windows.h>

#define tab "\t"


void InputLine(char str[], const int n);
int StrLen(char str[]);
void UpperCase(char str[]);	//Переводит строку в верхний регистр;		+
void LowerCase(char str[]); //Переводит строку в нижний регистр;		+
void Capitalize(char str[]); //Первую букву каждого слова в предложении делает в верхнем регистре;




void main()
{
	setlocale(0, "");

	/*char str[] = {'h', 'e', 'l', 'l', 'o','\0'};
	char msg[] = "Hello";
	std::cout << str << std::endl;
	std::cout << msg << std::endl;
	std::cout << sizeof(msg) << std::endl;*/
	const int n = 20;
	char str[n] = {};
	std::cout << "Введите строку: ";
	//std::cin >> str;
	int Counter;
	InputLine(str, n);
	std::cout << str << std::endl;
	std::cout << StrLen(str) << std::endl;
	UpperCase(str);
	std::cout << "CAPS: " << std::endl;
	std::cout << str << std::endl;
	LowerCase(str);
	std::cout << str << std::endl;
	Capitalize(str);
	std::cout << str << std::endl;
}

void InputLine(char str[], const int n)
{

	SetConsoleCP(1251);
	std::cin.getline(str, n);
	SetConsoleCP(866);
}

int StrLen(char str[])
{
	/*int Counter = 0;
	for (; *str; str++)Counter++;
	return Counter;*/
	int i = 0; for (; str[i]; i++); return i;
}

void UpperCase(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if
			(
				str[i] >= 97 && str[i] <= 'z'
				|| str[i] >= 'а'&&str[i] <= 'я'
				)
			str[i] -= 32;
	}

}

void LowerCase(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] <= 97 && str[i] >= 65
			|| str[i] <= 'а'&&str[i] >= 'А')
			str[i] += 32;
	}
}

void Capitalize(char str[])
{
	if (str[0] >= 'a' && str[0] <= 'z' || str[0] >= 'а'&&str[0] <= 'я')str[0] -= 32;
	for (int i = 1; str[i]; i++)
	{
		if (str[i -1] == ' ')
		{

			if
				(str[i] >= 97 && str[i] <= 'z' || str[i] >= 'а'&&str[i] <= 'я')
				str[i] -= 32;
		}
	}
}