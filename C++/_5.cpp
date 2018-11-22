#include<iostream>
using namespace std;
int main(){

int n,j;
cin>>n;
cout<<endl;
char cr[2];
int sum=0;
for(int i=0;i<n;i++){
    for(j=0;j<3;j++){
            cin>>cr[j];
       cout<<endl;
       sum+=(int)cr[j];

    }
     cout<<sum<<endl;
    sum=0;


}

return 0;
    }
