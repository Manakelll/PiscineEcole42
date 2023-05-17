#include <unistd.h>


void ft_print_comb(void){
    for(int i = 0;i<10;i++){
        for (int j =i;j<10;j++){
            for(int k=j;k<10;k++){
                if(j==i || k==j || k==i ){
                   
                    continue;
                }
                else{
                    char c_i = 48 + i;
                    char c_j = 48 + j;
                    char c_k = 48 + k;
                    write(1,&c_i,1);
                    write(1,&c_j,1);
                    write(1,&c_k,1);
                    if (!(i==7 && j==8 && k==9)){
                        write(1,",",1);
                        write(1," ",1);

                    }
                    

                }
            }
        }
    }
}


