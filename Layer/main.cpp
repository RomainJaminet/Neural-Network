#include "layer.hpp"
#include <iostream>

using namespace std;

int main() {
  Layer * l1 = new Layer(3);
  Layer * l2 = new Layer(3);
  l2->relier(l1);
  cout << l2->getJson() << endl;

  Layer * test = new Layer(l2->getJson(), l1);
  return 0;
}
