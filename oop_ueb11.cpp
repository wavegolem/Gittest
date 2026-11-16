/****************************************/
/* Sebastian Klütz */
/* Gruppe: Do14, Leiter: Tom-Lasse Barth*/
/* Übungsblatt: 4, Aufgabe: 11 */
/* Datum: 09.11.2026 */
/* Status: lauffähig */
/****************************************/


// class date, this-pointer
// author:  Holger Arndt
// version: 27.03.2023

#include <iostream>

using namespace std;

class Date
{
private:
  int day;
  int month;
  int year;
  static inline const int daysPerMonth[]{ 31, 28, 31, 30, 31, 30, 31, 31, 30,
                                          31, 30, 31 };
  static const int stdYear{1970};
  static bool isLeapYear(int year)
  { return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0; }
  void checkDate();
public:
  Date()
  {
    day = month = 1;
    year = stdYear;
  }
  Date(int d, int m, int y)
  {
    day = d;
    month = m;
    year = y;
    checkDate();
  }
  int getDay() const { return day; }
  int getMonth() const { return month; }
  int getYear() const { return year; }
  void setDate(int d, int m, int y)
  {
    day = d;
    month = m;
    year = y;
    checkDate();
  }
  Date& incDay();
  void print() const { cout << day << '.' << month << '.' << year << endl; }

  string dayOfTheWeek();
};

string Date::dayOfTheWeek(){
    int w = (day +((2,6*month)) + year + year/4 + 1/4 + 5) % 7;
    string weekdays[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
    return weekdays[w];
};

void Date::checkDate()
{
  if (year < 1 || month < 1 || month > 12 || day < 1
      || (day > daysPerMonth[month - 1]
          && !(day == 29 && month == 2 && isLeapYear(year))))
    {
      day = month = 1;
      year = stdYear;
    }
}

Date& Date::incDay()
{
  ++day;
  if (day > daysPerMonth[month - 1]
      && !(day == 29 && month == 2 && isLeapYear(year)))
    {
      day = 1;
      if (++month == 13)
        {
          month = 1;
          ++year;
        }
    }
  return *this;
}

int main()
{
   Date d{30, 5, 2017};
  d.incDay().incDay().incDay();
  d.print(); // 2.6.2017
  cout << "Wochentag: " << d.dayOfTheWeek() << endl;
}
