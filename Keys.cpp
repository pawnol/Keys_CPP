/*
Keys
Pawelski
4/4/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>
#include <string>

int main()
{
    std::string role;
    std::cout << "Please enter your role >> ";
    std::cin >> role;
    if (role == "teacher")
    {
        std::cout << "You should receive a key.\n";
    }
    else if (role == "student")
    {
        std::cout << "You should not receive a key.\n";
    }
    return 0;
}
