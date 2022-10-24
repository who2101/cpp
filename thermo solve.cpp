#include <iostream>
#include <string>

int main()
{
	std::string arg, arg2, arg3, arg4;
	float fArg, fArg2, fArg3, fArg4;
	
    std::cout << "Введите массу вещества" << std::endl;
    std::cout << std::endl;
	std::cin >> arg; // mass
	std::cout << std::endl;
	
	std::cout << "Введите молекулярную массу" << std::endl;
	std::cout << std::endl;
	std::cin >> arg2; // mr
	std::cout << std::endl;
	
	std::cout << "Введите кол-во kJ" << std::endl;
	std::cout << std::endl;
	std::cin >> arg3; //kj
    std::cout << std::endl;
    
    std::cout << "Введите кол-во моль" << std::endl;
    std::cout << std::endl;
    std::cin >> arg4; // mole
    std::cout << std::endl;
	
	fArg = stof(arg);
	fArg2 = stof(arg2);
	fArg3 = stof(arg3);
	fArg4 = stof(arg4);
	
	if(fArg || fArg2 || fArg3 || fArg4 != 0.0)
	{
	    std::cout << std::endl;
	
	    std::cout << std::endl;
	    std::cout << "Дано:" << std::endl;
	    std::cout << std::endl;
	    
	    std::cout << "m (масса вещества) = " << fArg << std::endl;
	    std::cout << "Mr (Молекулярная масса = " << fArg2 << std::endl;
	    std::cout << "kJ (кдж) = " << fArg3 << std::endl;
	    std::cout << "Кол-во моль: " << fArg4 << std::endl;
	    std::cout << std::endl;
	    
	    std::cout << "Решение:" << std::endl;
	    std::cout << std::endl;
	    std::cout << "n = " << fArg << "/" << fArg2 << " = " << fArg/fArg2 << " гр/моль" << std::endl;
	    std::cout << "x = " <<  "(" << fArg/fArg2 << " гр/моль" << " * " << fArg3 << " kJ" << ")" << " / " << fArg4 << " моль " << " = " << fArg/fArg2*fArg3/fArg4 << " kJ" << std::endl;
	    
	    std::cout << std::endl;
	    std::cout << "Ответ: " << fArg/fArg2*fArg3/fArg4 << " kJ" << std::endl;
	}
	else std::cout << "ERROR: Какое то число равно нулю!" << std::endl;
	
	return 0;
}
