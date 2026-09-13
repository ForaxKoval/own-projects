#include <iostream>
#include <string>

std::string CodingScript(std::string string) {

    std::string result = "";
    int sum = 0;

    for (int i = 0; i < string.length(); i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            sum = sum + (string[i] - 'A' + 1);
        }

        else if (string[i] >= '0' && string[i] <= '9') {
            if (sum > 0) {
                result = result + std::to_string(sum);
                sum = 0;
            }
            result = result + string[i];
        }
        else {
            return "Некоректні дані";
        }
    }
    if (sum > 0) {
        result = result + std::to_string(sum);
    }
    return result;
}

int main() {
    std::string string;
    std::cout << "Vvedit vash radok" << std::endl;
    std::cin >> string;
    std::cout << CodingScript(string);
    return 0;
}
//blablabla

