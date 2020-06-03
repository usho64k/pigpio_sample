#include <stdio.h>
#include <wiringPi.h>

int main(int argc,char *argv[])
{
	int i;
	if(wiringPiSetupGpio() == -1) return 1;
	pinMode(12,INPUT);
	
	digitalRead(12,0);

}
