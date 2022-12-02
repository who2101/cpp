#include <iostream>

using namespace std;

int main()
{
    int type; 
    float fArg, fArg2; 
     string arg, arg2;

    cout << "Write type of calculate mass (1 or 2)" << endl;
    cin >> type;

    cout << "Write first argument" << endl;
    cin >> arg;
    
    cout << "Write second argument" << endl;
    cin >> arg2;

    fArg = stof(arg); fArg2 = stof(arg2);
        
    if(fArg || fArg2 <= 0.0) 
    {
        cout << "ERROR: Одно из чисел равно нулю" << endl;

        return;
    }

    if(type <= 0 || > 2) cout << "ERROR: Неправильное значение типа" << endl;
    if(type == 1)
    {
        cout << "Result: " << ((fArg2/(fArg+fArg2))*100) << endl;

        return 0;
    }

    cout << "Result: " << ((fArg*fArg2)/100) << endl;

    return 0;
}
