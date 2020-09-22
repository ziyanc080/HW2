#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q3_Student_0, SwapByRefernce) {
    
    CPPLib solution;
       
    int input1 = 5;
    int input2 = 6;
       
    int Expect1 = 6;
    int Expect2 = 5;
    
    solution.SwapByRefernce(input1,input2);
    
    EXPECT_EQ(Expect1, input1);
    
    EXPECT_EQ(Expect2, input2);
}

TEST(Q3_Student_1, SwapByPointer) {
    
    CPPLib solution;
       
    int input1_value = 5;
    int input2_value = 6;
       
    int *input1 = &input1_value;
    int *input2 = &input2_value;
    


    /*
    int *Expect2 = &input2_value;
    int *Expect1 = &input1_value;
    */
    
    
    solution.SwapByPointer(input1,input2);
    
    int expec1_value = *input1;
    int expec2_value = *input2;
    
    EXPECT_EQ(expec1_value, input1_value);
    
    EXPECT_EQ(expec2_value, input2_value);
}
