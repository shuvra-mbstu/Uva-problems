#define mx 10000007
#include<bits/stdc++.h>
using namespace std;
string st[mx],ss,s;
long long int vari1,indx=1,vari2,num;
void fun()
{
    indx=1;
    for(int i=1; i<mx; i++)
    {
        if(i%2 ==0)
        {
            vari2=i;
            vari1=1;
            while(vari1<=i && vari2>=1)
            {
                /* stringstream stt;
                stt>>vari1;
                s=stt.str();
                ss=ss+"/";
                stt>>vari2;
                s=stt.str();
                ss=ss+s;
                st[indx]=ss;*/
                if(indx==num)
                {
                    //cout<<"TERM "<<num<<" IS "<<vari1<<"/"<<vari2<<endl;
                    printf("TERM %lld IS %lld/%lld\n",num,vari1,vari2);
                    return;
                }
                indx++;
                vari1++;
                vari2--;
                // s.clear();
                // ss.clear();
            }
        }
        if(i%2 ==1)
        {
            vari1=i;
            vari2=1;
            while(vari2<=i && vari1>=1)
            {
                /*  stringstream stt;
                stt>>vari2;
                s=stt.str();
                ss=ss+"/";
                stt>>vari1;
                s=stt.str();
                ss=ss+s;
                st[indx]=ss;*/
                if(indx==num)
                {
                    printf("TERM %lld IS %lld/%lld\n",num,vari1,vari2);
                    //cout<<"TERM "<<num<<" IS "<<vari1<<"/"<<vari2<<endl;
                    return;
                }
                indx++;
                vari2++;
                vari1--;
            }
        }

    }
}
int main()
{
    while(scanf("%lld",&num)!=EOF)
    {
        fun();
    }
}
