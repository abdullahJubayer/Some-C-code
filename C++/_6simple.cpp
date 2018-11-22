#include<iostream>
using namespace std;

    int main(){

        int ar[5];
        int n,i,j;
        cin>>n;
        cout<<endl;
        for(i=1;i<n;i++){
            for(j=0;j<5;j++){
                cin>>ar[j];
                cout<<endl;
            }
        }
        int max=ar[0];
        int min=ar[0];
            if(ar[0]<ar[i]){
                max=ar[i];
                cout<<max<<" ";
            }


    return 0;
    }
