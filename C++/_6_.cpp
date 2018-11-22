#include<iostream>
using namespace std;
    int main(){
    int val[5];
    int n;
    cin>>n;
    cout<<endl;

            for(int j=0;j<n;j++){
                    for(int i=0;i<5;i++){
            cin>>val[i];
        }
            if(val[0]>val[1]){
                if (val[0]>val[2]) {
                    if(val[0]>val[3]){
                        if (val[0]>val[4]) {
                            cout<<val[0]<<" ";
                        }
                        else{
                            cout<<val[4]<<" ";
                        }
                    }
                    else{
                        if(val[3]>val[4]){
                            cout<<val[3]<<" ";
                        }
                        else{
                            cout<<val[4]<<" ";
                        }
                    }

                }
                else{
                    if(val[2]>val[3]){
                        if(val[2]>val[4]){
                            cout<<val[2]<<" ";
                        }
                        else{
                            cout<<val[4]<<" ";
                        }
                    }
                    else{
                        if(val[3]>val[4]){
                            cout<<val[3]<<" ";
                        }
                        else{
                            cout<<val[4]<<" ";
                        }
                    }
                }

            }
            else{
                if (val[1]>val[2]) {
                    if(val[1]>val[3]){
                        if(val[1]>val[4]){
                            cout<<val[1]<<" ";
                        }
                        else{
                            cout<<val[4]<<" ";
                        }
                    }
                    else{
                        if(val[3]>val[4]){
                            cout<<val[3]<<" ";
                        }
                        else{
                            cout<<val[4]<<" ";
                        }
                    }
                }
                else{
                    if(val[2]>val[3]){
                       if(val[2]>val[4]){
                           cout<<val[2]<<" ";
                       }
                       else{
                           cout<<val[4]<<" ";
                       }
                    }
                    else{
                        if(val[3]>val[4]){
                            cout<<val[3]<<" ";
                        }
                        else{
                            cout<<val[4]<<" ";
                        }
                    }
                }
            }



            if(val[0]<val[1]){
                if (val[0]<val[2]) {
                    if(val[0]<val[3]){
                        if (val[0]<val[4]) {
                            cout<<val[0]<<endl;
                        }
                        else{
                            cout<<val[4]<<endl;
                        }
                    }
                    else{
                        if(val[3]<val[4]){
                            cout<<val[3]<<endl;
                        }
                        else{
                            cout<<val[4]<<endl;
                        }
                    }

                }
                else{
                    if(val[2]<val[3]){
                        if(val[2]<val[4]){
                            cout<<val[2]<<endl;
                        }
                        else{
                            cout<<val[4]<<endl;
                        }
                    }
                    else{
                        if(val[3]<val[4]){
                            cout<<val[3]<<endl;
                        }
                        else{
                            cout<<val[4]<<endl;
                        }
                    }
                }

            }
            else{
                if (val[1]<val[2]) {
                    if(val[1]<val[3]){
                        if(val[1]<val[4]){
                            cout<<val[1]<<endl;
                        }
                        else{
                            cout<<val[4]<<endl;
                        }
                    }
                    else{
                        if(val[3]<val[4]){
                            cout<<val[3]<<endl;
                        }
                        else{
                            cout<<val[4]<<endl;
                        }
                    }
                }
                else{
                    if(val[2]<val[3]){
                       if(val[2]<val[4]){
                           cout<<val[2]<<endl;
                       }
                       else{
                           cout<<val[4]<<endl;
                       }
                    }
                    else{
                        if(val[3]<val[4]){
                            cout<<val[3]<<endl;
                        }
                        else{
                            cout<<val[4]<<endl;
                        }
                    }
                }
            }
    }

    return 0;
    }
