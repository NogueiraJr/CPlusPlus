//Concatenate String Objects

#include <iostream>
using namespace std;

int main()
{
    string s1, s2, result;

    cout << "Enter string s1: ";
    getline (cin, s1);

    cout << "Enter string s2: ";
    getline (cin, s2);

    result = s1 + s2;

    cout << "Resultant String = "<< result;

    return 0;
}

//Enter string s1: C++ Programming
//Enter string s2:  is awesome.
//Resultant String = C++ Programming is awesome.

-----------------------------------------------------

//Concatenate C-style Strings

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[50], s2[50];

    cout << "Enter string s1: ";
    cin.getline(s1, 50);

    cout << "Enter string s2: ";
    cin.getline(s2, 50);

    strcat(s1, s2); 

    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2;

    return 0;
}

//Enter string s1: I love        
//Enter string s2:  C++ programming 
//s1 = I love C++ programming
//s2 =  C++ programming
