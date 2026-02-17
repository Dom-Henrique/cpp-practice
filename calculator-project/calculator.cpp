#include <iostream>

float result = 0;

float add(float n1){
    result += n1;
    std::cout << result << "\n";
    return result;
}

float sub(float n1){
    result -= n1;
    std::cout << result << "\n";
    return result;
}

float times(float n1){
    result *= n1;
    std::cout << result << "\n";
    return result;
}

float div(float n1){
    result /= n1;
    std::cout << result << "\n";
    return result;
}

int main(void){
    float n1, n2;
    char operation;
    while (true){
        std::cout << "Type a number: ";
        std::cin >> n1;
        std::cout << "Operation (+ - / *) or x to exit: ";
        std::cin >> operation;
        if (operation == '+'){
            add(n1);
        }
        else if (operation == '-'){
            sub(n1);
        }
        else if (operation == '*'){
            times(n1);
        }
        else if (operation == '/'){
            div(n1);
        }
        else if (operation == 'x'){
            break;
        }
        else{
            std::cout << "Invalid operation!\n";
        }
    }
    std::cout << "Result: " << result << "\n";
}