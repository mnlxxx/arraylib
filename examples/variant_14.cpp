#include "arraylib.h"

#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
  int sensor[] = {20, 19, 27, 23, 17, 21, 26, 22, 18, 30, 24, 16};
  const std::size_t n = sizeof(sensor) / sizeof(sensor[0]);

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "Количество измерений: " << n << "\n";
  std::cout << "Минимальное показание: " << arr_min(sensor, n) << "\n";
  std::cout << "Максимальное показание: " << arr_max(sensor, n) << "\n";
  std::cout << "Среднее показание: " << arr_average(sensor, n) << "\n";

  int below = 0;
  int above = 0;
  for (std::size_t i = 0; i < n; ++i) {
    if (sensor[i] < 18)
      ++below;
    if (sensor[i] > 25)
      ++above;
  }
  std::cout << "Ниже допустимого диапазона (< 18): " << below << "\n";
  std::cout << "Выше допустимого диапазона (> 25): " << above << "\n";

  return 0;
}