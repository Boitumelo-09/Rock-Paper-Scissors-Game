  //ROCK PAPER SCISSORS GAME
 //user plays with com[uter] for a given amount of time while loosing

#include<iostream>
#include<ctime>
  int main(){
    std::string option;
    int computerChoice;
    char desicion;
    srand(time(NULL));
     system("cls");
         do
         {
          std::cout<<"Enter either Rock, Paper or Scissors:";
           std::cin>>option;  
      system("cls");
      std::cout<<"________________________________________________"<<std::endl;
      computerChoice=(rand()%3)+1;
            switch (computerChoice)
            {
            case 1:
             std::cout<<"Your Choice is "<<option<<std::endl;
             std::cout<<"My Choice Is Rock"<<std::endl;
             std::cout<<"________________________________________________"<<std::endl;
               if (option=="Rock")
               {
                std::cout<<"It's A Draw!!"<<std::endl;
                std::cout<<"________________________________________________"<<std::endl;
                std::cout<<"Wish To Play Again?[Y/N]:";
                  std::cin>>desicion;
                  system("cls");
               }
                else if (option=="Paper")
                {
                  std::cout<<"You Win, You Covered My Rock"<<std::endl;
                  std::cout<<"________________________________________________"<<std::endl;
                std::cout<<"Wish To Play Again?[Y/N]:";
                  std::cin>>desicion;
                  system("cls");
                }
                  else
                  {
                    std::cout<<"You Lose, Can You Cut A Rock?"<<std::endl;
                    std::cout<<"________________________________________________"<<std::endl;
                    std::cout<<"Wish To Play Again?[Y/N]:";
                      std::cin>>desicion;
                      system("cls");
                    }
                  
              break;
              case 2:
              std::cout<<"Your Choice is "<<option<<std::endl;
             std::cout<<"My Choice Is Paper"<<std::endl;
             std::cout<<"________________________________________________"<<std::endl;
               if (option=="Rock")
               {
                std::cout<<"You Lose, I Just Covered Your Paper,LOL"<<std::endl;
                std::cout<<"________________________________________________"<<std::endl;
                std::cout<<"Wish To Play Again?[Y/N]:";
                  std::cin>>desicion;
                  system("cls");
               }
                else if (option=="Paper")
                {
                  std::cout<<"It's A Draw!!"<<std::endl;
                  std::cout<<"________________________________________________"<<std::endl;
                std::cout<<"Wish To Play Again?[Y/N]:";
                  std::cin>>desicion;
                  system("cls");
                }
                  else
                  {
                    std::cout<<"You Win, You Cut My Paper!!"<<std::endl;
                    std::cout<<"________________________________________________"<<std::endl;
                    std::cout<<"Wish To Play Again?[Y/N]:";
                      std::cin>>desicion;
                      system("cls");
                    }
                  
              break;
              case 3:
              std::cout<<"Your Choice is "<<option<<std::endl;
              std::cout<<"My Choice Is Scissors"<<std::endl;
              std::cout<<"________________________________________________"<<std::endl;
                if (option=="Rock")
                {
                 std::cout<<"I Can't Cut Rocks, You Win!!"<<std::endl;
                 std::cout<<"________________________________________________"<<std::endl;
                 std::cout<<"Wish To Play Again?[Y/N]:";
                   std::cin>>desicion;
                   system("cls");
                }
                 else if (option=="Paper")
                 {
                   std::cout<<"I Definitely Can Cut Papers, You Lose!!"<<std::endl;
                   std::cout<<"________________________________________________"<<std::endl;
                 std::cout<<"Wish To Play Again?[Y/N]:";
                   std::cin>>desicion;
                   system("cls");
                 }
                   else
                   {
                     std::cout<<"It's A Draw!!"<<std::endl;
                     std::cout<<"________________________________________________"<<std::endl;
                     std::cout<<"Wish To Play Again?[Y/N]:";
                       std::cin>>desicion;
                       system("cls");
                     }
                   
              break;
            default:
            std::cout<<"UNDEFINED!!"<<std::endl;
            std::cout<<"________________________________________________"<<std::endl;
            std::cout<<"Wish To Play Again?[Y/N]:";
                       std::cin>>desicion;
                       system("cls");
              break;
            }
         } while (desicion=='Y' || desicion=='y');
         
         if (desicion=='n' || desicion=='N')
         {
          std::cout<<"Okay FINE, BYE"<<std::endl;
         }
           else{
            std::cout<<"UNDEFINED!!"<<std::endl;
           }
         
    system("pause>0");
   }
  
          
       
      