// Arthur de Lima Hernandes
// 15552518

#include <stdio.h>
#include <stdlib.h>

int c = 0;

void indent(int n) {
  for (int i=0;i<n;i++) {
    putchar('\t');
  }
}

void hanoi(char ori, char dst, char aux, int nro, int chamada) {
  c++;
  indent(chamada);
  printf("%02d - entrou no H(%d) \n", c, nro);

	if(nro == 1) {
    indent(chamada);
    printf("-> Move de %c", ori);
    printf(" para %c\n", dst);
	}
	else {
		hanoi(ori, aux, dst, nro-1, chamada+1);
    hanoi(ori, dst, aux, 1, chamada+1);
		hanoi(aux, dst, ori, nro-1, chamada+1);
	}

  indent(chamada);
  // indent(chamada);
  printf("%02d - retornou o H(%d) \n", c, nro);
}

void main (void) {
	hanoi('A', 'B', 'C', 4, 0);
}