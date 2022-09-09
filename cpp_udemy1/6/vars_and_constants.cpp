#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

  const double sm_room_price {25.0};
  const double lg_room_price {35.0};
  const double tax_rate {0.06};
  const int estimate_validity {30};

  int num_sm_rooms;
  int num_lg_rooms;

  cout << "How many small rooms would you like to book? ";
  cin >> num_sm_rooms;
  cout << "How many large rooms would you like to book? ";
  cin >> num_lg_rooms;
  // cout << endl;

  cout << endl << "Estimate for carpet cleaning service" << endl;
  cout << "Number of small rooms: " << num_sm_rooms << endl;
  cout << "Number of large rooms: " << num_lg_rooms << endl;
  cout << "Price per small room: " << sm_room_price << endl;
  cout << "Price per large room: " << lg_room_price << endl;

  double cost {sm_room_price * num_sm_rooms + lg_room_price * num_lg_rooms};
  cout << "Cost: " << cost << endl;

  double tax {cost * tax_rate};
  cout << "Tax: " << tax << endl;

  cout << "============================================" << endl;
  cout << "Total estimate: " << cost + tax << endl;
  cout << "This estimate is valid for " << estimate_validity << " days." << endl;


  return 0;
}
