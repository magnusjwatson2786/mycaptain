#include <iostream>

using namespace std;

int main()
{
    int age;
cout<<"Enter Age: ";
cin>> age;
if(age>=18){
    cout<< "Yayy!! You can vote!"<<endl;
}else{
    cout<< ":-( Wait "<< 18-age <<" year(s) to vote, SED LYF"<<endl;
}

return 0;
}
