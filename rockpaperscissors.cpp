  //ROCK PAPER SCISSORS GAME
 //user plays with com[uter] for a given amount of time while loosing

#include<iostream>
#include<ctime>
#include<string>

   typedef int values_t;
   typedef char options_t;
   typedef std::string text_t;
      int main(){ 
 text_t userName; 
 values_t computerGameHolder , iterator=1 , iterLimit=5;
 options_t option;
                srand(time(NULL));

          std::cout<<"Enter Username:";
              getline(std::cin, userName);
    system("cls");
      while (iterator<=5)
      {
        while (userName.length()<5 ){
                std::cout<<"Username Can't Have Less Than 5 Characters"<<std::endl;
           std::cout<<"Enter Username:";
              getline(std::cin, userName);
    system("cls");          
             
                 } 
            iterator++;
      }
      
            
            std::cout<<"Characters"<<std::endl;
          
        system("pause>0");
      }
          
       
      