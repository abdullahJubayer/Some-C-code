#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    cout<<endl;
        while(n!=0){

            unsigned int val;
            cin>>val;
            cout<<endl;
            double squar=sqrt(val);//Example :9 = (3x3) = 3
            //cout<<squar<<endl;
            int intsquar=(int)sqrt(val);
            //int ss=(int)Math.pow(squar, 2);
            //cout<<intsquar<<endl;
            if(intsquar==squar){
                cout<<"Yess"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            n--;
        }



return 0;

}
