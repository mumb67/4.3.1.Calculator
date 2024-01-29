#include <iostream>

class Calculator {
public:
    bool setNum1(double enteredNum1) {
        if (enteredNum1 == 0) {
            std::cout << "Ошибка! Первое число равно нулю." << std::endl << std::endl;
            return false;
        }
        else {
            this->number1 = enteredNum1;
            return true;
        }
    }
    bool setNum2(double enteredNum2) {
        if (enteredNum2 == 0) {
            std::cout << "Ошибка! Второе число равно нулю." << std::endl << std::endl;
            return false;
        }
        else {
            this->number2 = enteredNum2;
            return true;
        }
    }
public:
    double add() {
        return this->number1 + this->number2;
    }

    double substract_1_2() {
        return this->number1 - this->number2;
    }

    double substract_2_1() {
        return this->number2 - this->number1;
    }

    double multiply() {
        return this->number1 * this->number2;
    }

    double divide_1_2() {
        return this->number1 / this->number2;
    }

    double divide_2_1() {
        return this->number2 / this->number1;
    }

private:
    double number1;
    double number2;

};

int main()
{
    setlocale(LC_ALL, "Russian");
    double enteredNum1 = 0, enteredNum2 = 0, calcRes = 0;
    Calculator calcObj;

    do {
        do {
            std::cout << "\nВведите первое число: ";
            std::cin >> enteredNum1;
            //calcObj.setNum1(enteredNum1);
        } while (calcObj.setNum1(enteredNum1) == false);

        do {
            std::cout << "Введите второе число: ";
            std::cin >> enteredNum2;
            //calcObj.setNum2(enteredNum2);
        } while (calcObj.setNum2(enteredNum2) == false);

        calcRes = calcObj.add();
        std::cout << "num1 + num 2 = " << calcRes << std::endl;

        calcRes = calcObj.substract_1_2();
        std::cout << "num1 - num 2 = " << calcRes << std::endl;

        calcRes = calcObj.substract_2_1();
        std::cout << "num2 - num 1 = " << calcRes << std::endl;

        calcRes = calcObj.multiply();
        std::cout << "num1 * num 2 = " << calcRes << std::endl;

        calcRes = calcObj.divide_1_2();
        std::cout << "num1 / num 2 = " << calcRes << std::endl;

        calcRes = calcObj.divide_2_1();
        std::cout << "num2 / num 1 = " << calcRes << std::endl;
    } while (1);
}

