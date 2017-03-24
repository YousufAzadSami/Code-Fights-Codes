#include <iostream>

// Intro > Level 1
bool checkPalindrome(std::string inputString)
{
    int _length = inputString.length();

    for(int _first = 0, _last = _length-1; _first <= _last; _first++, _last--)
    {
        // debug code
        std::cout << "First : " << inputString.at(_first) << " : Last: " << inputString.at(_last) << std::endl;

        if(inputString.at(_first) != inputString.at(_last))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    std::cout << "Hello world!" << std::endl;

    std::string _temp("aBdfggfdsa");
    checkPalindrome(_temp);

    return 0;
}
