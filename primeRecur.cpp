#include <iostream>
#include <cmath>
using namespace std;


void prime (int i,int p){
if (i%2!=0 && i%3!=0 && i%5!=0)
cout <<i<<endl;
if (i>=p)
return ;
return prime(++i,p);
}

int main(void)
{
unsigned int primeRange = 200 , i=5;
prime(i,primeRange);
return 0;
}
