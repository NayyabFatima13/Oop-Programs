#include <iostream> 

class Date { //class named Date
  private: 
    int day; 
    int month; 
    int year; 

  public:
    // Constructor to initialize Date object with provided day, month, and year
    Date(int d, int m, int y)
	{
		d = day;
		m = month;
		y = year;
	}

    // Member function to set the date
    void setDate(int d, int m, int y) {
      day = d; // Set day
      month = m; // Set month
      year = y; // Set year
    }

    // Member function to get the day
    int getDay() const {
      return day; // Return day
    }

    // Member function to get the month
    int getMonth() const {
      return month; // Return month
    }

    // Member function to get the year
    int getYear() const {
      return year; // Return year
    }

    // Member function to validate if the date is valid
    bool isValidDate() const {
      // Check if the month is valid
      if (month < 1 || month > 12)
        return false;

      // Check if the day is valid
      if (day < 1 || day > 31)
        return false;

      // Check for specific month-day combinations that are invalid
      if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;

      if (month == 2) {
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
          if (day > 29)
            return false;
        } else {
          if (day > 28)
            return false;
        }
      }

      // Date is valid
      return true;
    }
};

int main() {
  // Set the date
  int day, month, year;
  
  std::cout << "Input day: "; 
  std::cin >> day; 
  
  std::cout << "Input month: "; 
  std::cin >> month; 
  
  std::cout << "Input year: "; 
  std::cin >> year; 
  
  // Create a date object
   Date obj(day, month, year);  // Initialize object with default values

   obj.setDate(day, month, year); // SetDate object with provided values

  // Get and display the date
  std::cout << "Date: " << obj.getDay() << "/" << obj.getMonth() << "/" << obj.getYear() << std::endl; // Output date

  // Validate the date
  if (obj.isValidDate())
    std::cout << "The date is valid." << std::endl; // Output for a valid date
  else
    std::cout << "The date is invalid." << std::endl; // Output for an invalid date

  return 0; // Return 0 to indicate successful completion
}

