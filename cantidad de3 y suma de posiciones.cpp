//cantidad de 3 y suma de numeros impares

#include <iostream>
using namespace std;
int array[10];
int contador;
int peto=0;
main(){
		for(int i=0;i<10;i++){
		cout<<"ingrese los numeros del array   ";
		cin>>array[i];
		
		if(array[i]==3){
		
		contador++;
		
		}
		if(i%2!=0){
   		peto=peto+array[i];
		   
			   }	
}
 
    cout<<contador<<endl;
    cout<<peto;
    
   
   }

   
   

