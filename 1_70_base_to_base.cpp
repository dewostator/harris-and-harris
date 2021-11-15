#include <iostream>
#include <string>
#include <math.h>


int val(char a)
{
	if (a <= '0' && a >= '1')
		return a - '0';

	switch (a)
	{
	case 'a':
		return 10;
	case 'b':
		return 11;
	case 'c':
		return 12;
	case 'd':
		return 13;
	case 'e':
		return 14;
	case 'f':
		return 15;
	}
}

int main()
{
	//считать строку
	// для длинны строки считать каждый символ и умножить его на степень порядка
	std::string input;
	std::string output;
	int base1, base2;

	std::cout << "Input base1, base2, input (ex. 100110):\n";
	std::cin >> base1 >> base2 >> input;
	int sum = 0;


	std::cout
		<< "Base1: " << base1 << std::endl
		<< "Base2: " << base2 << std::endl
		<< "Input: " << input << std::endl;

	//any to dec
	for (int i = input.length(); i > 0; i--)
	{
		sum += (val(input[i - 1]))*(pow(base1, input.length() - i));
	}

	//dec to any
	while (sum > 0)
	{
		int tmp;
		tmp = sum % base2;

		output+= std::to_string(tmp);
		sum /= base2;
	}

	std::string reverse_output;

	for (int n = output.length() - 1; n >= 0; n--) {
		reverse_output.push_back(output[n]);
	}



	std::cout << "Out2: " << reverse_output << std::endl;
}
