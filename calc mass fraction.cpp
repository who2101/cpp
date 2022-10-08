#include <iostream>

using namespace std;

int main()
{
    string arg, arg2;
  
    cout << "Write first argument" << endl;
    cin >> arg;
    
    cout << "Write second argument" << endl;
    cin >> arg2;

    if(arg[0] != '\0' || arg2[0] != '\0')
    {
        float iArg = stof(arg); float iArg2 = stof(arg2);
        
        if(iArg != 0.0 || iArg2 != 0.0)
        {
            cout << "Result: " << ((iArg2/(iArg+iArg2))*100) << endl;
            cout << "Result: " << ((iArg*iArg2)/100) << endl;
        }
    }

    return 0;
}
