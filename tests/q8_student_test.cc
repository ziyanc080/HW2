#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q8_Student_0, kthPeek) {
    
    CPPLib solution;
       
    std::vector<int> Input = {3, 1, 2, 5, 4, 6, 8, 7};
    
    int k = 5;
       
    std::vector<int> Expected = {1, 2, 3, 4, 5, 8, 7, 6};
    
    solution.kthPeek (Input, k);
    
    EXPECT_EQ(Expected, Input);

}


TEST(Q8_Student_1, kthPeek) {
    
    CPPLib solution;
       
    std::vector<int> Input = {3, 1, 2, 5, 4, 6, 8, 7};
    
    int k = 5;
       
    std::vector<int> Expected = {1, 2, 3, 4, 5, 8, 7, 6};
    
    solution.kthPeek (Input, k);
    
    EXPECT_EQ(Expected, Input);

}

TEST(Q8_Student_2, kthPeek) {
    
    CPPLib solution;
       
    std::vector<int> Input = {6, 2, 0, 1, 4, 5};
    
    int k = 8;
       
    std::vector<int> Expected = {0, 1, 2, 4, 5 ,6};
    
    solution.kthPeek (Input, k);
    
    EXPECT_EQ(Expected, Input);

}

TEST(Q8_Student_3, kthPeek) {
    
    CPPLib solution;
       
    std::vector<int> Input = {1, 1, 1, 1, 1};
    
    int k = 5;
       
    std::vector<int> Expected = {1, 1, 1, 1, 1};
    
    solution.kthPeek (Input, k);
    
    EXPECT_EQ(Expected, Input);

}

TEST(Q8_Student_4, kthPeek) {
    
    CPPLib solution;
       
    std::vector<int> Input = {9, 9, 8, 8, 7, 7, 6, 6};
    
    int k = 3;
       
    std::vector<int> Expected = {6, 6, 7, 9, 9, 8, 8, 7};
    
    solution.kthPeek (Input, k);
    
    EXPECT_EQ(Expected, Input);

}

TEST(Q8_Student_empty, kthPeek) {
    
    CPPLib solution;
       
    std::vector<int> Input = {};
    
    int k = 5;
       
    std::vector<int> Expected = {};
    
    solution.kthPeek (Input, k);
    
    EXPECT_EQ(Expected, Input);

}
