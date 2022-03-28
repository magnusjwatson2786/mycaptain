#include <iostream>

using namespace std;

int main()
{
   int data[5]= {1,2,3,4};

   for(int i = 0; i < 4; ++i)
      cout << endl << *(data + i);

   return 0;
}
