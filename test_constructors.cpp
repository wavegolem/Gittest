#include <iostream>

using namespace std;

class Date{
    private:
    static inline int num_dates{0};
        static const int stdYear = 1970;
        int day;
        int month;
        int year;

    public:
        void setDate(int d, int m, int y);
        void print();
        Date(int d = 1, int m = 1, int y = stdYear){
                day = d;
                month = m;
                year = y;
                ++num_dates;
                cout << this << endl;
                print();
            }
        ~Date(){--num_dates;}
        static int printnum() { return num_dates; };
};



void Date::setDate(int d, int m, int y){
    day = d;
    month = m;
    year = y;
};

void Date::print(){
    cout << day << "." << month << "." << year << endl;
};

int main(){
    cout << Date::printnum() << endl;
    Date d1(1, 2, 3);
    cout << Date::printnum() << endl;
    Date d2(1 ,2);
    cout << Date::printnum() << endl;
    Date d3(9);
    cout << Date::printnum() << endl;
    {
        Date d4;
        cout << Date::printnum() << endl;
    }
    cout << Date::printnum() << endl;
    return 0;
}