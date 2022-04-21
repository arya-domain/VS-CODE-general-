//21BCE10901

#include <iostream>
using namespace std;

class Date
{
    public:
        int day;
        int month;
        int year;
    public:
        Date()
        {
            day = 1;
            month = 1;
            year = 1970;
        }
        Date(int d, int m, int y)
        {
            day = d;
            month = m;
            year = y;
        }
        void display()
        {
            cout << day << "/" << month << "/" << year << endl;
        }
        void increment()
        {
            day++;
            if (day > 31)
            {
                day = 1;
                month++;
                if (month > 12)
                {
                    month = 1;
                    year++;
                }
            }
        }
        void add_days(int n)
        {
            for (int i = 0; i < n; i++)
            {
                increment();
            }
        }
        int get_day()
        {
            return day;
        }
        int get_month()
        {
            return month;
        }
        int get_year()
        {
            return year;
        }
        void set_day(int d)
        {
            day = d;
        }
        void set_month(int m)
        {
            month = m;
        }
        void set_year(int y)
        {
            year = y;
        }
        
        // Operator overloading

        bool operator<(Date d)
        {
            if (year < d.get_year())
            {
                return true;
            }
            else if (year == d.get_year())
            {
                if (month < d.get_month())
                {
                    return true;
                }
                else if (month == d.get_month())
                {
                    if (day < d.get_day())
                    {
                        return true;
                    }
                }
            }
            return false;
        }
        bool operator<=(Date d)
        {
            if (year < d.get_year())
            {
                return true;
            }
            else if (year == d.get_year())
            {
                if (month < d.get_month())
                {
                    return true;
                }
                else if (month == d.get_month())
                {
                    if (day <= d.get_day())
                    {
                        return true;
                    }
                }
            }
            return false;
        }
        bool operator>(Date d)
        {
            if (year > d.get_year())
            {
                return true;
            }
            else if (year == d.get_year())
            {
                if (month > d.get_month())
                {
                    return true;
                }
                else if (month == d.get_month())
                {
                    if (day > d.get_day())
                    {
                        return true;
                    }
                }
            }
            return false;
        }
        bool operator>=(Date d)
        {
            if (year > d.get_year())
            {
                return true;
            }
            else if (year == d.get_year())
            {
                if (month > d.get_month())
                {
                    return true;
                }
                else if (month == d.get_month())
                {
                    if (day >= d.get_day())
                    {
                        return true;
                    }
                }
            }
            return false;
        }
        bool operator==(Date d)
        {
            if (year == d.get_year())
            {
                if (month == d.get_month())
                {
                    if (day == d.get_day())
                    {
                        return true;
                    }
                }
            }
            return false;
        }
        bool operator!=(Date d)
        {
            if (year != d.get_year())
            {
                return true;
            }
            else if (year == d.get_year())
            {
                if (month != d.get_month())
                {
                    return true;
                }
                else if (month == d.get_month())
                {
                    if (day != d.get_day())
                    {
                        return true;
                    }
                }
            }
            return false;
        }
        Date operator++()
        {
            increment();
            return *this;
        }
        Date operator+(int n)
        {
            Date d;
            d.set_day(day);
            d.set_month(month);
            d.set_year(year);
            d.add_days(n);
            return d;
        }
};
int main(){

    // taking two date input from user
    Date d1, d2;
    cout << "Enter 1st date : \n";
    cout <<"Day : " ;
    cin >>d1.day ;
    cout << "Month : ";
    cin >> d1.month ;
    cout << "Year :";
    cin >> d1.year;
    cout << "Enter 2nd  date : \n";
    cout <<"Day : " ;
    cin >>d2.day ;
    cout << "Month : ";
    cin >> d2.month ;
    cout << "Year :";
    cin >> d2.year;

    // displaying both dates
    cout << "Date 1: "<<endl;
    d1.display();
    
    cout << " "<<endl;

    cout << "Date 2: "<<endl;
    d2.display();

    cout << " "<<endl;

    // checking if date 1 is less than date 2
    cout << "Checking if date 1 is less than date 2: ";
    if (d1 < d2)
    {
        cout << "True"<<endl;
    }
    else
    {
        cout << "False"<<endl;
    }

    cout << " "<<endl;

    // checking if date 1 is less than or equal to date 2
    cout << "Checking if date 1 is less than or equal to date 2: ";
    if (d1 <= d2)
    {
        cout << "True"<<endl;
    }
    else
    {
        cout << "False"<<endl;
    }
    
    cout << " "<<endl;

    // checking if date 1 is greater than date 2
    cout << "Checking if date 1 is greater than date 2: ";
    if (d1 > d2)
    {
        cout << "True"<<endl;
    }
    else
    {
        cout << "False"<<endl;
    }

    cout << " "<<endl;

    // checking if date 1 is greater than or equal to date 2
    cout << "Checking if date 1 is greater than or equal to date 2: ";
    if (d1 >= d2)
    {
        cout << "True"<<endl;
    }
    else
    {
        cout << "False"<<endl;
    }

    cout << " "<<endl;

    // checking if date 1 is equal to date 2
    cout << "Checking if date 1 is equal to date 2: ";
    if (d1 == d2)
    {
        cout << "True"<<endl;
    }
    else
    {
        cout << "False"<<endl;
    }

    cout << " "<<endl;

    // checking if date 1 is not equal to date 2
    cout << "Checking if date 1 is not equal to date 2: ";
    if (d1 != d2)
    {
        cout << "True"<<endl;
    }
    else
    {
        cout << "False"<<endl;
    }

}
