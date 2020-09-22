#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q4_Student_0, UniqeVectorNotBySet) {
    
    CPPLib solution;
       
    std::vector<int> Input = {1, 2, 3, 3, 6, 7, 8, 8, 8};
       
    std::vector<int> Expected = {1, 2, 3, 6, 7, 8};
    
    solution.UniqeVectorNotBySet (Input);
    
    EXPECT_EQ(Expected, Input);
    
}
 

TEST(Q4_Student_1, UniqeVectorBySet) {
    
    CPPLib solution;
       
    std::vector<int> Input = {1, 2, 2, 2, 2, 7, 9, 9};
       
    std::vector<int> Expected = {1, 2, 7, 9};
    
    solution.UniqeVectorBySet (Input);
    
    
    EXPECT_EQ(Expected, Input);
    
}

 TEST(Q4_Student_2, ReverseVector) {
    
    CPPLib solution;
       
    std::vector<int> Input = {1, 2, 3, 4, 5, 6, 7};
       
    std::vector<int> Expected = {7, 6, 5, 4, 3, 2, 1};
    
    //for (int i:Input){
    //    std::cout<<i;
    //}
    
    solution.ReverseVector (Input);
    
    //std::cout<<std::endl;
    
    //for (int i:Input){
    //    std::cout<<i;
    //}
    
    EXPECT_EQ(Expected, Input);
    
}


TEST(Q4_Student_3, OddVector) {
    
    CPPLib solution;
       
    std::vector<int> Input = {1, 2, 3, 4, 5, 6, 7};
       
    std::vector<int> Expected = {1, 3, 5, 7};
    
    solution.OddVector (Input);
    
    
    EXPECT_EQ( Input, Expected);
    
}

TEST(Q4_Student_4, UnionVectors) {
    
    CPPLib solution;
       
    std::vector<int> Input1 = {1, 2, 6, 7};
    
    std::vector<int> Input2 = {3, 4, 6, 6, 8, 9};
       
    std::vector<int> Expected = {1, 2, 6, 7, 3, 4, 8, 9};
    
    std::vector<int> Actual = solution.UnionVectors (Input1, Input2);
    
    
    EXPECT_EQ(Expected, Actual);
    
}

TEST(Q4_Student_5, UnionVectors) {
    
    CPPLib solution;
       
    std::vector<int> Input1 = {1, 2, 3, 6};
    
    std::vector<int> Input2 = {3, 4, 6, 6, 8};
       
    std::vector<int> Expected = {1, 2, 3, 6, 4, 8};
    
    std::vector<int> Actual = solution.UnionVectors (Input1, Input2);
    
    
    EXPECT_EQ(Expected, Actual);
    
}
