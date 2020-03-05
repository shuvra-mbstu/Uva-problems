#include<bits/stdc++.h>
using namespace std;
class Mbstu
{
    string name;
public:
    Mbstu(){};
    void getname(string num)
    {
        name=num;

    }
void show()
{
  cout<<name<<endl;
}
};
class employee:public Mbstu{
int salary;
public:
    void employesel(int s)
    {
        salary=s;

    }
    void putsel()
    {
       cout<<"employee salarry="<<salary<<endl;
    }
};
class student:public Mbstu{
int roll,grade;
public:
    void getstudent(int r,int g)
    {
        roll=r;
        grade=g;

    }
    void putstu()
    {
       cout<<"roll="<<roll<<endl;
        cout<<"grade="<<grade<<endl;
    }
};
int main()
{
   employee em;
   em.getname("abc");
   em.employesel(1000);
   em.show();
   em.putsel();
   student st;
   st.getname("Student");
   st.show();
   st.getstudent(1,4);
   st.putstu();

}
