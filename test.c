#include <stdio.h>

int main(){
    int n,i,s=0;
    printf("enter the numbers for an array\n");
    scanf("%d",&n);
    
    int a[n];
    for (i=0; i<n; i++){
        printf("enter any number\n");
        scanf("%d",&a[i]);        

    }
    int max=a[0],min=a[0];
    for (i=0; i<n; i++){
        s += a[i];
        
        if (max <= a[i]){
            max = a[i];   
        }

        if (min >= a[i]){
            min = a[i];   
        }

    }
    float avg = s/n;
    printf( "max:%d\n",max);
    printf( "min:%d\n",min);
    printf( "sum:%d\n",s);
    printf( "avg:%f\n",avg);
    printf("function complete");
    return 0;
};
