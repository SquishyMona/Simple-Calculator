#include <iostream>
#include <string>

using namespace std;

int main()
{
    string operation;
    float num1, num2, answer;
    cout << "Will you be adding, subtracting, multiplying, or dividing? (Please input A, S, M, or D): ";
    cin >> operation;

    if (operation == "A" || operation == "a") 
    {
        cout << "Please enter two numbers to add:" << endl;
        cin >> num1;
        cin >> num2;
        answer = num1 + num2;
        cout << "The answer is " << answer << endl;
    }
    else
        {
            if (operation == "S" || operation == "s")
            {
                cout << "Please enter two numbers to subtract. " << endl <<
                "Remember to enter them in the order you'd like them subtracted in:" << endl;
                cin >> num1;
                cin >> num2;
                answer = num1 - num2;
                cout << "The answer is " << answer << endl;
            }
            else
            {
                if (operation == "M" || operation == "m")
                {
                    cout << "Please enter two numbers to multiply."  << endl;
                    cin >> num1;
                    cin >> num2;
                    answer = num1 * num2;
                    cout << "The answer is " << answer << endl;
                }
                else
                {
                    if (operation == "D" || operation == "d")
                    {
                        cout << "Please enter two numbers to divide."  << endl <<
                        "Remember to enter in the order you'd like the divided in:" << endl;
                        cin >> num1;
                        cin >> num2;
                        answer = num1 / num2;
                        cout << "The answer is " << answer << endl;
                    }
                    else
                    {
                        cout << "You must input a valid answer." << endl
                        << "To add, type 'A' or 'a'" << endl
                        << "To subtract, type 'S' or 's'" << endl
                        << "To multiply, type 'M' or 'm'" << endl
                        << "To divide, type 'D' or 'd'" << endl << endl;
                        return 10;
                    }
                }

            }
        }






}