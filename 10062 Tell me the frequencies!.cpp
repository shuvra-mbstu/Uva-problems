#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
  vector<int>vt[150];
    int arr[150],i,j,k,fin[150],len,l;
    while(cin>>st)
    {
        l=0;
     vt.clear();
        memset(arr,0,sizeof(arr));
        memset(fin,0,sizeof(fin));
      //  memset(v)
        len=st.size();
        for(i=0; i<len; i++)
        {
            k=st[i];
            if((k>32)&&(k<128))
                arr[k]++;
                if(l<arr[k])
                {
                    l=arr[k];
                }
        }
      //  j=1;
      //  while(j<=l){
            for(i=31;i<=127;i++){
            if(arr[i]>0)
            {
               vt[arr[i]].push_back(i);
              //  cout<<vt[arr[i]][i]<<" "<<i<<endl;
            }
        }
        for(i=1;i<=l;i++)
        {
            int siz=sizeof(vt[i]);
            if(vt[i]>0)
            {
                   // sort(vt[i].begin(),vt[i].end());
                for(int m=siz-1;m>=0;m--)
                {
                    cout<<vt[i][m]<<" "<<i<<endl;
                }
            }
        }
        cout<<endl;
        //sort(vt.begin(),vt.end());
    }
    return 0;
}
