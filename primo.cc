//Programa que dice si un número es primo o no
//Marlene Guerra Santiago
//24 de Octubre de 2017
#include <iostream>
using namespace std;
int main ( ){
  long N=12;
  long flag=0;
  long divisor=0;
  cout << "inserte un número " << endl;
  cin>>N;
  for (long i=2; i<=N/2 ; i++)
    { 
      if (N%i ==0){
  flag =1;
  divisor =i;
  break;
}
    }

  if (flag==1){
    cout << "Tu número no es primo" << endl;
    cout << "porque se divide entre" << divisor << endl;
  }
  else 
    cout << "Tu número es primo" << endl;
  return 0;
}
