#include "cpplib.h"
#include "limits"

// Question 1

int CPPLib::myfunction (int input1, int input2){
    int output = 0;
    
    output = input1 * input2;
    return output;
}

std::string CPPLib::myfunction (std::string input1, std::string input2){
    
    std::string output;
    
    output = input1 + input2;
    
    return output;
    
}

std::string CPPLib::myfunction (int input1, std::string input2){
    
    std::string output;
    
    output = std::to_string(input1) + input2;
    
    return output;
    
}

std::string CPPLib::myfunction (std::string input1, int input2){
    
    std::string output;
    
    output = input1 + std::to_string(input2);
    
    return output;
    
}

// Please create your functions here.

// Question 3
void CPPLib::SwapByRefernce(int &input1, int &input2){
    
    int temp = input1;
    input1 = input2;
    input2 = temp;
    // Please fill up this function.
}
void CPPLib::SwapByPointer(int *input1, int *input2){
    
    int temp = *input1;
    *input1 = *input2;
    *input2 = temp;
    // Please fill up this function.
}

// Question 4
void CPPLib::UniqeVectorNotBySet(std::vector<int> &input){
    
    int VectorSize = input.size();
    
    int i = VectorSize - 1;
    
    int j = 0;
    
    int count = 0;
    // Please fill up this function.
    
    while ( i >= 0){
        
        count = 0;
        
        for (j = i-1 ; j>=0; j--){
        
            if (input[i] == input[j]){
                
                input.erase(input.begin() + j);
                count ++;
            }
                
        }
        i = i - count - 1;
    }

}
void CPPLib::UniqeVectorBySet(std::vector<int> &input){
    std::set<int> UniqeSet;
    
    for (int i=input.size()-1 ; i>=0; i--){
        
        if (UniqeSet.count (input[i]) ==0 ){
            
             UniqeSet.insert(input[i]);
        }
        
        else
            input.erase(input.begin() + i);
    }

    // Please fill up this function.
}
void CPPLib::ReverseVector(std::vector<int> &input){
    
    std::vector<int> Reference = input;
    
    int VectorLength = input.size();
    
    for (int i= 0; i< VectorLength; i++) {
        input[i] = Reference[VectorLength-i-1];
    }

    /*
         std::reverse (input.begin(), input.end());
     */
    // Please fill up this function.
}
void CPPLib::OddVector(std::vector<int> &input){
    
    for (int i = input.size() - 1; i >=0; i--) {
        
        if (input[i] %2 == 0)
            input.erase(input.begin() + i);
    }
    // Please fill up this function.
}


//This function's output will first follow Input1's order, and then add Input2's unique element to output
std::vector<int> CPPLib::UnionVectors(std::vector<int> &input1 ,std::vector<int> &input2){
   
    std::vector <int> UnionVector;// Please fill up this function.
    
    std::unordered_set <int> UnionSet;
    
    std::unordered_set <int>::iterator it;
    
    /*
    for (int i = 0; i < input1.size(); i++){
        UnionSet.insert(input1[i]);
    }

    for (std::unordered_set<int>::iterator it=UnionSet.begin(); it!=UnionSet.end(); ++it){
        UnionVector.push_back (*it);
    }
    */
     //std::vector <int> UnionVector (UnionSet.begin(), UnionSet.end());
    
    for (int i=0; i <= (input1.size() -1); i++){
           
           it = UnionSet.find (input1[i]) ;
           
        if (it == UnionSet.end()){
            UnionSet.insert (input1[i]);
            UnionVector.push_back(input1[i]);
        }
       }
 
    for (int i=0; i <= (input2.size() -1); i++){
           
           it = UnionSet.find (input2[i]) ;
           
        if (it == UnionSet.end()){
            UnionSet.insert (input2[i]);
            UnionVector.push_back(input2[i]);
        }

       }
    
    return UnionVector;
}


