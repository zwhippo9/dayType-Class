#include "dayType.H"
#include <stdexcept>

//initialize the day of the week
const std::string dayType::weekDays[7] = {
  "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
};

//constructor
dayType::dayType(const std::string& day) {
  setDay(day);
}

//set the day of the week
void dayType::setDay(const std::string& day) {
    int index = findDayIndex(day);
    if (index != -1) {
      currentDay = day;
    } else {
      throw std::invalid_argument("Invalid day");
}
}
//get the day of the week
std::string dayType::getDay() const {
  return currentDay;
}

//get the next day
std::string dayType::nextDay() const {
  int index = findDayIndex(currentDay);
  return weekDays[(index + 1) % 7];
}

//get previous day
std::string dayType::previousDay() const {
  int index = findDayIndex(currentDay);
  return weekDays[(index + 6) % 7];
}

//add days
std::string dayType::addDays(int numDays) const {
  int index = findDayIndex(currentDay);
  return weekDays[(index + numDays % 7 + 7)% 7];
}

// Helper function to find the index of a day in the weekDays array
int dayType::findDayIndex(const std::string&day) const {
  for (int i = 0; i < 7; ++i) {
    if (weekDays[i] == day) {
      return i;
    }
  }
  return -1;
}