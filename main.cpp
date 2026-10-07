#include <iostream>
#include <string>

// Homework 6 — Bavly
// CIS 5 Week 06 · Menu

int main() {
  int choice;
  std::string name;
  int number;

  do
  {
    std::cout << "\nMENU \n";
    std::cout << "1. Say hello\n";
    std::cout << "2. Count down\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    if (choice == 1)
    {
      std::cout << "Enter your name: ";
      std::cin >> name;
      std::cout << "Hello " << name << "\n";
    }
    else if (choice == 2)
    {
      std::cout << "Enter a number: ";
      std::cin >> number;
      for (int i = number; i >= 0; i--)
      {
        std::cout << i << " ";
      }
      std::cout << "\n";
    }
    else if (choice == 3)
    {
      std::cout << "Exiting...\n";
    }
    else
    {
      std::cout << "Invalid choice.\n";
    }

  } while (choice != 3);

  std::cout << "The Menu is closed\n";
  return 0;
}
