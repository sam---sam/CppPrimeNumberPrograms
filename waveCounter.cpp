#include <iostream>
#include <cmath>
#include <time.h>
#include <ctime>

using namespace std;

void wait ( int seconds )
{
	clock_t endwait;
	endwait = clock () + .1 * CLOCKS_PER_SEC ;
	while (clock() < endwait) {}
}

int main(void)
{
int trip=5;
while (trip--){
int i=40 , t;
while (i--){
t=1;
for (;t<i;t++)
cout <<trip;
cout <<endl;
wait(1);
}
}

return 0;
}
