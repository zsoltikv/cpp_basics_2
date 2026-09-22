#include <iostream> // include the input-output stream library for cin and cout
using namespace std; // use the standard namespace to avoid writing std:: constantly

int main()
{

    // ===============================================================================
    // --- 1. REVISION: CALCULATING SURFACE AREA AND VOLUME OF A RECTANGULAR PRISM ---
    // ===============================================================================

    // this section is commented out, but it demonstrates calculating the area and volume of a 3d shape.
    // declare variables for the three sides (width, height, depth).
    int x, y, z;

    // ask the user to enter the x side.
    cout << "Enter x side of rectangle: ";
    cin >> x;

    // ask the user to enter the y side.
    cout << "Enter y side of rectangle: ";
    cin >> y;

    // ask the user to enter the z side.
    cout << "Enter z side of rectangle: ";
    cin >> z;

    // calculate the surface area of the rectangular prism: 2 * (xy + yz + zx).
    int area = 2 * (x * y + y * z + z * x);

    // calculate the volume: x * y * z.
    int volume = x * y * z;

    // display the calculated area and volume with appropriate units.
    cout << "Area of rectangle: " << area << "cm2" << endl;
    cout << "Volume of rectangle: " << volume << "cm3" << endl;

	cout << endl; // add a blank line for readability before the next section.

    // ===========================================
    // --- 2. IF STATEMENTS: CHECK EVEN OR ODD ---
    // ===========================================

    // declare a variable to store the user's number.
    int number;

    // prompt the user to enter a number.
    cout << "Enter a number: ";
    cin >> number; // read the user's input

    // check if the number is divisible by 2 with no remainder (even).
    if (number % 2 == 0)
    {
        // if true, print that the number is even.
        cout << "The number is even." << endl;
    }
    else
    {
        // if false (there is a remainder), print that the number is odd.
        cout << "The number is odd." << endl;
    }

    // add a blank line for readability before the next section.
    cout << endl;

    // =====================================================
    // --- 3. IF-ELSE STATEMENTS: COMPARE A NUMBER TO 10 ---
    // =====================================================

    // declare another variable for the second number comparison.
    int number2;

    // ask the user to enter a number.
    cout << "Enter a number: ";
    cin >> number2;

    // check if the number is strictly less than 10.
    if (number2 < 10)
    {
        cout << "The number is smaller than 10." << endl;
    }
    // if the first condition is false, check if the number is exactly equal to 10.
    else if (number2 == 10)
    {
        cout << "The number is equal to 10." << endl;
    }
    // if both previous conditions are false, the number must be greater than 10.
    else
    {
        cout << "The number is bigger than 10." << endl;
    }

    // add a blank line for readability before the next section.
    cout << endl;

    // ====================================================
    // --- 4. SWITCH STATEMENTS: SCHOOL GRADE EVALUATOR ---
    // ====================================================

    // declare a variable to store the school mark (grade).
    int mark;

    // prompt the user to enter a mark between 1 and 5.
    cout << "Enter a mark (1-5): ";
    cin >> mark; // read the mark

    // use a switch statement to evaluate the specific value of 'mark'.
    switch (mark)
    {
    case 1:
        // if mark is 1, print the equivalent for fail.
        cout << "Grade: elegtelen" << endl;
        break; // exit the switch block so it doesn't run the other cases
    case 2:
        // if mark is 2, print the equivalent for pass.
        cout << "Grade: elegseges" << endl;
        break;
    case 3:
        // if mark is 3, print the equivalent for satisfactory.
        cout << "Grade: kozepes" << endl;
        break;
    case 4:
        // if mark is 4, print the equivalent for good.
        cout << "Grade: jo" << endl;
        break;
    case 5:
        // if mark is 5, print the equivalent for excellent.
        cout << "Grade: jeles" << endl;
        break;
    default:
        // if the user enters a number outside the 1-5 range, handle the invalid input.
        cout << "Invalid mark." << endl;
        break;
    }

    cout << endl; // add a blank line for readability before the next section.

    // =============================================================
    // --- 5. HOMEWORK: BASIC CALCULATOR USING SWITCH STATEMENTS ---
    // =============================================================

    // HOMEWORK: ask for two numbers in double type and a mathematical operation in char type (+, -, *, /) and perform the operation on the two numbers.

    // declare two variables of type double to store numbers with decimals.
    double num1, num2;
    // declare a char variable to store the mathematical operator.
    char operation;

    // prompt the user to enter the first number.
    cout << "Enter first number: ";
    cin >> num1; // read the first number

    // prompt the user to enter the second number.
    cout << "Enter second number: ";
    cin >> num2; // read the second number

    // ask the user to choose a mathematical operation.
    cout << "Enter operation (+ | - | * | /): ";
    cin >> operation; // read the operator character

	if (num2 == 0 && operation == '/')
	{
		// check if the user is trying to divide by zero, which is not allowed.
		cout << "Error: Division by zero is not allowed." << endl;
		return 0; // exit the program with an error code
	}

    // use a switch statement to determine which mathematical calculation to perform.
    switch (operation)
    {
        case '+':
            // if the operation is '+', calculate and print the sum.
            cout << "Result of addition: " << num1 + num2 << endl;
            break; // exit the switch block
        case '-':
            // if the operation is '-', calculate and print the difference.
            cout << "Result of subtraction: " << num1 - num2 << endl;
            break;
        case '*':
            // if the operation is '*', calculate and print the product.
            cout << "Result of multiplication: " << num1 * num2 << endl;
            break;
        case '/':
            // if the operation is '/', calculate and print the quotient.
            cout << "Result of division: " << num1 / num2 << endl;
            break;
        default:
            // if the user enters anything other than the 4 valid operators, handle the invalid input.
            cout << "Invalid operation." << endl;
            break;
    }

    // return 0 to indicate that the program executed successfully.
    return 0;

}