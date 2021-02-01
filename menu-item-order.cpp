// menu-item-order.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "StockController.cpp"

//  Prints the main menu options.
void PrintMainMenu() {

    std::cout << "\n";
    std::cout << "Please select an operation \n";
    std::cout << "1. Item code. \n";
    std::cout << "2. Order item. \n";
    std::cout << "3. Purchase item. \n";
    std::cout << "4. See stock. \n";
    std::cout << "5. Quit. \n";
    std::cout << "\n";
}

//  The item menu codes.
void ItemOrderCodes() {

    std::cout << "\n";
    std::cout << "Our stock is: \n";
    std::cout << "1. TOILE PAPER. \n";
    std::cout << "2. BREAD ITEM. \n";
    std::cout << "3. DONUT. \n";
    std::cout << "4. FISH STEAK. \n";
    std::cout << "5. PORK BURGER. \n";
    std::cout << "\n";
}

int main()
{

    //  Class isntance.
    StockController sc = StockController();

    //  Keep looping menu 
    bool _isOnline = true;
    
    while (_isOnline == true) {

        //  Print the main menu 
        PrintMainMenu();
        
        int userChoice = 0;
        int userItemCode = 0;

        std::cin >> userChoice;

        switch (userChoice) {

            case 1:
                ItemOrderCodes();
            break;

            case 2:

                std::cout << "Please enter ITEM CODE.";
                std::cin >> userItemCode;

                sc.IncrementItem(userItemCode);

                userItemCode = 0;

            break;

            case 3:

                std::cout << "Please enter ITEM CODE.";
                std::cin >> userItemCode;

                sc.DecrementItem(userItemCode);

                userItemCode = 0;

            break;

            case 4:

                std::cout << "Please enter ITEM CODE.";
                std::cin >> userItemCode;

                sc.StockCheck(userItemCode);

                userItemCode = 0;

          break;

         case 5:
             _isOnline = false;
             std::cout << "Goodbye.";
         break;

         default:
             _isOnline = false;
             std::cout << "Goodbye.";
        break;

        }


    }


}
