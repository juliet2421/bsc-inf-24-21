#include <iostream>
#include <random>

using namespace std;

int main () {

random_device rd;

mt19937 gen(rd());

uniform_int_distribution<>
    dis(0, 11);

    int daysUntilExpiration = dis(gen);
     cout << daysUntilExpiration<<endl;
    if (daysUntilExpiration   == 0){
     cout <<"your subscription has expired";
    }
      else if (daysUntilExpiration == 1){
      cout << "your subscription expires within a day! Renew now and save 20%";
      }
    else if (daysUntilExpiration <= 5){
      cout << "your subscription expires in " << daysUntilExpiration << " days Renew now and save 10%"<<endl;
    }
      else if (daysUntilExpiration <= 10){
      cout << "your subscription will expire soon. Renew now!";
      }
      else {
      cout << "you have an active subscription";
      }
    return 0;
 


}