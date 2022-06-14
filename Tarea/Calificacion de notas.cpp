#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int nota = 0;
	
	cout<<"Ingrese la nota Final "<<endl;
	cin>>nota;
	
	if (nota > 100 || nota < 0) {
			cout<<"Escriba la nota entre 0 y 100";
		return 0;
	}
	
	if (nota >= 96 && nota <= 100){
			cout <<"Su nota es A++";
	}
	
    if (nota >= 91 && nota <= 95){
			cout<<"Su nota es A+";
	}
	
	if (nota >= 86 && nota <= 90) {
			cout<<"Su nota es A";
	}
	
	if (nota >= 81 && nota <= 85) {
			cout<<"Su nota es A-";
	}
	
	if (nota >= 76 && nota <= 80) {
			cout<<"Su nota es B+";
	}
	
	if (nota >= 71 && nota <= 75) {
			cout<<"Su nota es B";
	}
	
	if (nota >= 66 && nota <= 70) {
			cout<<"Su nota es B-";
	}
	
	if (nota >= 56 && nota <= 65) {
			cout<<"Su nota es C";
	}
	
	if (nota >= 51 && nota <= 55) {
			cout<<"Su nota es C-";
	}
	
	if (nota >= 46 && nota <= 50) {
			cout<<"Su nota es D+";
	}
	
	if (nota >= 41 && nota <= 45) {
			cout<<"Su nota es D";
	}	
	
	if (nota >= 36 && nota <= 40) {
			cout<<"Su nota es D-";
	}
	
	if (nota >= 31 && nota <= 35) {
			cout<<"Su nota es E+";
	}
	
	if (nota >= 26 && nota <= 30) {
			cout<<"Su nota es E";
	}
	
	if (nota >= 21 && nota <= 25) {
			cout<<"Su nota es E-";
	}
	
	if (nota >= 16 && nota <= 20) {
			cout<<"Su nota es F+";
	}
	
	if (nota >= 11 && nota <= 15) {
			cout<<"Su nota es F";
	}
	
	if (nota >= 6 && nota <= 10) {
			cout<<"Su nota es F";
	}
	
	if (nota >= 1 && nota <= 5) {
			cout<<"Su nota es F-";
	}
	
	if (nota >= 0 && nota <= 0) {
			cout<<"Su nota es F--";
	}
	
	return 0;
}
