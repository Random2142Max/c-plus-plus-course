#include <iostream>
#include <cstring>
#include <vector>
#include <format>

bool IsPalindrom(std::string word)
{
    bool result = true;
    int len = word.length();

    for(int i = 0; i < len/2; ++i)
    {
        if(word[i] != word[len-i-1])
        {
            result = false;
        }
    }

    return result;
}

int main()
{
    // Не читает русские символы T_T
    setlocale(LC_ALL, "Russian");
    
    std::vector<std::string> vecStr = {"казак","abc","wowow","Ничоси","mem"};

    for (auto item : vecStr)
        if (IsPalindrom(item))
            std::cout << "Word is polindrom : " << item << std::endl;
        else
            std::cout << "Word is not polindrom : " << item << std::endl;
    return 0;
}