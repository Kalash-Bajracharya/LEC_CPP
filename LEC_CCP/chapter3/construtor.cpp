

#include <iostream>
using namespace std;


class Wall {
  private:
    double length;
    double height;

  public:
    Wall(double len, double hgt) {
      length = len;
      height = hgt; 
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  Wall wall1(8.2, 8.2);
  Wall wall2(8.5, 8.5);

  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}