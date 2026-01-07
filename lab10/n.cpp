#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

bool compareDates(Date& d1, Date& d2) {
    if (d1.year != d2.year) return d1.year < d2.year;
    if (d1.month != d2.month) return d1.month < d2.month;
    return d1.day < d2.day;
}

int main() {
    vector<Date> dates;
    string input;

    while (true) 
    {
        int day, month, year;
        cin >> day;

        if (day == 0) break;

        cin >> month >> year;

        Date d = {day, month, year};
        dates.push_back(d);
    }

    sort(dates.begin(), dates.end(), compareDates);

    
    for (int i = 0; i < dates.size(); i++) 
    {
        printf("%02d %02d %04d\n", dates[i].day, dates[i].month, dates[i].year);
    }

    return 0;
}