#include<stdio.h>

void swap(int *p, int *q){
    int temp;

    temp=*p;
    *p=*q;
    *q=temp;
}
int main(){
    int activity_num[100],start_time[100],end_time[100],n,i,j,ending_time;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        {
            scanf("%d%d",&start_time[i],&end_time[i]);
            activity_num[i]=i+1;
        }



    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(end_time[j]<end_time[i])
            {
                swap(&end_time[j],&end_time[i]);
                swap(&start_time[j],&start_time[i]);
                swap(&activity_num[j],&activity_num[i]);
            }
        }
    }

    printf("Seclected Activity Number: %d ",activity_num[0]);
    ending_time=end_time[0];
    for(i=1;i<n;i++)
       {
           if(start_time[i]<ending_time)
            continue;
           else{
            printf("%d ",activity_num[i]);
            ending_time=end_time[i];
           }
       }



}
