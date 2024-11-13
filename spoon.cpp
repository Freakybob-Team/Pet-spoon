#include <iostream>
#include <string>
void adoption() {
    std::string username;
    std::cout << "\n-------------------------------------------------------\n";
    std::cout << "Welcome to the spoon adoption place greg. Wait, You're not greg, what is your name, random person?\n";
       std::cin >> username;
       if (username == "Greg" || username == "greg") {
           std::cout << "oh, so you are greg, mb\n";
           std::cout << "K, so " << username << ", let's take you over to the spoon viewing area so you can check out the pet spoons";
           
       }
       else {
           std::cout << "K, so " << username << ", let's take you over to the spoon viewing area so you can check out the pet spoons";
       }
     }
     void viewingarea() {
         std::string spoonname;
         std::string buy;
         std::string useroption;
         std::string buy2;
         std::string buy3;
         std::cout << "\n\nWelcome to the viewing area where you will find your pet spoon for life\n";
         std::cout << "-------------------------------------------------------\n";
    std::cout << "There is only one pet spoon left. It's a She and is 7 months old\n";
    std::cout << "Do you want to buy her? She's only $3\n\n";
    std::cout << "You have $800, y/n\n";
    std::cin >> buy;

    if (buy == "y" || buy == "yes" || buy == "Yes") {
        std::cout << "You have bought your very first pet spoon! Now that you have bought a pet spoon, you're gonna need some supplies so that you can take care of your spoon!\n\n";
    }
    if (buy == "n" || buy == "no" || buy == "No") {
        std::cout << "So the thing about that is that you can't say no. You have 2 options. Buy the spoon or quit the game. (Buy or quit)\n\n";
        std::cin >> useroption;
        if (useroption == "Buy" || useroption == "buy") {
            std::cout << "Do you want to buy her? She's only $3\n\n";
    std::cout << "You have $800, y/n\n";
    std::cin >> buy2;
    
    if (buy2 == "y" || buy2 == "yes" || buy2 == "Yes") {
        std::cout << "You have bought your very first pet spoon! Now that you have bought a pet spoon, you're gonna need some supplies so that you can take care of your spoon!\n\n";
    }
    if (buy2 == "n" || buy2 == "no" || buy2 == "No") {
        std::cout << "Nope, try again.\n\n";
        std::cout << "Do you want to buy her? She's only $3\n\n";
    std::cout << "You have $800, (y)\n";
    std::cin >> buy3;
    }
    
    if (buy3 == "y" || buy3 == "yes" || buy3 == "Yes") {
         std::cout << "You have bought your very first pet spoon! Now that you have bought a pet spoon, you're gonna need some supplies so that you can take care of your spoon!\n\n";
    }
    }
    }
    }
    void store_at_start() {
        double money;
        double moneybefore;
        moneybefore = 797;
        std::string foodbuy;
        std::string essentialsbuy;
        std::cout << "\n\nWelcome to the Spoon pet shop! This place will have everything you'll ever need to take care of your spoon! We also have a deal on so it's your lucky day!\n\n";
        std::cout << "We'll start off by buying some food for your pet spoon. Buy all of them by typing 'All'\n\n";
        std::cout << "School pizza      Bread       Watermelon\n";
        std::cout << "     $3            $1             $3            \n";
        
        std::cin >> foodbuy;
        if (foodbuy == "all" || foodbuy == "All") {
            std::cout  << "You have bought school pizza, Bread, Wathermelon!\n";
            money = moneybefore - 7;
            std::cout << "You now have $" << money << " left!";
            
        }
        else {std::cout << "-------------------------------------------------------\n";
            std::cout << "I think you meant to say 'All' but that was too hard for you. Try again.\n";
            std::cout << "-------------------------------------------------------";
            std::cout << "\n\nWelcome to the Spoon pet shop! This place will have everything you'll ever need to take care of your spoon! We also have a deal on so it's your lucky day!\n\n";
        std::cout << "We'll start off by buying some food for your pet spoon. Buy all of them by typing 'All'\n\n";
        std::cout << "School pizza      Bread       Watermelon\n";
        std::cout << "     $3            $1             $3            \n";
        std::cin >> foodbuy;
if (foodbuy == "all" || foodbuy == "All") {
            std::cout  << "You have bought school pizza, Bread, Wathermelon!\n";
            money = moneybefore - 7;
            std::cout << "You now have $" << money << " left!";
            
        }
        }
        std::cout << "\n-------------------------------------------------------";
        std::cout << "\n\nGreat! Now that you have food to feed your pet spoon, let's get some essentials that will make your life and your spoon's life easier!\n";
        std::cout << "I recommend buy all of these. Type 'All'.\n\n";
        std::cout << "Yummy oil  Dishwasher pods   Collar   Bed\n";
        std::cout << "   $3            $5            $3     $9\n\n";
        std::cin >> essentialsbuy;
    
        if (essentialsbuy == "all" || essentialsbuy == "All") {
            std::cout << "You have bought Yummy oil, Dishwasher pods, collar and a bed!\n";
            money = moneybefore - 20;
            std::cout << "You now have $" << money << " left!\n";
        }
        else {
            std::cout << "-------------------------------------------------------\n";
            std::cout << "I think you meant to say 'All' but that was too hard for you. Try again.\n";
             std::cout << "-------------------------------------------------------";
        std::cout << "\n\nGreat! Now that you have food to feed your pet spoon, let's get some essentials that will make your life and your spoon's life easier!\n";
        std::cout << "I recommend buy all of these. Type 'All'.\n\n";
        std::cout << "Yummy oil  Dishwasher pods   Collar   Bed\n";
        std::cout << "   $3            $5            $3     $9\n\n";
        std::cin >> essentialsbuy;
        if (essentialsbuy == "all" || essentialsbuy == "All") {
            std::cout << "You have bought Yummy oil, Dishwasher pods, collar and a bed!\n";
            money = moneybefore - 20;
            std::cout << "You now have $" << money << " left!\n";
        }
        
        }
         std::cout << "-------------------------------------------------------";
        std::cout << "\nCongrats! You have everything you'll need for your pet spoon! The Store is always open for you to buy more supplies!\nI hope you enjoy your time as a new spoon owner!!";
    }
    void game() {
        std::string spoonname;
        std::string call_tot;
         std::cout << "\n-------------------------------------------------------";
          std::cout << "\nYou have brought your spoon home! While we let her explore the house, we need to give her a name!\nWhat should their name be?\n";
          std::cin >> spoonname;
          std::cout << "\nYour spoon has been named " << spoonname << "!\n";
          std::cout << "-------------------------------------------------------\n";
          std::cout << spoonname << " walks around her new house.\n";
          std::cout << "You can call your spoon over by typing '" << spoonname << "'! Try it out!\n";
          std::cin >> call_tot;
          std::cout << "\n";
          if (call_tot == spoonname) {
            std::cout << spoonname << " walked over to you!\n";
          }
          else {
            std::cout << "Remember, you have to call your spoon by typing '" << spoonname << "'\n";
            std::cin >> call_tot;
            std::cout << "\n";
            if (call_tot == spoonname) {
              std::cout << spoonname << " walked over to you!\n";
            }
          }
          
    }
    int main() {
std::string what;
std::string ok;


// this is spoon. cause spon is gref
    std::cout << " SSSSS    PPPPP   OOO   OOO   N   N " << std::endl;
    std::cout << "S         P   P  O   O O   O  NN  N " << std::endl;
    std::cout << " SSSSS    PPPPP  O   O O   O  N N N " << std::endl;
    std::cout << "     S    P      O   O O   O  N  NN " << std::endl;
    std::cout << " SSSSS    P       OOO   OOO   N   N " << std::endl;
    std::cout << "Made by 5quirre1 and Nomaakip\n"; 
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Welcome to Spoon. Say info for what Spoon  is about.\nSay anything else to continue on your adventure of taking care of a spoon rgeg\n";
    std::cin >> what;
   if (what == "info" || what == "Info" || what == "INFO") {
    std::cout << "-------------------------------------------------------";
       std::cout << "\nThis game is about taking care of a pet spoon. Don't ask why cause like, it's very useful lmao\nSome stuff that is going to be updated in later updates:\n\nA saving system\nRandom events when you like use the command 'Check' or something\nRandom cool stuff\n";
       std::cin >> ok;
       if (ok == "why" || ok == "Why") {
        std::cout << "I just said to not ask vro\n\n";
       }
       if (ok == "skibidi" || ok == "SKIBIDI" || ok == "Skibidi") {
        std::cout << "Peak";
       }
   }
   adoption();   
    viewingarea();
    store_at_start();
    game();
    return 0;
}
