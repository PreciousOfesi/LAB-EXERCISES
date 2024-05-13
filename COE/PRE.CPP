
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // Generate a random integer between 0 and 11
    int daysUntilExpiration = std::rand() % 12;

    // Output the appropriate message based on the conditions
    if (daysUntilExpiration <= 10) {
        if (daysUntilExpiration <= 5) {
            if (daysUntilExpiration == 1) {
                std::cout << "Your subscription expires within a day!" << std::endl;
                std::cout << "Renew now and save 20%!" << std::endl;
            } else {
                std::cout << "Your subscription expires in " << daysUntilExpiration << " days." << std::endl;
                std::cout << "Renew now and save 10%!" << std::endl;
            }
        } else {
            std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
        }
    } else {
        std::cout << "You have an active subscription." << std::endl;
    }

    return 0