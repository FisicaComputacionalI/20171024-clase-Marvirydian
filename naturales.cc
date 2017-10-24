//Programa que nos sume los primeros N números naturales
//Marlene Guerra Santiago
//24 de Octubre de 2017
#include <iostream>
using namespace std;
int main ( ){
  long N;
  long sum=0;
  cout << "dame un número natural" << endl;
  cin>>N;
  for (long i=1; i<=N ; i++)
    {
      sum = sum+i;}
  cout << "la suma es" << sum << endl;
  return 0;
}
