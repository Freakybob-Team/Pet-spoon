#include <iostream>
#include <string>
void adoption() {
    std::string username;
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
        std::cout << "You have bought your very first pet spoon! Now that you have bought a pet spoon, it's gonna need a name. Put the name you want your spoon to have!\n\n";
        std::cin >> spoonname;
        std::cout << "You have named your spoon " << spoonname << "! Let's get some supplies so that you can take care of your spoon!";
    }
    if (buy == "n" || buy == "no" || buy == "No") {
        std::cout << "So the thing about that is that you can't say no. You have 2 options. Buy the spoon or quit the game. (Buy or quit)\n\n";
        std::cin >> useroption;
        if (useroption == "Buy" || useroption == "buy") {
            std::cout << "Do you want to buy her? She's only $3\n\n";
    std::cout << "You have $800, y/n\n";
    std::cin >> buy2;
    
    if (buy2 == "y" || buy2 == "yes" || buy2 == "Yes") {
        std::cout << "You have bought your very first pet spoon! Now that you have bought a pet spoon, it's gonna need a name. Put the name you want your spoon to have!\n\n";
        std::cin >> spoonname;
        std::cout << "You have named your spoon " << spoonname << "! Let's get some supplies so that you can take care of your spoon!";
    }
    if (buy2 == "n" || buy2 == "no" || buy2 == "No") {
        std::cout << "Nope, try again.\n\n";
        std::cout << "Do you want to buy her? She's only $3\n\n";
    std::cout << "You have $800, (y)\n";
    std::cin >> buy3;
    }
    
    if (buy3 == "y" || buy3 == "yes" || buy3 == "Yes") {
         std::cout << "You have bought your very first pet spoon! Now that you have bought a pet spoon, it's gonna need a name. Put the name you want your spoon to have!\n\n";
        std::cin >> spoonname;
        std::cout << "You have named your spoon " << spoonname << "! Let's get some supplies so that you can take care of your spoon!";
    }
    }
    }
    }
    void store_at_start() {
        double money;
        double moneybefore;
        moneybefore = 797;
        std::string foodbuy;
        std::string anything_else_option;
        std::cout << "\n\nWelcome to the Spoon pet shop! This place will have everything you'll ever need to take care of your spoon! We also have a deal on so it's your lucky day!\n\n";
        std::cout << "We'll start off by buying some food for your pet spoon. Buy all of them by typing '1 2 3'\n\n";
        std::cout << "School pizza(1)      Bread(2)       Watermelon(3)\n";
        std::cout << "     $3            $1             $3            \n";
        
        std::cin >> foodbuy;
        if (foodbuy == "1 2 3") {
            std::cout  << "You have bought a slice of school pizza, Bread, Wathermelon!\n";
            money = moneybefore - 7;
            std::cout << "You now have $" << money << " left!";
            
        }
        
       
        
        
    }
    
// me dum dum and forgot to add the rest of the code Greg, I was also rushed at school cause I didn't wanna get in trouble grrg