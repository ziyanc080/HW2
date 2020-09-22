#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q6_Student_0, canBePalindrome) {
    
    CPPLib solution;
    
    std::string Input = "abcdabc";
    
    bool Actual = solution.canBePalindrome(Input);
    
    bool Expected = true;
    
  EXPECT_EQ(Actual, Expected);
}


TEST(Q6_Student_1, canBePalindrome) {
    
    CPPLib solution;
    
    std::string Input = "aaa";
    
    bool Actual = solution.canBePalindrome(Input);
    
    bool Expected = true;
    
  EXPECT_EQ(Actual, Expected);
}



TEST(Q6_Student_2, canBePalindrome) {
    
    CPPLib solution;
    
    std::string Input = "abca";
    
    bool Actual = solution.canBePalindrome(Input);
    
    bool Expected = false;
    
  EXPECT_EQ(Actual, Expected);
}



TEST(Q6_Student_3, canBePalindrome) {
    
    CPPLib solution;
    
    std::string Input = "ababb";
    
    bool Actual = solution.canBePalindrome(Input);
    
    bool Expected = true;
    
  EXPECT_EQ(Actual, Expected);
}



TEST(Q6_Student_4, canBePalindrome) {
    
    CPPLib solution;
    
    std::string Input = "pp";
    
    bool Actual = solution.canBePalindrome(Input);
    
    bool Expected = true;
    
  EXPECT_EQ(Actual, Expected);
}



TEST(Q6_Student_5, canBePalindrome) {
    
    CPPLib solution;
    
    std::string Input = "aphaph";
    
    bool Actual = solution.canBePalindrome(Input);
    
    bool Expected = true;
    
  EXPECT_EQ(Actual, Expected);
}
