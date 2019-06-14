#include <stdio.h>
#include <stdlib.h>
// DICKY IBROHIM
int main()
{
    int nilai [5]={70, 60, 80, 100, 90}; //5 jumlah nilai
    int input, loop1;
    //Memanggil
    //printf ("Inputkan nilai siswa= %d", nilai [2]); // Mulai 0
    // INPUT
    //printf ("Input nilai siswa ke= ");
    //scanf ("%d",&input);
    //MENAMPILKAN
    //printf ("Nilai Siswa ke %d= %d",input, nilai[input-1]);
    //LOOP

    for (loop1=0;loop1<=4;loop1++)
    {
         printf ("Nilai Siswa ke %d= %d\n",loop1+1, nilai[loop1]);
    }
    return 0;
}
