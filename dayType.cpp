#include "dayType.H"
#include <stdexcept>

const std::string dayType::weekDays[7] = {
  "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
};

dayType::dayType(const std::string& day) {
  setDay(day);
}

void dayType::setDay(const std::string& day) {
    int index = findDayIndex(day);
    if (index != -1) {
      currentDay = day;
    } else {
      throw std::invalid_argument("Invalid day");
}
}

std::string dayType::getDay() const {
  return currentDay;
}

std::string dayType::nextDay() const {
  int index = findDayIndex(currentDay);
  return weekDays[(index + 1) % 7];
}

std::string dayType::previousDay() const {
  int index = findDayIndex(currentDay);
  return weekDays[(index + 6) % 7];
}

std::string dayType::addDays(int numDays) const {
  int index = findDayIndex(currentDay);
  return weekDays[(index + numDays % 7 + 7)% 7];
}

int dayType::findDayIndex(const std::string&day) const {
  for (int i = 0; i < 7; ++i) {
    if (weekDays[i] == day) {
      return i;
    }
  }
  return -1;
}