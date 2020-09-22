#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q1_Student_0, myfunction) {
    
    CPPLib solution;
    
    int input1 = 10;
    int input2 = 25;
    
    int Expected = 250;
    
    int Actual = solution.myfunction (input1, input2);
    
    
  EXPECT_EQ(Expected, Actual);
}


TEST(Q1_Student_1, myfunction) {
    
    CPPLib solution;
    
    std::string input1 = "abcd";
    std::string input2 = "iejk";
    
    std::string Expected = "abcdiejk";
    
    std::string Actual = solution.myfunction (input1, input2);
    
    
  EXPECT_EQ(Expected, Actual);
}

TEST(Q1_Student_2, myfunction) {
    
    CPPLib solution;
    
    int input1 = 10;
    std::string input2 = "abcd";
    
    std::string Expected = "10abcd";
    
    std::string Actual = solution.myfunction (input1, input2);
    
    
  EXPECT_EQ(Expected, Actual);
}

TEST(Q1_Student_3, myfunction) {
    
    CPPLib solution;
    
    std::string input1 = "abcd";
    int input2 = 25;
    
    std::string Expected = "abcd25";
    
    std::string Actual = solution.myfunction (input1, input2);
    
    
  EXPECT_EQ(Expected, Actual);
}

