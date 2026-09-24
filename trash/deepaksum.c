#include <stdio.h>

int main(){

int t;
scanf("%d",&t);


for (int i=0; i<t;i++){
int x,y;
scanf("%d",&x);
scanf("%d",&y);

int z=x-y;

if (z<0) z=-z;

if (z==0){
    printf("1\n");
}
else{
printf("%d\n",z);}




int a[x+y];

    for(int i=0;i<x;i++){
a[i]=1;

    }
    for(int i=x;i<x+y;i++){

        a[i]=-1;

    }


    for(int i=0;i<x+y;i++){
        printf("%d ",a[i]);
    }
}





printf("\n");
    return 0;
}