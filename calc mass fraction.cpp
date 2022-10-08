#include <iostream>

using namespace std;

int main()
{
    int type;
    string arg, arg2;

    cout << "Write type of calculate mass (1 or 2)" << endl;
    cin >> type;

    cout << "Write first argument" << endl;
    cin >> arg;
    
    cout << "Write second argument" << endl;
    cin >> arg2;

    if(arg[0] != '\0' || arg2[0] != '\0')
    {
        float fArg = stof(arg); float fArg2 = stof(arg2);
        
        if(fArg != 0.0 || fArg2 != 0.0)
        {
            if(type == 1) cout << "Result: " << ((fArg2/(fArg+fArg2))*100) << endl;
            else if(type == 2) cout << "Result: " << ((fArg*fArg2)/100) << endl;
        }
    }

    return 0;
}
