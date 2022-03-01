#include <iostream>
using namespace std;
int main(){
	unsigned int cuenta = 1;
	while (cuenta<=20){
		cout<<(cuenta % 5 ? "****" : "+++++++++")<<endl;
		++cuenta;
	}
}
