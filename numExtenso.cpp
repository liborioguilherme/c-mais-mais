#include <iostream>
using namespace std;

string extenso(int num) {
    string unidades[] = {"", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};
    string dezenas[] = {"", "dez", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
    string centenas[] = {"", "cento", "duzentos", "trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"};
    string resultado = "";
    int c = num / 100;
    int d = (num % 100) / 10;
    int u = num % 10;
    if (c != 0) {
        if (c == 1 && d == 0 && u == 0) {
            resultado = "cem";
        } else {
            resultado = centenas[c] + " e ";
        }
    }
    if (d == 1) {
        int unidade = num % 10;
        switch (unidade) {
            case 0:
                resultado += "dez";
                break;
            case 1:
                resultado += "onze";
                break;
            case 2:
                resultado += "doze";
                break;
            case 3:
                resultado += "treze";
                break;
            case 4:
                resultado += "quatorze";
                break;
            case 5:
                resultado += "quinze";
                break;
            case 6:
                resultado += "dezesseis";
                break;
            case 7:
                resultado += "dezessete";
                break;
            case 8:
                resultado += "dezoito";
                break;
            case 9:
                resultado += "dezenove";
                break;
        }
    } else {
        resultado += dezenas[d];
        if (u != 0) {
            resultado += " e " + unidades[u];
        }
    }
    return resultado;
}

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    cout << "O numero por extenso e: " << extenso(num) << endl;
    return 0;
}
