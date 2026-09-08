#include <iostream>
using namespace std;

class ElectricityBill {
private:
    string customerName;
    int unitsConsumed;
    double ratePerUnit;

public:
    ElectricityBill(string name, int units, double rate) {
        customerName = name;
        unitsConsumed = units;
        ratePerUnit = rate;
    }

    double calculateBill() {
        return unitsConsumed * ratePerUnit;
    }

    void displayBill() {
        cout << "Customer Name: " << customerName << endl;
        cout << "Units Consumed: " << unitsConsumed << endl;
        cout << "Rate per Unit: $" << ratePerUnit << endl;
        cout << "Total Bill: $" << calculateBill() << endl;
    }
};

int main() {
    ElectricityBill bill("John Doe", 150, 0.12);
    bill.displayBill();
    return 0;
}

// OR

#include <iostream>
using namespace std;

int main() {
    int consumerID;
    string consumerName;
    string Category;
    int units;
    int Bill;

    cout << "Consumer ID: ";
    cin >> consumerID;

    cout << "Consumer Name: ";
    cin >> consumerName;

    cout << "Category: ";
    cin >> Category;

    cout << "Units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid unit consumption";
        return 0;
    }
    else if (units <= 100) {
        Bill = 4 * units + 75;
    }
    else if (units <= 300) {
        Bill = 400 + 6 * (units - 100) + 75;
    }
    else {
        Bill = 400 + 1200 + 8 * (units - 300) + 75;
    }

    cout << "Consumer ID: " << consumerID;
    cout << "Consumer Name: " << consumerName;
    cout << "Category: " << Category;
    cout << "Units consumed: " << units;
    cout << "Total Bill Generated: " << Bill;

    return 0;
}