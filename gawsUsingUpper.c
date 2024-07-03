#include<stdio.h>
#include<math.h>

int main(){
    int n;
    float a[10][10];
    printf("enter the unknown values: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0; j<n+1; j++){
            scanf("%f",&a[i][j]);
            for(i=0;i<n; i++){
                for(j=0; j<n+1; j++){
                    printf("\t%f",a[i][j]);
                }
                printf("/n");
            }
            for(i=0; i<n-1; i++){
                for(j=i+1; j<n; j++){
                    int u = a[j][i] / a[i][i];
                    for(int k=0; k<n+1; k++){
                        a[j][k]= a[j][k]+ u *a[i][k];
                }
            }
        }
    }
}}