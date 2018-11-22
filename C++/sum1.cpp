#include<iostream>
using namespace std;

    int main(){

        int n,sum=0,result;
        int number[5];
        cin>>n;
        cout<<endl;
        for(int i=0;i<n;i++){

            for(int j=0;j<5;j++){

                cin>>number[j];
                sum=sum+number[j];

            }
            result=sum/5;
            cout<<result<<endl;
            sum=0;
            cout<<endl;
        }


    return 0;
    }
