#include <iostream>

using namespace std;

int main()
{
    int a=0;
    char c= 'a';
    float f = 8.45;
    double d= 69.420;
    
    cout<< "Size of char: " << sizeof(c)<<" bytes"<<endl;
    cout<< "Size of int: " << sizeof(a)<<" bytes"<<endl;
    cout<< "Size of float: " << sizeof(f)<<" bytes"<<endl;
    cout<< "Size of double: " << sizeof(d)<<" bytes"<<endl;

    return 0;
}
