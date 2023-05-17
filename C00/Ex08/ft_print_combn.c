#include <unistd.h>

void printcomb(char array[], int n,  int index, int currentNum){
    if (index ==n){
        for(int i =0; i<n; i++){
            write(1, &array[i],1);
        }
        write(1, ",",1);

    }
    for (int i = currentNum; i<10; i++){
        array[index]=i+48;
        printcomb(array, n, index+1, i+1);
    }

}

void ft_print_combn(int n){
    char array[n];
    printcomb(array, n, 0, 0);
     


    }



int main(){
    ft_print_combn(6);
}