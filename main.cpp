#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cctype>
void greetings()
{
    std::cout << "Greetings operator" << std::endl;
    std::cout << "This is a rudimentary calculator without a GUI" << std::endl;
    std::cout << "This is a practice project for learning and excercising c++" << std::endl;
}
void supportedOp()
{
    std::cout << "Supported operations" << std::endl;
    std::cout << std::left << std::setw(10) << "+" << std::setw(10) << "=" << std::setw(10) << "add" << std::endl;
    std::cout << std::left << std::setw(10) << "-" << std::setw(10) << "=" << std::setw(10) << "subtract" << std::endl;
    std::cout << std::left << std::setw(10) << "*" << std::setw(10) << "=" << std::setw(10) << "multiply" << std::endl;
    std::cout << std::left << std::setw(10) << "/" << std::setw(10) << "=" << std::setw(10) << "divide" << std::endl;
    std::cout << std::left << std::setw(10) << "^" << std::setw(10) << "=" << std::setw(10) << "raise to the power of" << std::endl;
}
double getNum()
{
    bool SF = false;
    bool end = false;
    double Num;
    while (!SF)
    {
        std::string input;
        std::cin >> input;
        if (input == "help")
        {
            supportedOp();
        }
        else if (input == "exit")
        {
            end = true;
            exit(end);
        }
        else if (isdigit(input[0]) || (input[0] == '-' && isdigit(input[1])))
        {
            Num = std::stod(input);
            break;
        }
        else
        {
            std::cout << "Invalid input try again" << std::endl;
        }
    }
    return Num;
}
double solution(double a, double b)
{
    bool SF = false;
    bool end = false;
    double solution;
    while (!SF)
    {
        std::string userInput;
        std::cout << "Intended operation:" << std::endl;
        std::cin >> userInput;
        if (userInput == "+")
        {
            solution = a + b;
            SF = true;
            return solution;
        }
        else if (userInput == "-")
        {
            solution = a - b;
            SF = true;
            return solution;
        }
        else if (userInput == "*")
        {
            solution = a * b;
            SF = true;
            return solution;
        }
        else if (userInput == "/")
        {
            solution = a / b;
            SF = true;
            return solution;
        }
        else if (userInput == "^")
        {
            solution = pow(a, b);
            SF = true;
            return solution;
        }
        else if (userInput == "exit")
        {
            bool end = true;
            exit(end);
        }
        else
        {
            std::cout << "invalid operator" << std::endl;
            std::cout << "try again" << std::endl;
        }
    }
    return solution;
}
int main()
{
    std::string help = "help";
    bool SF = false;
    while (!SF)
    {
        char userInput;
        double a;
        double b;
        double result;
        greetings();
        supportedOp();
        std::cout << "Type in the first number\n";
        a = getNum();
        std::cout << "Type in the second number\n";
        b = getNum();
        result = solution(a, b);
        bool SF1 = false;
        std::cout << result << std::endl;
        while (!SF1)
        {
            std::cout << "Do you need another calculation?" << std::endl;
            std::cout << "Y/N" << std::endl;
            std::cin >> userInput;
            if (userInput == 'Y')
            {
                SF = false;
                SF1 = true;
            }
            else if (userInput == 'N')
            {
                SF = true;
                SF1 = true;
                exit(SF);
            }
            else
            {
                std::cout << "wrong answer" << std::endl;
                SF1 = false;
            }
          SF1 = false;
        }
    }
    return 0;
}
