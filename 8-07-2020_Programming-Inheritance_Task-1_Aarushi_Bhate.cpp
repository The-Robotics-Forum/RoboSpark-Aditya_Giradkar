#include<iostream>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;

class Biodata {
    protected:
    
    char name[50];
    char surname[50]; 
    char address[50];
    int mobile_no; 
    char dob[50];
    char name_of_organization[50];
    char job[50];
    char project[50];
    int year_of_passing;
    int cgpa;
    char college_name[50];
    int branch;
    

};

class Personal_data:public Biodata {
    public:
    //int name;
    void display_data1()
    {   
        std::cout<<"----------Personal Data----------- "<<endl;
        std::cout<<"Name: ";//<<name;
        std::cin>>name;
        std::cout<<"Surname: ";//<<surname;
        std::cin>>surname;
        std::cout<<"Mobile No.: ";//<<mobile_no;
        std::cin>>mobile_no;
        std::cout<<"Address: ";//<<dob;
        std::cin>>address;
        fflush(stdin);
        std::cout<<"DOB: ";//<<dob;
        std::cin>>dob;
        fflush(stdin);
    //surname
    //address
    //mobile.no
    //dob}}
    }
};
class Professional_data:public Biodata{
        public:
        void display_data2(){
        std::cout<<"----------Professional Data----------- "<<endl;
        std::cout<<"Name of Organization: ";
        std::cin>>name_of_organization;
        std::cout<<"Job Profile: ";
        std::cin>>job;
        std::cout<<"Project: ";
        std::cin>>project;
        }
    //name of organization 
    //job profile
    //project
    
        
};
class Academic_data:public Biodata{
    public:
        void display_data3(){
        std::cout<<"----------Academic data----------- "<<endl;
        std::cout<<"Year of Passing: ";
        std::cin>>year_of_passing;
        std::cout<<"CGPA: ";
        std::cin>>cgpa;
        std::cout<<"College Name: ";
        std::cin>>college_name;
        std::cout<<"Branch: ";
        std::cin>>branch;
            }
    //year of passing
    //cgpa
    //college name
    //branch
};
void call_all(){

Personal_data object1;
object1.display_data1();
Professional_data object2;
object2.display_data2();
Academic_data object3;
object3.display_data3();
}

int main(){
 call_all();
 return 0;
}

