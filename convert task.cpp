#include <iostream>

// хуета, которую написал по фасту на информатике.

int main()
{
  std::string arg, arg2, arg3, arg;
  int iArg, iArg2, iArg3, iArg4;
  
  std::cin >> arg
  std::cin >> arg2
  std::cin >> arg3
  std::cin >> arg4
    
  iArg = stoi(arg);
  iArg2 = stoi(arg2);
  iArg3 = stoi(arg3);  
  iArg4 = stoi(arg4); 
  
  if(iArg && iArg2 && iArg3 && iArg4 != 0)
  {
    int bits = iArg*iArg2*iArg3;
    
    int bytes = bits*iArg4;
    
    std::cout << "Ответ: " << bits << " Байт и " << bytes << " бит" << std:endl;
  }
  
  return 0;
}
