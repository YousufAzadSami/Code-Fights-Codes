#include <iostream>
#include <limits>
#include <vector>

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

// Intro > Level 2
int adjacentElementsProduct(std::vector<int> inputArray) {

    int _highestProduct = std::numeric_limits<int>::min() /*-1000*-1001*/;
    std::cout << "Lowest possible value for int in this machine : " << _highestProduct << std::endl;
    int _product;
    int _length = inputArray.size();
    std::cout << "Size : " << _length << std::endl;

    for(int i = 0; i <= _length - 2; i++)
    {
        std::cout << "i : " << i << " || value 1: " << inputArray.at(i) << " || value 2: " << inputArray.at(i+1) << std::endl;
        _product = inputArray.at(i) * inputArray.at(i+1);

        if(_product > _highestProduct)
        {
            _highestProduct = _product;
        }
    }

    return _highestProduct;
}

void adjacentElementsProductInput()
{
    std::vector<int> _temp1; // {3, 6, -2, -5, 7, 3}
    _temp1.push_back(3);
    _temp1.push_back(6);
    _temp1.push_back(-2);
    _temp1.push_back(-5);
    _temp1.push_back(7);
    _temp1.push_back(3);

    std::vector<int> _temp2; // {-1, -2}
    _temp2.push_back(-1);
    _temp2.push_back(-2);

    std::vector<int> _temp3; // {5, 1, 2, 3, 1, 4};
    _temp3.push_back(5);
    _temp3.push_back(1);
    _temp3.push_back(2);
    _temp3.push_back(3);
    _temp3.push_back(1);
    _temp3.push_back(4);

    std::cout << adjacentElementsProduct(_temp1) << std::endl;
    std::cout << adjacentElementsProduct(_temp2) << std::endl;
    std::cout << adjacentElementsProduct(_temp3) << std::endl;
}

int main()
{
    std::cout << "Hello world!" << std::endl;

    adjacentElementsProductInput();

    return 0;
}
