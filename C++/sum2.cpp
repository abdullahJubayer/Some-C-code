#include<iostream>
using namespace std;

    int main(){
    int n;
    int student;
    double sum=0.0;
    cin>>n;
    for(int i=0;i<n;i++){

        cin>>student;

        int marks[student];

        for(int j=0;j<student;j++){
                cin>>marks[j];
                sum=sum+marks[j];
        }
        double result=sum/student;
        printf("%.2lf\n",result);
        sum=0;
        cout<<endl;
    }

    return 0;
    }