// Question 5
void CPPLib::ReverseString(std::string &input)
{

    if ((input.length()) == 0){
        
        input = input;
    }
    else{
        
        for (int i=0; i<((input.length())/2); i++){
            
            std::swap (input[i], input[(input.length())-1-i]);
        }
        
    }
    
    // Please fill up this function.
}
std::vector<int> CPPLib::ReverseVector_1(std::vector<int> input)
{
    
    std::stack <int> StackVector;
    
    std::vector <int> output;
    
    if (input.size() == 0){
        
        output = input;
        
    }
    
    else {
        
        
        
           for (int i=0; i<=input.size()-1; i++){
               StackVector.push(input[i]);
           }
        //output.push_back(1);
        
        //StackVector.push(1);
        
           for (int i=0; i<=input.size()-1; i++){
               int a = StackVector.top();
               output.push_back(a);
               StackVector.pop();
           }
        
    }
        
    return output;
    // Please fill up this function.
}
void CPPLib::ToLower(std::string& input)
{
    
    std::string output;
    
    
    if (input.length() == 0){
        
        input = input;
        
    }
    
    else {
        
        for (int i=0; i<=input.length() - 1; i++){
            
            if ((input[i] >= 65) && (input[i] <= 90))
                input[i] = input[i] + 32;
            else
                input[i] = input[i];
        }
    }
    
    //std::transform(input.begin(), input.end(), output.begin(), )
    // Please fill up this function.
}

// Question 6
bool CPPLib::canBePalindrome(const std::string &str)
{
  
    
    std::map <char, int> MapPalindrome;
    std::map<char,int>::iterator it;
    
    bool Palindrome = true;
    bool PrePalindrome = true;
    
    
    int StrLength = str.length();
    
    for (int i=0; i <= StrLength -1; i++){
        
        it = MapPalindrome.find( (str[i]) );
        
        if (it == MapPalindrome.end())
            MapPalindrome [ (str[i]) ] = 1;

        else
            MapPalindrome [ (str[i]) ] = MapPalindrome [ (str[i]) ] + 1;
        
    }
    
    for (std::map<char,int>::iterator it=MapPalindrome.begin(); it!=MapPalindrome.end(); ++it){
        
        if ((StrLength %2 == 0) && (StrLength != 0)){
                   
                   if ((it->second) %2 == 0){
                       Palindrome = true;
                   }
                   else{
                       
                       Palindrome = false;
                       break;
                   }
                   
               }
               else if (StrLength %2 != 0){ //length is odd
                 
                   if ((it->second) %2 == 0) {
                       
                       Palindrome = true;
                   }
                   
                   else if (  ((it->second) %2 != 0) && (PrePalindrome == false)  ){
                       
                       Palindrome = false;
                       break;
                   }
                   
                   else if (  ((it->second) %2 != 0) && (PrePalindrome == true)  ){
                       
                       PrePalindrome = false;
                       Palindrome = true;
                   }
                   
                   else
                       Palindrome = true;
                   
               }
               else //empty string
                   Palindrome = false;
        
    }

    return Palindrome;
     
}

// Question 7 
std::map<char,char> CPPLib::Mappable(const std::string& from, const std::string& to)
{
    
    std::map <char, char> CorressMap;
    std::map<char,char>::iterator it;
    
    
    if ( from.length() == to.length() ){
        
        
        for ( int i = 0; i <= from.length()-1; i++){
            
                it = CorressMap.find (from[i]);
            
                CorressMap.insert(std::pair <char,char> ((from[i]), (to[i])  )   );
            
            if (CorressMap[(from[i])]   != to[i]){
                CorressMap = {};
                break;
            }
            
        }
        
        
        
      /*
        for ( int i = 0; i <= from.length()-1; i++){
            
            it = CorressMap.find (from[i]);
            
            if (CorressMap.find (from[i]) == CorressMap.end())
                CorressMap [ (from[i]) ] = to[i];
            
            else if  (  (CorressMap.find (from[i]) != CorressMap.end() ) &&  ( CorressMap [ (from[i]) ] == to[i])  )
                CorressMap [ (from[i]) ] = to[i];
            
            else {
                CorressMap = {};
                break;
            }

            
        }
       */
             
    }
    else
        CorressMap = {};
    
    return CorressMap;
    
    
    // Please fill up this function.
}

// Question 8
void CPPLib::kthPeek(std::vector<int> &input, int k)
{
    
    sort(input.begin(), input.end());

    std::vector<int> InputCopy = input;
    
    if (!input.empty())
    {
        for (int i=0; i<=input.size() - 1; i++){
            
            if (i > k-1)
                input[i] = InputCopy [input.size()-1-i+k]  ;
            else
                input[i] = InputCopy[i];
        }
    }
    else
        input = input;
    
    // Please fill up this function.
}
