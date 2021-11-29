#include "main.h"

int main()
{
	std::vector<std::string> numbers = InitNumbers();;
	std::string operation;

	// Rename
	std::cout << "Enter a number, then an operator, then another number. (Ex: 5 + 5 or five + five)" << std::endl;
	while (true)
	{
		int input1 = GetNumber(numbers);
		std::cin >> operation;
		int input2 = GetNumber(numbers);

		double result = 0;
		if (operation == "plus" || operation == "+") 
			result = input1 + input2;
		else if (operation == "minus" || operation == "-" )
			result = input1 - input2;
		else if (operation == "mul" || operation == "*" )
			result = input1 * input2;
		else if (operation == "div" || operation == "/" )
			result = input1 / input2;
		else
		{
			std::cout << "Bad operator input" << std::endl;
			continue;
		}

		std::cout << input1 << " " << operation << " " << input2 << " = " << result << std::endl;
		std::cout << "Enter an operand, then an operator, then one last operand. (Ex: 5 + 5 or five + five)" << std::endl;
	}

	return 0;
}

std::vector<std::string> InitNumbers()
{
	std::vector<std::string> numbers;
	numbers.push_back("zero");
	numbers.push_back("one");
	numbers.push_back("two");
	numbers.push_back("three");
	numbers.push_back("four");
	numbers.push_back("five");
	numbers.push_back("six");
	numbers.push_back("seven");
	numbers.push_back("eight");
	numbers.push_back("nine");

	return numbers;
}

int GetNumber(std::vector<std::string> numbers)
{
	std::string strInput;
	int intInput;

	if (std::cin >> intInput)
		return intInput;

	std::cin.clear();
	std::cin >> strInput;
	for (int i = 0; i < numbers.size(); i++)
		if (numbers[i] == strInput)
			return i;
}