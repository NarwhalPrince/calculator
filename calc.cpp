#include <iostream>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {

    int operation;
    double num1, num2, result;
    char continueCalc;

   do{ 
    
    
    while(true){
        std::cout << "Select calculation:\n";
        std::cout << "1. Addition\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Division\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice (1-5): ";
        std::cin >> operation;

        if(operation >= 1 && operation<=5){
            break;
        } else {
            std::cout << "Invalid selection. Please enter a value between 1 and 5.\n";
        }
         
        }

        if(operation != 5){
            std::cout << "Enter the first number: ";
            std::cin >> num1;
            std::cout << "Enter the second number: ";
            std::cin >> num2;
        }

   

        switch (operation){
            case 1:
                result = add(num1, num2);
                break;
            case 2:
                result = subtract(num1, num2);
                break;
            case 3:
                result = multiply(num1, num2);
                break;
            case 4:
                if (num2 == 0){
                    std::cout << "Division by 0 is not allowed. " << std::endl;
                    return 1;
                }
                result = divide(num1, num2);
                break;
            case 5:
                std::cout << "Exiting the program" << std::endl;
                return 0;
            default: 
                std::cout << "Invalid operation" << std::endl;
                return 1;
        }

    std::cout << "The result is: " << result << std::endl;

    while(true){
    std::cout << "Do you want to do another calculation? (y/n): ";
    std::cin >> continueCalc;
    
    if (continueCalc == 'y' || continueCalc == 'Y' || continueCalc == 'n' || continueCalc == 'N'){
        break;
    } else {
        std::cout << "Invalid input, please enter 'y' or 'n' . \n";
    } 
    }

   } while (continueCalc == 'y' || continueCalc == 'Y');

   std::cout << "Exiting the program" << std::endl;

    return 0;
}

//function definitions
    double add(double a, double b){
        return a + b;
    }

    double subtract(double a, double b){
        return a - b;
    }

    double multiply(double a, double b){
        return a * b;
    }

    double divide(double a, double b){
        return a / b;
    }