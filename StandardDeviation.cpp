// ------------------------COMPLETE THE CODE-----------------------------
#include <bits/stdc++.h>
using namespace std;
double distance(double x1, double y1, double x2, double y2) {
  double dx = x2 - x1;
  double dy = y2 - y1;
  return std::sqrt(dx*dx + dy*dy);
}

double mean(const std::vector<double>& vec) {
  double sum = 0.0;
  for (double elem : vec) {
    sum += elem;
  }
  return sum / vec.size();
}

double standard_deviation(const std::vector<double>& vec) {
  double deviations = 0.0;
  double m = mean(vec);
  for (double it : vec) {
    deviations += ( (it-m) * (it-m) );
  }
  return sqrt( deviations / vec.size() );
}

int main() {
  double d = distance(0.0, 0.0, 1.0, 1.0);
  std::cout << "Distance: " << d << std::endl;
  std::vector<double> vec = {1.0, 2.0, 3.0, 4.0, 5.0};
  double m = mean(vec);
  std::cout << "Mean: " << m << std::endl;
  double s = standard_deviation(vec);
  std::cout << "Standard deviation: " << s << std::endl;
  return 0;
}
// ---------------------------ALL THE BEST-----------------------------