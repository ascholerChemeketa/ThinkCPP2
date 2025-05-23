

// The tests
TEST_CASE("calculateTax") {
  CHECK(calculateTax(5000, false) == doctest::Approx(500));
  CHECK(calculateTax(50000, false) == doctest::Approx(8000));
  CHECK(calculateTax(80000, true) == doctest::Approx(12500));
  CHECK(calculateTax(120000, true) == doctest::Approx(21500));
}
