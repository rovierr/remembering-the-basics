/*
Soma das matrizes: Calcule a soma das matrizes A e B (A + B). OK
Multiplicação de matrizes: Calcule o produto das matrizes A e B (A * B). 
Determinante da matriz A: Encontre o determinante da matriz A. OK
Transposta de A e B: Calcule a transposta das matrizes A e B (Aᵀ e Bᵀ).
Resolução:

A= 207
   451
   138​
  ​
​B= 135
   405
   617

Para somar as matrizes, basta somar elemento a elemento, ou seja, A[i][j] + B[i][j]. OK
A multiplicação de matrizes envolve a soma do produto dos elementos da linha de uma matriz pela coluna da outra. OK
O determinante da matriz 3x3 segue a regra de Sarrus ou co-fatores.
A transposta de uma matriz é obtida trocando as linhas pelas colunas.


*/

#include <iostream>
using namespace std;

int calcDet(int matriz[3][3]) {

    int det = 0;
    det = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1])
        - matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0])
        + matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
    return det;
}

void tranposta(int matriz[3][3], int resultado[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[j][i] = matriz[i][j];
        }
    }
}


int main()
{
    int matrizA[3][3];
    int matrizB[3][3];
    int tranpostaA[3][3];
    int tranpostaB[3][3];
    

    int choose;
    int l, c;
    int detA, detB;
    int multi;
    int soma;

  

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            cin >> matrizA[l][c];
        }
    }

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            cout << matrizA[l][c] << " ";
        }
        cout << "\n";
    }


    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            cin >> matrizB[l][c];
        }
    }

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            cout << matrizB[l][c] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";


    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            cout  << matrizB[l][c] + matrizA[l][c] << " ";
        }
        cout << "\n";
    }


    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            cout << matrizB[l][c] * matrizA[l][c] << " ";
        }
        cout << "\n";
    }

    detA = calcDet(matrizA);
    cout << "\n DET A: " << detA << "\n\n";

    detB = calcDet(matrizB);
    cout << "\n  DET B: " << detB << "\n\n";


    
    tranposta(matrizA, tranpostaA);
    cout << "TRAN A: \n";
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            cout << tranpostaA[l][c] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    tranposta(matrizB, tranpostaB);
    cout << "TRAN B: \n";
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            cout << tranpostaB[l][c] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

}
