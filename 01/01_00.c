#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void ft_print_alphabet(void){
    char n;// long short int float; um tipo de dados é só uma forma elegante 
    // de dizer ao computador para reservar ou alocar um determinada quantidade de slot de memoria
    // ex: int são 4 bytes char são 1 byte
    //[][][][][][][][] -> 1 byte char

    //[][][][][][][][] -> 2 byte short
    //[][][][][][][][] 

    //[][][][][][][][] -> 4 byte int
    //[][][][][][][][]
    //[][][][][][][][]
    //[][][][][][][][]
    n = '`';//96;
    n = 0x60;
    while (++n < 123)
    {
     write(1,&n,1);   
    }
}

void ft_print_alphabet2(void){
    char n;
   // n = '`';//96;
    n = 0x60;
    while (++n < 0x7B /*'z'*/)
    {
     write(1,&n,1);   
    }
}

void contar(int limite){
     int count = 0;
    int n;
    while (count++ <= limite)
    {
        n = count+47;
        write(1,(&n),1);
        write(1,"\n",1);
    }
}
/*void contar(){
     int count = 47;

    while (count++ < 57)
    {
        write(1,&count,1);
        write(1,"\n",1);
    }
}*/

int main(void)
{ 
 
/*  int fd =    open("texto_aqui.txt",O_RDWR | O_CREAT, 0600);
    write(fd,"Manuel",6);

    printf("%d\n",fd);
*/
    ft_print_alphabet();
    printf("\n");
    ft_print_alphabet2();
    printf("\n");

    return 0;
}
