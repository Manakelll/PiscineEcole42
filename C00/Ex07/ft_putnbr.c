#include <unistd.h>


void ft_putnbr(int n){
    int nbr_rest=n;
    int len_n=0;
    while(nbr_rest%10!=0){
        len_n++;
        nbr_rest/=10;
        
    }
    char str_rest[len_n];
    
    for (int i =0; i<len_n;i++){
        str_rest[i]=(n%10)+48;
        
        n=n/10;
    }
    for(int i=len_n; i>=0;i--){
        write(1, &str_rest[i],1);
    }


}


