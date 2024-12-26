#include <iostream>

void square_pattern(int n){
	
       for(int i = 0 ; i < n ; i++){
           for(int j = 0 ; j < n ; j ++){
	    	   std:: cout << "* ";
			for(int j = 0; j < i*2 + 1; j++){
				std::cout << "*";
			}
			std::cout << std::endl;
		}
	}
	   std::cout << std::endl ;
	   }	



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

        // *
	   // * * *
	 // * * * * *
	// * * * * * * *   


// first see how many row it print so it a 5 tha see how many colum it print 9 and than see what the print so it print 3 space than * in next line 2 space than 3 * than in 3 line 1 space but print 5* like that 
// so this type of question you have to identofied how mnay space and how mnay main item you have to print that you have to find 

//  4 space     *      than 4 space 
// 3 space    * * *    than 3 space
// 2 space   * * * * *   than 2 space
// 1 space  * * * * * * *  than 1 space
// 0 space * * * * * * * * * than 0 space

// n = 5  and you see left space is n - i = 0 - 1 
// here 5 - 0 -1 = 4 and 5 -1 -1 = 3 and 5 - 2 -1 = 2 and 5 - 3 -1 = 1 and 5 - 4 -1 = 0 so fprmula depend on i n - i -1 

// s o formula from printing * becuas eit increae in odd order so i need to print * in odd order from taking the uppper loop i 

// so if we see  so formule is like if =0 if j < i*2 +1 

//  j < i*2 + 1  
// ler see example id i = 0 so 0 *2 +1 = 1 and if i = 1 than i*2 + 1 = 3__ and if i = 2 than i*2 + 1 = 5__ and if i = 3 than i*2 + 1 = 7__ and if i = 4 than i*2 + 1 = 9__ so this is the formula for printing *

// so we get   the pattern 





void pyramidPattern(int n ){
	for (int i = 0 ; i < n ; i++){
		for(int s = 0 ; s < n-i-1  ; s++){
			std::cout << " ";
		}
		for (int j = 0 ; j < i*2 +1 ; j++){
			std::cout << "*";
		}
		std :: cout << std::endl;
	
	


}}




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

	// ----------------------------

	pyramidPattern(5);


   return 0 ;
}
