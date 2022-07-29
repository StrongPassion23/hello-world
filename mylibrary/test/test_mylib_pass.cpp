
#include "mylibrary/mylibrary.h"
#include <cassert>

void test_valid() {
 static_assert(ANSWER == 42);
}

int main(int argc, char* argv[]) {
 test_valid();
}