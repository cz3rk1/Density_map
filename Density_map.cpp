#include <iostream> //Mapa gestosci
using namespace std ;
const int N=10;

void wejscie(int T[N][N]){
    int TT[N][N] = { {0,0,0,1,1,0,0,1,0,1},
                     {1,1,0,1,0,0,1,1,1,0},
                     {0,0,0,1,1,0,0,1,0,1},
                     {1,1,0,1,0,0,1,1,1,0},
                     {0,0,0,1,1,0,0,1,0,1},
                     {1,1,0,1,0,0,1,1,1,0},
                     {0,0,0,1,1,0,0,1,0,1},
                     {1,1,0,1,0,0,1,1,1,0},
                     {0,0,0,1,1,0,0,1,0,1},
                     {1,1,0,1,0,0,1,1,1,0},
    };
    for (int i =0; i<N;i++)
        for (int j =0; j<N; j++)
            T[i][j]=TT[i][j];
}
void oblicz (int T[N][N], int G[N][N], int r){
        for(int y = 0; y < N;y++)
        {
            for(int x = 0; x < N;x++)// y i x to poruszanie siê po drugiej macierzy
            {
                int l = 0;
                for(int i = 0; i < N;i++) { // dla ka¿dej komórki z drugiej macierzy przechodzimy przez ca³y macierz pierwszy w poszukiwaniu dobrych komórek
                    for (int j = 0; j < N; j++) {
                        if (i >= y - r && i <= y + r && j >= x-r && j <= x+r) {
                            l += T[i][j];
                        }
                    }
                }
                G[y][x] = l;
            }
        }
    }
int drukuj(int tab[N][N]){
    for (int i =0; i<N;i++) {

        for (int j = 0; j < N; j++)

            cout << tab[i][j] << " "; // wypisanie tablicy oraz zrobienie spacji miêdzy elementami wewn¹trz
            cout << endl; // przejœcie do kolejnego rzêdu

    }
}

int main ( ) {
    int r=1;
    int T[N][N] = {0};
    int G[N][N] = {0};
    wejscie(T);
    drukuj(T);
    oblicz(T, G, r);
    drukuj(G);
    return 0;
}
