#include <iostream>
#include <string>

/*enum class Gender {
    Man,
    Woman
};

enum class ZodiacSign {
    Aries,
    Taurus,
    Gemini,
    Cancer,
    Leo,
    Virgo,
    Libra,
    Scorpio,
    Sagittarius,
    Capricorn,
    Aquarius,
    Pisces
};*/

int main() {

    char chGender;
    std::string strZodiac;
    int age;

    std::cout << "Enter the your gender: ";
    std::cin >> chGender;

    std::cout << "Enter the your zodiac sign: ";
    std::cin >> strZodiac;
    
    std::cout << "Enter the your age: ";
    std::cin >> age;

    if ((chGender == 'M') && 
        (strZodiac == "Cancer" || strZodiac == "Scorpio" || strZodiac == "Pisces") &&
        (age < 40))
        std::cout << "Today is a very productive day. You can achieve things that previously seemed almost impossible.\n";
    else if ((chGender == 'W') && 
        (strZodiac == "Taurus" || strZodiac == "Virgo" || strZodiac == "Capricorn") &&
        (age >= 15) && (age <= 30))
        std::cout << "This evening is perfect for socializing with friends, hosting gatherings at home, or throwing impromptu parties.\nIt promises to be not only fun but also engaging: you’ll find an activity that captivates everyone.\n";
    else
        std::cout << "Your horoscope is currently in the works. Come back a little later ;)\n";

    return EXIT_SUCCESS;
}