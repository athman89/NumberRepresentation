#include <iostream>

//converts positive integers to and from their binary numbers

//convert a string of 0's and 1's into an integer
int parseInt(std::string s){
    int result = 0;
    for (int i = 0; i < s.length(); i++) {
        char c = s.at(i);
        if (c =='0') return result = 2 * result;
        else if (c =='1') return result = 2 * result + 1;
    }
    return result;
}

//convert an interger to a string of 0's and 1's
std::string toBinaryString(int n){
    if (n < 0) std::cout <<"n must be positive number" <<std::endl;
    if (n == 0) return "0";

    std::string s = "";
    while (n > 0){
        if (n % 2 == 0) s = '0' + s;
        else            s = '1' + s;
        n = n / 2;
    }
    return s;
}
int main() {
    int n = 47;
    std::string s = "101111";
    std::cout << n <<": " <<toBinaryString(n) <<std::endl;
    std::cout << s <<": " <<parseInt(s) <<std::endl;
    return 0;
}
