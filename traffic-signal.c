#include<stdio.h>
#include<unistd.h>
int main(){

int red,yellow,green;
int i,j,k;
printf("Red light duration:");
scanf("%d",&red);
printf("Yellow light duration:");
scanf("%d",&yellow);
printf("Green light duration:");
scanf("%d",&green);

printf("\n Traffic Light:RED");
for(i=red;i>0;i--){
    printf("\n time remaining :%d",i);
    sleep(1);
}
printf("\n Traffic Light:YELLOW");
for(j=yellow;j>0;j--){
    printf("\n time remaining :%d",j);
    sleep(1);
}

printf("\n Traffic Light:GREEN");
for(k=green;k>0;k--){
    printf("\n time remaining :%d",k);
sleep(1);
}







return 0;
}
