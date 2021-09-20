//Length of String Object

#include <iostream>
using namespace std;

int main() {
    string str = "C++ Programming";

    // you can also use str.length()
    cout << "String Length = " << str.size();

    return 0;
}

//String Length = 15

//-------------------------------

//Length of C-style string

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "C++ Programming is awesome";

    cout << "String Length = " << strlen(str);

    return 0;
}

//String Length = 26
