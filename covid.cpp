#include<iostream>

using namespace std;

int main (){
	
	float temp;
	
	cout <<" BIENVENIDO A LA CAMARA DETECTORA DE COVID-19\n  ";
	
	cout <<"\n DIgite el numero de su temperatura: ";
	cin >>temp;
	
	if (temp > 37)
	{
		cout<<"\n Su temperatura da para Covid-19 los negros te van a bailar ajaja";
    }else{
    	cout<<"estas bien";
	}
	
	
	
	return 0;
}
