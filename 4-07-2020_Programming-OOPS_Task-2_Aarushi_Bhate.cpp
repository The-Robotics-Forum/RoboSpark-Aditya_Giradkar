#include<bits/stdc++.h>
using namespace std;

class Student {
public :

    string name ;
    

    Student(string n)
    {
        name = n;
    }
    void show_rank(int r)
    {
        cout<<"Rank- " << r << endl<<endl;
        
    }
    void show_rank(Student &n,int r)
    {
        cout << "Name- " << n.name << endl ;
        cout << "Rank- " << r << endl<<endl;
    }
    void show_rank(Student &n)
    {
        cout  << "Name-" << n.name << endl;
        cout << "No Rank "<< endl<<endl;
    }
};

int main ()
{
    int a = 1;
    Student s("Aarushi Bhate");
    s.show_rank(a);
    s.show_rank(s,a);
    s.show_rank(s);
}