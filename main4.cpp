#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string numberToWords(int num) {
    if (num == 0) 
        return "zero";
    
    string result = "";
    bool isNegative = false;
    
    if (num < 0) {
        isNegative = true;
        num = abs(num);
    }
    
    string ones[] = {"", "one", "two", "three", "four", "five", 
                     "six", "seven", "eight", "nine"};
    string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", 
                      "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", 
                     "sixty", "seventy", "eighty", "ninety"};
    
    int tensPart = num / 10;
    int onesPart = num % 10;
    
    if (num >= 10 && num <= 19)
        result = teens[num - 10];
    else {
        if (tensPart == 1)
            result = teens[onesPart];
        else if (tensPart > 1) {
            result = tens[tensPart];
            if (onesPart > 0)
                result += "-" + ones[onesPart];
        } else if (onesPart > 0)
            result = ones[onesPart];
    }
    
    if (isNegative)
        result = "minus " + result;
    
    return result;
}

int main() {
    int num1, num2;
    
    cout << "Enter an integer: ";
    cin >> num1;
    
    cout << "Enter an integer: ";
    cin >> num2;
    
    if (num1 < -99 || num1 > 99 || num2 < -99 || num2 > 99) {
        cout << "Error! One of the numbers is out of range!" << endl;
        return EXIT_FAILURE;
    }
    
    string word1 = numberToWords(num1);
    string word2 = numberToWords(num2);
    
    if (num1 > num2)
        cout << word1 << " is greater than " << word2 << endl;
    else if (num1 < num2)
        cout << word1 << " is less than " << word2 << endl;
    else
        cout << word1 << " is equal to " << word2 << endl;
    
    return EXIT_SUCCESS;
}