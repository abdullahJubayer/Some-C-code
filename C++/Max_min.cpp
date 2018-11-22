#include<iostream>
using namespace std;

    int main(){

        int n;
        int number[5];
        cin>>n;
        cout<<endl;
        for(int i=0;i<n;i++){

            for(int j=0;j<5;j++){

                cin>>number[j];
                }

                int max=number[0];
                int min=number[0];

                for(int k=1;k<5;k++){

                    if(max<number[k]){

                        max=number[k];

                    }
                    if(min>number[k]){

                        min=number[k];

                    }

        }
        cout<<max<<" "<<min;
        cout<<endl;
        }

    return 0;
    }
