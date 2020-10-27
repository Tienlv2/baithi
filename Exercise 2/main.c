//  Exercise 2

#include <stdio.h>
int main(){
    int n;
    printf("Nhap n=");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Nhap so arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    float t=0;
    for(int i=0;i<n;i++){
        t+=arr[i];
    }
    float tcb=t/n;
    printf("Trung binh cong cua mang la %f",tcb);
}
