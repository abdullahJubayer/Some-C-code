#include<iostream>
using namespace std;

int main(){

     int n;
     cin>>n;
     cout<<endl;
        while(n!=0){
            int flag=0;
          unsigned long int val;
           cin>>val;
        //if(val>0 && val<10000001){
           for(int i=0;i<=val;i++){
               int temp=i*i;
               if(temp==val){
                   flag=1;
                   break;
           }else{
                   flag=flag+0;
               }
        }

           if(flag==1){
              cout<<"Yes"<<endl;
           }else{
              cout<<"No"<<endl;
           }
           n--;
    }

       // }




return 0;
}
