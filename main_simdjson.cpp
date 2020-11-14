#include "simdjson/simdjson.h"

int main(void) {
   simdjson::dom::parser parser;
   std::cout << parser.load("citylots.json").at_pointer("/features/100000/geometry/coordinates/0/0") << std::endl;
   return 0;
}
