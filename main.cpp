 #include <iostream>

using namespace std;

// Function prototypes
void displayMenu();
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
double division(int a, int b);

int main() {
    char choice;
    int num1, num2;
    do {
        displayMenu();
        cin >> choice;
        cout << "Enter two integers: ";
        cin >> num1 >> num2;

        switch(choice) {
            case '1':
                cout << "Result: " << addition(num1, num2) << endl;
                break;
            case '2':
                cout << "Result: " << subtraction(num1, num2) << endl;
                break;
            case '3':
                cout << "Result: " << multiplication(num1, num2) << endl;
                break;
            case '4':
                if(num2 != 0)
                    cout << "Result: " << division(num1, num2) << endl;
                else
                    cout << "The second integer is zero, divide by zero" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    } while(choice == 'y' || choice == 'Y');

    return 0;
}

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice: ";
}

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}
double division(int a, int b) {
    return static_cast<float>(a) / b;
}

