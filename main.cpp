#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>
using namespace std;

int main() {

    srand(time(0));

    int n, i, j, t;
    bool scambi;
    scambi=true;

    do {
        cout<<"Inserire il numero di cifre da inserire nel vettore"<<endl;
        cin>>n;
    } while(n<=0);

    vector<int>r(n);

    for (i=0; i<n; i++) {
        r[i]= rand () % (n*10)+1;
    }

    i=0;
    while (i<n and scambi==true) {
        scambi=false;
        j=0;

        while (j<n-1) {
            if (r[j]>r[j+1]) {
                
                t=r[j];
                r[j]=r[j+1];
                r[j+1]=t;

                scambi=true;
            }
            j=j+1;
        }
        i=i+1;
    }

    cout<<"R: ";
    for (i=0; i<n; i++) {
        cout<<r[i]<<"; ";
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
