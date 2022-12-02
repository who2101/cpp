#include <iostream>
#include <string>

using namespace std;

int main()
{
    string arg, arg2, arg3, arg4;
    float fArg, fArg2, fArg3, fArg4;
	
    cout << "Введите массу вещества" << endl;
    cout << endl;
    cin >> arg;
    scout << endl;

    cout << "Введите молекулярную массу" << endl;
    cout << endl;
    cin >> arg2;
    cout << endl;
	
    cout << "Введите кол-во kJ" << endl;
    cout << endl;
    cin >> arg3;
    cout << endl;
    
    cout << "Введите кол-во моль" << endl;
    cout << endl;
    cin >> arg4;
    cout << endl;
	
    fArg = stof(arg);
    fArg2 = stof(arg2);
    fArg3 = stof(arg3);
    fArg4 = stof(arg4);
	
    if(fArg || fArg2 || fArg3 || fArg4 <= 0.0)
    {
         cout << "ERROR: Какой-то из аргументов меньше или равен 0" << endl;

         return 0;
    }

    cout << endl;
    cout << "Дано:" << endl;
    cout << endl
    cout << endl

    cout << "m (масса вещества) = " << fArg << endl;
    cout << "Mr (Молекулярная масса = " << fArg2 << endl;
    cout << "kJ (кдж) = " << fArg3 << endl;
    cout << "Кол-во моль: " << fArg4 << endl;
    cout << endl;
	    
    cout << "Решение:" << endl;
    cout << endl;
    cout << "n = " << fArg << "/" << fArg2 << " = " << fArg/fArg2 << " гр/моль" << endl;
    cout << "x = " <<  "(" << fArg/fArg2 << " гр/моль" << " * " << fArg3 << " kJ" << ")" << " / " << fArg4 << " моль " << " = " << fArg/fArg2*fArg3/fArg4 << " kJ" << endl;
	    
    cout << endl;
    cout << "Ответ: " << fArg/fArg2*fArg3/fArg4 << " kJ" << endl;
	
    return 0;
}
