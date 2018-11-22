#include<iostream>
using namespace std;
    int main(){

        int val=0;//final vallue
        int line;//input line
        cin>>line;
        cout<<endl;
        for(int i=0;i<line;i++){//line loop

            int number[10];//10 int value

            for(int j=0;j<10;j++){//this loop for get value

                cin>>number[j];//geeting value
                int m=0;//temporary value for
                for(int k=1;k<=number[j];k++){//loop for check condition
                    if(number[j]%k==0){
                        m=m+1;
                    }
                }
                if(m==2){
                    val=val+1;//if val>2 then number are not prime
                }
            }
            cout<<val<<endl;
            val=0;
            cout<<endl;
        }

    return 0;
    }
