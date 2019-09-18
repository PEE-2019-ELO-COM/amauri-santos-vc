#include <stdio.h>
/*SAÍDAS ESPERADAS:

0 - 00111111
1 - 00000011
2 - 01011011
3 - 01001111
4 - 01100110
5 - 01101101
6 - 01111101 *Com o segmento superior
7 - 01000111 *Com o segmento do meio
8 - 01111111
9 - 01101111 *Com o segmento inferior

Os * no trabalho de elô dig eram don't care (X)

*/

int main(){
    while(1){
        /*LEITURA DO NUMERO DE ENTRADA*/
        char in;
        printf("\nInsert number:\n");
        scanf("%d", &in);

        /*LÓGICA DE ATRIBUIÇÃO DOS VALORES DOS BITS AO CHAR OUT*/
        char A = in&0x01, B = in&0x02?1:0, C = in&0x04?1:0, D = in&0x08?1:0, K1 = C&B^A&C, g = C|B|D, f = !B&!A|D|K1, K2 = !A&!C, e = !A&B|K2, d = D|K1|!C&B|K2, c = !A&!B|!K2, b = !K1, a = K1|D|B|K2, out=a+2*b+4*c+8*d+16*e+32*f+64*g;

        /*PRINT DOS BITS DA CHAR OUT*/
        //for (int i = 0; i < 8; i++) {
            printf("%d%d%d%d%d%d%d%d", out&0x80?1:0, out&0x40?1:0, out&0x20?1:0, out&0x10?1:0, out&0x08?1:0, out&0x04?1:0, out&0x02?1:0, out&0x01);
        //}
    }
    return 0;
}
