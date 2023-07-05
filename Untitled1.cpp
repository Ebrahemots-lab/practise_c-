#include<iostream>
#include<iterator>

using namespace std;


//	void Weired(int number){
//		//first we print out the number
//	
//		while(true){
//			cout<<number<<" ";
//			if(number == 1) break;
//			if(number % 2 == 0 ) number = number / 2 ;	
//			else number = (number * 3 ) + 1 ;			
//		}
//		cout<<"\n";
//	}








int main(){

//	int n;
//	cin >> n;
//	Weired(n);




	int Arr[] = {1,2,3,4,5}; //this is the main array 
	int arr_length = sizeof(Arr)/sizeof(Arr[0]); //get length of the orginal array
	int arr2[arr_length]; //making a new array with len of original array
	int tempElement = 1; // make a temp variable that will contain the multiplication result
	for(int i = 0 ; i<arr_length ; i++){ // making a loop through the original array
		for(int x = 0 ; x<arr_length ; x++){ //nested loop the make multilplication for each element
			if(Arr[i] == Arr[x]) continue;//we don't need the element to multiplication by itself
			tempElement= tempElement * Arr[x]; // here we add the multiplication result to the temp
		}
		arr2[i] = tempElement; //Add the final result to the array
		tempElement = 1;//reset tempElement value to 1 
	}
	//Printing the new array elements
	for(int len = 0 ; len < arr_length ; len ++){
		cout<<arr2[len]<<endl;
	}
	
	
	

	
	
	
	return 0;
}
