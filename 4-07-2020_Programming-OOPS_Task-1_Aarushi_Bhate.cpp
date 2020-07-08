#include<bits/stdc++.h>
using namespace std;

class Students
{
public:
    string name;
    int year;
    int roll;
    float cgpa;
    int sum;
    float y;
    int *a = new int[5];

    int getTotal()
    {
        cout<<"\nEnter the marks of 5 subjects out of 100----->";
        

        for (int i =0;i<5;i++)
        {
            cin >> a[i];
           sum = sum + a[i];

           
        }
        return sum ;

    }
    int getcgpa(int *marks)
    {
        int s = 0;
        for (int i =0;i<5;i++)
        {
           s= s + a[i];
           
        }

        y = (s/5)/9.5;
        return y;

    }
    void showdetails()
    {
        getcgpa(a);
        cout<< "Name of Students--->>" << name << endl;
        cout<< "Roll no of student--->>" << roll << endl;
        cout<< "Year--->>" << year << endl;
        cout<< "CGPA--->>" << y << endl;
    }
    void getinput()
        {
            cout << "\nplz enter the following details";
            cout << "\nName-----> ";
            cin >> name ;
            cout << "\nroll no-----> ";
            cin >> roll;
            cout << "\nyear------>" ;
            cin >> year;

        }

};
int main ()
{
    Students s;
    s.getinput();
    s.getTotal();
    s.showdetails();
}
