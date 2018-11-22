#include<stdio.h>
    int main(){
    int i,n,m,count1=0,count2=0;
    scanf("%d",&n);
  for(i=1;i<=n;i++){
            scanf("%d",&m);
            if(m>=0){
            count1=count1+1;
            }
            else if(m<0){
                count2=count2+1;
            }
        }

        printf("%d %d\n",count1,count2);
    return 0;
}
