#include <stdio.h>
void inputcetak(){
int I, N, T;
T = 0;
for (I = 1; I<=10; I++){

    scanf ("%i", &N);
        if(N == 999)
        break;
    printf("bilangannya %i\n", N);
    T = T + N;
    if (T > 1000)
    break;
}
printf ("selesai");
}
void main (){
inputcetak();

}

