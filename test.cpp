#include <iostream>
#include "nuttiest/nuttiest.hpp"
#include "cipherFunctions.cpp"

using namespace std;
using namespace nuttiest;

int main() {
  section("indexChar") {
    unit_test("\'A\' returns (1)") {
      assert_eq(1, indexChar('A'));
    }
    unit_test("\'Z\' returns (26)") {
      assert_eq(26, indexChar('Z'));
    }
  }
  section("isInAlphabetIndex") {
    unit_test("\"AAA\" is all caps") {
      string str {"AAA"};
      assert_eq(true, isInAlphabetIndex(str));
    }
    unit_test("\"AAa\" is not all caps") {
      string str {"AAa"};
      assert_eq(false, isInAlphabetIndex(str));
    }
  }
  section("charShiftRight") {
    unit_test("(2) and \'A\' returns \'C\'") {
      assert_eq('C', charShiftRight(2, 'A'));
    }
    unit_test("(25) and \'C\' returns \'A\'") {
      assert_eq('A', charShiftRight(25, 'C'));
    }
  }
  section("charShiftLeft") {
   unit_test("(2) and \'C\' returns \'A\'") {
    assert_eq('A', charShiftLeft(2, 'C'));
    }
    unit_test("(25) and \'A\' returns \'C\'") {
      assert_eq('C', charShiftLeft(25, 'A'));
    }
  }
  summary();
}