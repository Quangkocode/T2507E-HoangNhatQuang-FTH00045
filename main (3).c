#include <stdio.h>
int main(){
    int A;
    printf("Nhập Điểm :");
    scanf("%d",&A);
    if(A >= 9){
        printf("Xuất sắc!");

    }else{
        if(A >= 8){
            printf("Giỏi!");
        }else{
            if(A >= 6){
                printf("Khá!");
            }else{
                if(A >=5 ){
                    printf("Trung bình!");
            
                }else{    
                    printf("Yếu!");
                }
            }
        }
    }    
}