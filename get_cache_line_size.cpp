#include "cache_line_size.h"

#include <iostream>

int
main()
{
  size_t cls = cache_line_size();
  std::cout << "\ncache line size: " << cls << " bytes\n";
}
