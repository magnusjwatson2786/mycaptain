#include <iostream>
 
using namespace std;
 
class Time
{
    private:
        int seconds,hh,mm,ss;
    public:
        void take_time(void){
            cout << "Enter time: ";
            cout << "Hours?";
            cin >> hh;
            cout << "Minutes?";
            cin >> mm;
            cout << "Seconds?";
            cin >> ss;
        }
        
        void convert_seconds(void){
            seconds = hh*3600 + mm*60 + ss;
        }
        
        void display_time(void){
            cout << "The time is = " << hh << ":"<< mm << ":"<< ss << endl;
            cout << "Time in total seconds: " << seconds;
        }
};
 
int main()
{
    Time tobj;
     
    tobj.take_time();
    tobj.convert_seconds();
    tobj.display_time();
     
    return 0;
}
