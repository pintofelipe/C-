//Escribe un programa que lea de la entrada est�ndar un
//vector de n�meros y muestre e la salida est�ndar
//los n�meros del vector con sus �ndices asociados

#include <iostream>
#include <conio.h>


using namespace std;


int main(){

int number[100],n;

cout<<"Digite el numero de elementos que va a tener el arreglo: ";
cin >> n;


for(int i=0; i<n;i++){
    cout<<"Digite un numero: ";
    cin >> number[i];
}



for(int i=0;i<n;i++){
    cout <<i<<" -> "<<number[i]<<endl;
}


getch();
return 0;
}
