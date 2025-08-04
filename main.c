#include <stdio.h>
int main(){
    int A;
    printf("Nhập điểm của bạn :");
    scanf("%d",&A);
    if(A >= 9){
        printf("Xuất sắc");
        
    }else{
            if(A >= 8){
                printf("Giỏi");
        }else{
                    if(A >= 7){
                        printf("Khá");
                    }else{
                        if(A >= 6){
                            printf("Trung Bình");
                        
                        }else{
                            printf("Yếu");
                                }
                        }
            }
        }
}