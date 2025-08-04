#include <stdio.h>
int main(){
    float a,b;
    printf("Nhập a =");
    scanf("%f",&a);
    printf("Nhập b =");
    scanf("%f",&b);
    if(a != 0){
        printf("Vô nghiệm");
    }else{
        float x;
        x=-b/a;
        printf("Nghiệm là %f, x ");
    }
}    
