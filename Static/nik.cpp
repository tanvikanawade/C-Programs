#include<iostream>
using namespace std;

class staticDemo
{
public:
    string name;
    int rollNo;
   static string CollageName;
   
public:
    staticDemo(const string name,int rollNo)
    {
        this->name=name;
        this->rollNo=rollNo;
        
    }
    void display()
    {
        std::cout<<name << rollNo << CollageName <<std::endl;
       
    }
};
 string staticDemo::CollageName="amrutvahini";
int main()
{
    staticDemo d1("nikhil",101);
    d1.display();
	staticDemo d2("Shriram",102);
    d2.display();
    return 0;
}