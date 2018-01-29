#include <gmock/gmock.h>
#include <fizzbuzz.h>


using namespace testing;
using namespace codingdojo;

const std::string FIZZ = "Fizz";
const std::string BUZZ = "Buzz";
const std::string FIZZ_BUZZ = "FizzBuzz";

struct FizzBuzzTestSuite : public Test
{
    FizzBuzz fizzbuzz;

};

struct FBParams{
    FBParams(int i, std::string s) : input(i), result(s) {}
    int input;
    std::string result;
};

struct FizzBuzzTestSuitePar : public FizzBuzzTestSuite,
        public WithParamInterface<FBParams>
{};

TEST_P(FizzBuzzTestSuitePar, doStuff)
{
    // GIVEN
    int number = GetParam().input;
    std::string expectedResult = GetParam().result;

    // WHEN

    // THEN
    ASSERT_EQ(fizzbuzz.compute(number), expectedResult);
}

INSTANTIATE_TEST_CASE_P(numbersTests,
                        FizzBuzzTestSuitePar,
                        Values(
                            FBParams(1, "1"),
                            FBParams(2, "2")));

INSTANTIATE_TEST_CASE_P(fizzTests,
                        FizzBuzzTestSuitePar,
                        Values(
                            FBParams(3, FIZZ),
                            FBParams(6, FIZZ)));

INSTANTIATE_TEST_CASE_P(buzzTests,
                        FizzBuzzTestSuitePar,
                        Values(
                            FBParams(5, BUZZ),
                            FBParams(10, BUZZ),
                            FBParams(15, FIZZ_BUZZ)));

TEST_F(FizzBuzzTestSuite, shouldTakeArgudments)
{
    // GIVEN
    FizzBuzz(2,"Fizz");
}
