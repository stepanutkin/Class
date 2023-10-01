#include <iostream>


class Calculator {
 private:
	double num1, num2;
 public:
	 double add(double x, double y) {
		 return x + y;
	 }
	 double multiply(double x, double y) {
		 return x * y;
	 }
	 double subtract_1_2(double x, double y) {
		 return x - y;
		 }
	 double subtract_2_1(double x, double y) {
		 return y - x;
	 }
	 double divide_1_2(double x, double y) {
		 return x / y;
	 }
	 double divide_2_1(double x, double y) {
		 return y / x;
	 }

	 bool set_num1(double num1) {
		 if (num1 != 0) {
			 this->num1 = num1;
			 return true;
		 }
		 std::cout << "Неверный ввод" << std::endl;
		 return false;
	 }

	 bool set_num2(double num2) {
		 if (num2 != 0) {
			 this->num2 = num2;
			 return true;
		 }
		 std::cout << "Неверный ввод" << std::endl;
		 return false;
	 }

	 Calculator() = default;
};





int main() {
	setlocale(LC_ALL, "russian");

	Calculator calculator;
	double num1;
	double num2;

	while (true == true) {
		
		std::cout << "Введите num1:";
		std::cin >> num1;

		while (!calculator.set_num1(num1)) {
			std::cout << "Введите num1:";
			std::cin >> num1;
		}
		
		std::cout << "Введите num2:";
		std::cin >> num2;

		while (!calculator.set_num2(num2)) {
			std::cout << "Введите num2:";
			std::cin >> num2;
		}

		std::cout << "num1 + num2 = " << calculator.add(num1, num2) << std::endl;
		std::cout << "num1 - num2 = " << calculator.subtract_1_2(num1, num2) << std::endl;
		std::cout << "num2 - num1 = " << calculator.subtract_2_1(num1, num2) << std::endl;
		std::cout << "num1 * num2 = " << calculator.multiply(num1, num2) << std::endl;
		std::cout << "num1 / num2 = " << calculator.divide_1_2(num1, num2) << std::endl;
		std::cout << "num2 / num1 = " << calculator.divide_2_1(num1, num2) << std::endl;
	}
		

	return 0;
}