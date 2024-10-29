#include <iostream>
#include "dayType.H"

int main() {
    std::string currentDay;
    int daysToAdd;

    // Ask the user to input the current day
    std::cout << "Enter the current day of the week: ";
    std::cin >> currentDay;

    // Initialize dayType object with user input
    dayType day(currentDay);

    // Display the value of the dayType object (user-supplied day)
    std::cout << "It is: " << day.getDay() << std::endl;

    // Display the current day
    std::cout << "The current day is: " << day.getDay() << std::endl;

    // Display the next day
    std::cout << "The next day is: " << day.nextDay() << std::endl;

    // Display the previous day
    std::cout << "The previous day is: " << day.previousDay() << std::endl;

    // Ask the user for the number of days to add
    std::cout << "Enter the number of days to add: ";
    std::cin >> daysToAdd;

    // Display the day after adding the specified number of days
    std::cout << "The day after adding " << daysToAdd << " days will be: "
              << day.addDays(daysToAdd) << std::endl;

    return 0;
}