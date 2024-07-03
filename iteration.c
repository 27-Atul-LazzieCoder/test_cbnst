#include<stdio.h>
#include<math.h>

float f(float x){
    return x*x*x-9*x +1;
}
float g1(float x){
    return pow((9*x-1),(10.0 / 3.0));
}
float g2(float x){
    return (1+x*x*x)/9;
}
void main()
{
    float x1=2 , x2 =3, xm, xn, e = 0.003;
    float diff;
    int ch, i =0;
    printf("Enter value for : ");
    scanf("%d", &ch);
    xm=(x1 + x2)/2;
    if(ch==1 ){
        do{
            xn =g1(xm);
            diff = fabs(xn - xm);
            xm = xn;
            printf("\n value of g1 %d root:  %f",i+1, xn);
        }while(diff>e);
    }
    else{
        do{
            xn = g2(xm);
            diff = fabs(xn -xm);
            xm = xn;
            printf("\n value of g2 %d root:  %f",i+1, xn);
        }while (diff < e);
    }
}        