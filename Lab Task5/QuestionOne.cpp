#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<>dis(0, 11);
        int daysUntilExpiration = dis (gen);

        if (daysUntilExpiration <= 10 && daysUntilExpiration > 5) {
            cout << "Your subscription will expire soon. Renew now! ";
        }
        else if (daysUntilExpiration <=5 && daysUntilExpiration > 1){
            cout << "Your subscription expires in " << daysUntilExpiration << endl; 
            cout << "Renew now and save 10%!";
        }
        else if (daysUntilExpiration == 1) {
            cout << "Your subscription expires within a day!" << endl; 
            cout << "Renew now to save 20%! ";
        }
        else if (daysUntilExpiration == 0) {
            cout << "Your subscription has expired. ";
        }
        else if (daysUntilExpiration > 10) {
            cout << "You have an active subscription.";
        }
    return 0;
}















