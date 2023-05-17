#include <unistd.h>


void ft_print_comb2(void){
    for (int i =0; i<10;i++){
        for(int j=0; j<10;j++){
            for (int k=i;k<10;k++){
                for(int l=j;l<10;l++){
                    if( j==l && k==i ){
                        continue;
                    }
                    else{
                        char c_i = 48+i;
                        char c_j = 48+j;
                        char c_k = 48+k;
                        char c_l = 48+l;
                        write(1, &c_i, 1);
                        write(1, &c_j, 1);
                        write(1, " ", 1);
                        write(1, &c_k, 1);
                        write(1, &c_l, 1);
                       
                        if (i==9 && j==8 && k==9 && l==9){
                            break;
                        }
                        else{
                            write(1, ",",1);
                            write(1, " ", 1);
                        }
                        
                    }
                }

            }
        }
    }
}


int main(){
    ft_print_comb2();
    return 0;
}