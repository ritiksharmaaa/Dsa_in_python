#include <iostream>

void square_pattern(int n){
	
       for(int i = 0 ; i < n ; i++){
           for(int j = 0 ; j < n ; j ++){
	    	   std:: cout << "* ";
	   }
	   std::cout << std::endl ;
       }	

};

void right_angle_pattern(int n){
   for (int i = 0 ; i < n ; i++ ){
	for (int j= 1 ; j <= i+1 ; j ++){
		std :: cout << "* ";
	}
	std::cout << std::endl ;
   }
};

void numer_right_angle_pattern(int n){
	for (int i = 0 ; i < n ; i ++){
		for (int j = 1 ; j <= i+1 ; j++ ){
			std::cout << j << " ";

		}
		std::cout << std::endl ;

	}
};

// 1 22 333 4444 55555 this patter 
void i_in_jloop(int n){
	for (int i = 1 ; i <= n ; i++){
		for (int j = 0 ;  j < i ; j++){
			std::cout << i << " ";
		}
		std::cout << std::endl ;


	}
};


// reversing each upper loop except square loop 


// rightangle reverse loop 


void right_ange_reverse_loop(int n ){
	for(int i = n ; i > 0; i -- ){
		for(int j = 0 ; j < i ; j++){
			std::cout<< "* ";
		}
		std::cout << std::endl; 

	}
}

// right angle with 1 12 123 1234 12345 

void right_angle_reverse_number(int n ){
   for (int i = 5 ; i > 0 ; i -- ){
	for(int j = 1; j < i+1  ; j ++){
		std::cout << j << " ";
	};
	std::cout << std::endl;
}}

// right anngle reverse with this  55555 4444 333 22 1 like that 

void reverse_i_to_jloop(int n){
	for(int i = n ; i > 0 ; i --){
		for (int j = 0 ; j < i ; j++){
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}
}


// pattern start pyramid pattern



int main(){
	// patter mean nested loop 
	// outerloop decide no of line 5
	//inner loop alway focus on coloum and connect tem som eone to row
	//print them them inside the inner for loop 
	//observer symetry of optional choice 
       int n;
      std::cin >> n ;   
	    
	square_pattern(n) ;
	std::cout << "---------------------------------------------------------" << std::endl;
	right_angle_pattern(n);
	std::cout << "---------------------------------------------------------" << std::endl;
	numer_right_angle_pattern(n);
	std::cout << "---------------------------------------------------------" << std::endl;
	i_in_jloop(n);
	std::cout << "---------------------------------------------------------" << std::endl;
	right_ange_reverse_loop(n);
	std::cout << "---------------------------------------------------------" << std::endl;
	right_angle_reverse_number(n);
	std::cout << "---------------------------------------------------------" << std::endl;
	reverse_i_to_jloop(n);
   return 0 ;
}
