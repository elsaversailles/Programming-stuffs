#include <iostream>
#include <string>

std::string decimal_to_4bit_binary(int decimal) {
    std::string binary = "";
    if (decimal == 0) {
        binary = "0000";
    }
    else if (decimal == 1) {
        binary = "0001";
    }
    else if (decimal == 2) {
        binary = "0010";
    }
    else if (decimal == 3) {
        binary = "0011";
    }
    else if (decimal == 4) {
        binary = "0100";
    }
    else if (decimal == 5) {
        binary = "0101";
    }
    else if (decimal == 6) {
        binary = "0110";
    }
    else if (decimal == 7) {
        binary = "0111";
    }
    else if (decimal == 8) {
        binary = "1000";
    }
    else if (decimal == 9) {
        binary = "1001";
    }
    else if (decimal == 10) {
        binary = "1010";
    }
    else if (decimal == 11) {
        binary = "1011";
    }
    else if (decimal == 12) {
        binary = "1100";
    }
    else if (decimal == 13) {
        binary = "1101";
    }
    else if (decimal == 14) {
        binary = "1110";
    }
    else if (decimal == 15) {
        binary = "1111";
    }
    else {
        binary = "Invalid Input";
    }
    return binary;
}

int main() {
    int decimal = 10;
    std::cout << decimal_to_4bit_binary(decimal) << std::endl;
    return 0;
}
