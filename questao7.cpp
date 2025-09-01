// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main(){
	int i=0,pontos=0; string b[1000],c,a[1000]; cin >> c;
    while (true){
        cin >> b[i];
        if (b[i] == "sair"){
            break;
        }
        cin >> a[i];
        for(int j=0;j!=5;j++){
            if (a[i][j] == c[j]) {
                pontos++;
            }
        }
        cout << b[i] << ": " << pontos*20 << "\n";
        pontos=0;
        i++;}
}
