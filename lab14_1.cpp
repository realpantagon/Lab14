#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]){
    double sum,dev,Geo,Har,Max,Min;
    Min=A[0];
    for(int i=0;i<N;i++){
        sum+=A[i];

        dev+=pow((A[i]),2);

        Geo+=log(A[i]);

        Har+=(1/A[i]);

        if(A[i]>Max){
            Max=A[i];
        }
        if(A[i]<Min){
            Min=A[i];

        }
    }


    B[0]=sum/N;

    B[1] =sqrt((dev/N)-pow(B[0],2));

    B[2]=exp(Geo/N);

    B[3]=N/Har;

    B[4]=Max;

    B[5]=Min;
}