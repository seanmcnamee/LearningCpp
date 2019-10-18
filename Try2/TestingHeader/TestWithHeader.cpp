#include "TestWithHeader.h"

TestWithHeader::TestWithHeader(int start): num(start){}

void TestWithHeader::increment(int value) {
    num += value;
}

void TestWithHeader::printValue() {
    std::cout << num << std::endl;
}

int main() {
    TestWithHeader t(2);
    t.increment(23);
    t.printValue();
}