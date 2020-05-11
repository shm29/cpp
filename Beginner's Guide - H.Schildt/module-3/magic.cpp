#include <iostream>
#include <cstdlib>

int main()
{
        int magic, guess;

        magic = rand();

        std::cout << "Give me your guess: ";
        std::cin >> guess;

        if(guess == magic) std::cout << "** You got it right! **" << std::endl;
        else std::cout << "You got it wrong!" << std::endl;

        return 0;
}
