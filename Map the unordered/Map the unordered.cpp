#include <vector>
#include<unordered_map>
#include <iostream>
#include <string>
#include<map>

void PetShop() {
    std::vector<std::string> pets = { "dog", "pig","duck", "pig", "dog",
    "dog", "duck", "turtle", "dog", "pig", "cow", "cat", "cat", "chicken"
    };
    std::unordered_map<std::string, int> petCount = {};

    for (auto print : pets) {
        if (petCount.find(print) != petCount.end()) {
            ++petCount[print];
        }
        else {
            petCount[print] = 1;
        }
    }
    std::cout << "=======PETSHOP HOSPITAL=======\n" << std::endl;
    std::cout << "PETS" << "\t" << "QUANTITY\n" << std::endl;
    for (auto p : petCount) {

        std::cout << p.first << "\t" << " " << p.second << std::endl;
    }
}

void SnackBarPetShop() {
    std::map<std::string, int> menu = {
       {"Sandwich with pesto", 6}, {"Burger of quinoa", 4}, 
       {"slice of pizza   ", 5}, {"French fries     ", 4}
    };
    std::cout << "=======PetVetg=======\n" << std::endl;
    std::cout << "SNACK" << "\t\t\t" << "\t"<< "PRICE($)\n" << std::endl;

    for (auto m = menu.begin(); m != menu.end(); ++m) {

        std::cout << (*m).first << "\t\t" << (*m).second << std::endl;
    }

    std::map<std::string, int> menuDrink = {
       {"Orange Juice", 2.50}, {"Green Shake", 4}, {"Beer     ", 2},
        {"Water   ", 1.0}
    };
    std::cout << "\n=======PetVetg Drinks====\n" << std::endl;
    std::cout << "DRINKS" << "\t\t\t" <<"\t"<< "PRICE($)\n" << std::endl;

    for (auto d = menuDrink.begin(); d != menuDrink.end(); ++d) {

        std::cout << (*d).first << "\t\t\t" << (*d).second << std::endl;
    }
    std::cout << "\n===========================================================" << std::endl;
}

int main()
{
    int option;   
    std::cout << "==========PETSHOP FOR THE GOOD BOYS==========" << std::endl;
    
    while (true) {
        std::cout << "\n" << std::endl;
        std::vector<std::pair<int, std::string>> opcoes{
            {1, "Pet Shop Hospital"},
            {2, "Snack Bar\n"},
            {3, "Exit"},
        };
        for (auto it = opcoes.begin(); it != opcoes.end(); ++it) {
            std::cout << it->first <<" " << it->second << std::endl;
        }
        std::cin>>option;
        system("cls");
        std::cout << "\n" << std::endl;

        switch (option) {
        case 1: PetShop();
            break;
        case 2: SnackBarPetShop();
            break;
        default:
            std::cout << "\nValid option!" << std::endl;
            exit(0);
        }
    } 
    std::cin.get();   
}
