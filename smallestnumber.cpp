#include <iostream>

using namespace std;

int main() {
    int number,num1,num2,num3;
    int smallest = num1; // Assume the first number is the smallest initially

    // Get user input for three numbers
    cout << "Enter three numbers: ";
    cin >> num1 , num2 ,num3;

    // Use switch-case to determine the smallest number
   
 switch (1) {
        case(1) :
        if (num2 < smallest)
            smallest = num2;
            break;
        case(2) :
        if (num3 < smallest)
            smallest = num3;
            break;
        default:
            break;
    }

    // Display the smallest number
    cout << "The smallest number is: " << smallest << endl;

    return 0;
   
}
