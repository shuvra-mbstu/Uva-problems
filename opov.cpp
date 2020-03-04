#include<bits/stdc++.h>
using namespace std;
class player
{
 string x;
 int y;
 public:
 player(){}
 player (string a,int b){
 x=a;
 y=b;
 }
 void print()
 {
     cout<<x<<" "<<y<<endl;
 }
 player operator+(player);
};
player player ::operator +(player ob)
{
 player temp;
 temp.x=x+ob.x;
 temp.y=y+ob.y;
 return temp;
}
int main()
{
    player n1("jen",25),n2("che",25),n3;
    n3=n1+n2;
    n3.print();

}
