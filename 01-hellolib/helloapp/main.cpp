#include "hello.h"
#include <iostream>

int main(int argc, const char* argv[])
{
    using namespace std;

    bool streams_ok = cin.good() & cout.good();

    if (streams_ok)
    {
        cout << "Please, say your name: ";
        string name;
        cin >> name;
        streams_ok = hello(name);
        if (streams_ok)
        {
            cout << endl;
        }
    }

    return streams_ok ? EXIT_SUCCESS : EXIT_FAILURE;
}