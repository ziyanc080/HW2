#include "src/lib/cpplib.h"

#include <map>
#include <vector>
#include <stack>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q5_Student_1_0, ReverseString) {
    CPPLib solution;
     
    std::string input = "def";
  
    std::string Expected = "fed";
   
    solution.ReverseString (input);
    
    EXPECT_EQ(Expected, input);
}

TEST(Q5_Student_1_1, ReverseString) {
    CPPLib solution;
     
    std::string input = "";
  
    std::string Expected = "";
   
    solution.ReverseString (input);
    
    EXPECT_EQ(Expected, input);
}

TEST(Q5_Student_1_2, ReverseString) {
    CPPLib solution;
     
    std::string input = "aab6";
  
    std::string Expected = "6baa";
   
    solution.ReverseString (input);
    
    EXPECT_EQ(Expected, input);
}


TEST(Q5_Student_2_0, ReverseVector_1) {
    CPPLib solution;
     
    std::vector<int> input = {5, 8, 4, 1};
  
    std::vector<int> Expected = {1, 4, 8, 5};
   
    std::vector<int> Actual = solution.ReverseVector_1 (input);
    
    EXPECT_EQ(Expected, Actual);
}


TEST(Q5_Student_2_1, ReverseVector_1) {
    CPPLib solution;
     
    std::vector<int> input = {7, 9, 5, 2, 3};
  
    std::vector<int> Expected = {3, 2, 5, 9, 7};
   
    std::vector<int> Actual = solution.ReverseVector_1 (input);
    
    EXPECT_EQ(Expected, Actual);
}

TEST(Q5_Student_2_2, ReverseVector_1) {
    CPPLib solution;
     
    std::vector<int> input = {};
  
    std::vector<int> Expected = {};
   
    std::vector<int> Actual = solution.ReverseVector_1 (input);
    
    EXPECT_EQ(Expected, Actual);
}

TEST(Q5_Student_3_1, ToLower) {
    CPPLib solution;
     
    std::string input = "EE599";
  
    std::string Expected = "ee599";
   
    solution.ToLower (input);
    
    EXPECT_EQ(Expected, input);
}

TEST(Q5_Student_3_2, ToLower) {
    CPPLib solution;
     
    std::string input = "A2CD";
  
    std::string Expected = "a2cd";
   
    solution.ToLower (input);
    
    EXPECT_EQ(Expected, input);
}

TEST(Q5_Student_3_3, ToLower) {
    CPPLib solution;
     
    std::string input = "";
  
    std::string Expected = "";
   
    solution.ToLower (input);
    
    EXPECT_EQ(Expected, input);
}


