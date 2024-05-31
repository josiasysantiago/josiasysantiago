//muestra denumeros pares

#include <iostream>
using namespace std;
main(){
	int ini, fin,limit;
	
	cout<<"ingrese el limite inical:    "   ;
	cin>>ini;
	
	cout<<"ingrese el limite final:   "    ;
	cin>>fin;
	limit= fin-ini;
	
	
		int array[limit];
		
   for(int i= ini+1;i < fin;i++){
   	
   	if(i%2==0){
   		array[i]=i;
   		
    
	   }
   		
	   }
	       for(int i= ini;i < fin;i++){
	       	cout<<array[i]<<endl;
	       	
	 }
   
   }
	
	
	
	

