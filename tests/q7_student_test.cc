#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q7_Student_0, Mappable) {
    
  CPPLib solution;
      
    const std::string& from = "def";
    
    const std::string& to = "abc";
    
   
    std::map<char,char> Expected = {{'d','a'}, {'e', 'b'}, {'f', 'c'}};
    
    std::map<char,char> Actual = solution.Mappable (from, to);
     
    EXPECT_EQ(Expected, Actual);
}

TEST(Q7_Student_1, Mappable) {
    
  CPPLib solution;
      
    const std::string& from = "def";
    
    const std::string& to = "dad";
    
   
    std::map<char,char> Expected = {{'d','d'}, {'e', 'a'}, {'f', 'd'}};
    
    std::map<char,char> Actual = solution.Mappable (from, to);
     
    EXPECT_EQ(Expected, Actual);
}

TEST(Q7_Student_2, Mappable) {
    
  CPPLib solution;
      
    const std::string& from = "ded";
    
    const std::string& to = "abc";
    
   
    std::map<char,char> Expected = {};
    
    std::map<char,char> Actual = solution.Mappable (from, to);
     
    EXPECT_EQ(Expected, Actual);
}

TEST(Q7_Student_3, Mappable) {
    
  CPPLib solution;
      
    const std::string& from = "defa";
    
    const std::string& to = "abc";
    
   
    std::map<char,char> Expected = {};
    
    std::map<char,char> Actual = solution.Mappable (from, to);
     
    EXPECT_EQ(Expected, Actual);
}

TEST(Q7_Student_4, Mappable) {
    
  CPPLib solution;
      
    const std::string& from = "aba";
    
    const std::string& to = "bab";
    
   
    std::map<char,char> Expected = {{'a','b'}, {'b', 'a'}};
    
    std::map<char,char> Actual = solution.Mappable (from, to);
     
    EXPECT_EQ(Expected, Actual);
}
