#include <iostream>
#include <cstdlib> 
#include <ctime> 

    void guessNumber(){
         int num1;
         int num2;
         int tries;
         
           srand(time(NULL));
           int randomNumber = rand() % 20 + 1; 
do{
     std::cout << "Enter a number(1 - 20): ";
     std::cin >> num1;
     tries++;

         
          
     if(num1 < randomNumber ){
        std::cout << "Number too low" << '\n';
     }
      else if (num1 > randomNumber ){
        std::cout << "Number too high" << '\n';
      } 
      else if (num1 = randomNumber){
        std::cout << "Right guess!, Number of tries: " << tries++ << '\n';
      }
}while(num1 != randomNumber);    
    }
 
int main(){
    guessNumber();
    char retry;
     
    do{
          std::cout << "Try again?(Y/N): " << '\n';
          std::cin >> retry;
       
       retry = toupper(retry);

        if(retry == 'Y'){
                  guessNumber();
      }
        else if(retry == 'N'){
                  std::cout << "COME BACK AGAIN" << "\n";
      }
        else {
            std::cout << "Enter valid response" << '\n';
        }

    }while(retry != 'N');

    
    return 0;
}