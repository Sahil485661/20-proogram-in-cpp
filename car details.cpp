#include <iostream>
using namespace std;

class Car {
  public:

    
    string brand, model;
    int mileage = 0;

    
    void drive(int distance) {
        mileage += distance;
    }
    
    
    void show_data() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Distance driven: " << mileage << " miles" << endl;
    }
};

int main() {
    
    
    Car my_car;

    my_car.brand = "Mahindra";
    my_car.model = "Thar 4×4";
    my_car.drive(50);

    
    my_car.show_data();

    return 0; 
}