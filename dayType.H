//
#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>

class dayType {
public:
 //constructor
  dayType(const std::string& day = "Sunday");

//set day
void setDay(const std::string& day);

//get current day
std::string getDay() const;

//next day
std::string nextDay() const;

//previous day
std::string previousDay() const;

//add days
std::string addDays(int days) const;

private:
  std::string currentDay;
  static const std::string weekDays[7];
  int findDayIndex(const std::string& day) const;
};

#endif


  