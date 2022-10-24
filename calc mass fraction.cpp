#include <iostream>

int main()
{
    int type; 
    float fArg, fArg2; 
    std::string arg, arg2;

    std::cout << "Write type of calculate mass (1 or 2)" << std::endl;
    std::cin >> type;

    std::cout << "Write first argument" << std::endl;
    std::cin >> arg;
    
    std::cout << "Write second argument" << std::endl;
    std::cin >> arg2;

    fArg = stof(arg); fArg2 = stof(arg2);
        
    if(fArg && fArg2 != 0.0)
    {
        if(type == 1) std::cout << "Result: " << ((fArg2/(fArg+fArg2))*100) << std::endl;
        else if(type == 2) std::cout << "Result: " << ((fArg*fArg2)/100) << std::endl;
    }
    else std::cout << "ERROR: Одно из чисел равно нулю!" << std::endl;

    return 0;
}
