#include <iostream> 
void primeornot(int count) {
	int score = 0 ; 
	int turn_ammount = count;  
	int i ;
    int n ; 	
	bool prime ;
	while(count > 0){
		if(n < 2 || n!=-1){
			std::cout << "Enter a number : " << std::endl ;  
			std::cin >> n ; 
			--count;  	 
		
		if (n == -1)
		{
			std::cout << "You have succesfully exited the program... " << std::endl;
			break;
		}
		// Simple iteration.  
		if(n >= 2) {	
			for(i = 2 ; i < n / 2 ; i++) { 
				if ( n % i == 0 ) { 
					prime = false ;
			  		break;	
				}

				else 
				{ 
					prime = true ;
				}	

			}
		// Prime test. 
		if (prime == true) {
			std::cout << "This number is prime , \nYOU GAIN 1 POINT" << std::endl; 
			++score;
			std::cout << "Your score is " <<score << "\\" << turn_ammount << std::endl;
		}
		if(prime==false) {
			std::cout << "This number is not prime..." << std::endl;
			std::cout << "Your score is " <<score << "\\" << turn_ammount << std::endl;
		}
		}
		}
		else {
			std::cout << "This is number is not testable to see if prime or not" << std::endl; 
		}

			}
	if(score == 0 ){
			std::cout << "none of the number you have proposed are prime numbers" << std::endl; 
		}
	//TODO add other comment based on score and then FINISH , and add comments here & there.
	if(score == turn_ammount){
		std::cout << "Congratulations ! all your answers are correct !" << std::endl;
	} 
	else{
		std::cout << "Infortunately all of your answers were not true , try again next time !" << std::endl; 
	}
}

int main(){
	std::cout << "Welcome to my math game ! The goal is very simple...\n\nYou will first choose an ammount of prime numbers to find\n\nthen you will have to find that exact ammount of prime numbers.\n\nIf one answer is false , the programs ends... " << std::endl;
	int n ; 
	std::cout << "enter the ammounts of prime number you want to find " << std::endl; 
	std::cin >> n ; 
	if (n >= 0 ){

	
	std::cout << "you have " << n << " prime numbers to find " << std::endl; 
	primeornot(n);
	}
	else {
		std::cout << "This is not an acceptable ammount..." << std::endl;
	} 
	return 0 ; 
	} 
 
