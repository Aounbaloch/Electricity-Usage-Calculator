#include <iostream>

using namespace std;

int main() {
  double previous_unit, current_unit, unit_price, days_used, remaining_days;

  // Get user input
  cout << "Enter previous meter reading: ";
  cin >> previous_unit;
  cout << "Enter current meter reading: ";
  cin >> current_unit;
  cout << "Enter unit price (PKR per unit): ";
  cin >> unit_price;
  cout << "Enter number of days for which current reading is taken: ";
  cin >> days_used;

  // Calculate remaining days
  remaining_days = 30 - days_used;

  // Check for valid days used (avoid negative values)
  if (days_used <= 0) {
    cout << "Error: Days used cannot be zero or negative." << endl;
    return 1;
  }

  // Calculate current used units
  double current_used_units = current_unit - previous_unit;

  // Calculate estimated units for a month (assuming similar usage pattern)
  double estimated_monthly_units = current_used_units / days_used * 30;

  // Calculate current used units price
  double current_used_units_price = current_used_units * unit_price;

  // Daily used units (current period)
  double daily_used_units = current_used_units / days_used;

  // Weekly used units (current period, assuming 7 days in a week)
  double weekly_used_units = daily_used_units * 7;

  // Bi-monthly used units (estimated, assuming similar usage for 2 months)
  double bi_monthly_used_units = estimated_monthly_units * 2;

  // Monthly used units (estimated)
  double monthly_used_units = estimated_monthly_units;

  // Daily price
  double daily_price = current_used_units_price / days_used;

  // Weekly price (assuming 7 days in a week)
  double weekly_price = daily_price * 7;

  // Bi-monthly price (assuming 2 months)
  double bi_monthly_price = current_used_units_price * 2;

  // Monthly price (assuming 30 days in a month)
  double monthly_price = estimated_monthly_units * unit_price;

  // Print results
  cout << "\n**Current Used Units:** " << current_used_units << endl;
  cout << "**Estimated Units for 30 Days:** " << estimated_monthly_units << endl;

  cout << "\n**Daily Used Units (Current Period):** " << daily_used_units << endl;
  cout << "**Daily Price (PKR):** " << daily_price << endl;

  cout << "\n**Weekly Used Units (Current Period, Assuming 7 Days):** " << weekly_used_units << endl;
  cout << "**Weekly Price (PKR):** " << weekly_price << endl;

  cout << "\n**Bi-Monthly Used Units (Estimated, Assuming Similar Usage):** " << bi_monthly_used_units << endl;
  cout << "**Bi-Monthly Price (PKR):** " << bi_monthly_price << endl;

  cout << "\n**Monthly Used Units (Estimated):** " << monthly_used_units << endl;
  cout << "**Monthly Price (PKR):** " << monthly_price << endl;

  return 0;
}
