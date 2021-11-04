#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>


using namespace std;

void get_print_sticks(int stick[], int nums);

int main(int argc, char* argv[]){
    
    ifstream file;
    file.open(argv[1]);
    
    if(file.is_open()){
        
        int nums;
        int stick[50];
        
        while(!file.eof()){
            
        file >> nums;
        
        for(int i = 0; i < nums; i++){
            file >> stick[i];
            
            
            }
        
            
        }
        
        get_print_sticks(stick, nums);
        
        
  
    }else{
        
        cout << argv[1] << " did not open successfully" << endl;
    }
    
    
    
    
    
return 0;
}

void print_sticks(int stick[], int nums)
{
    int i;
    for(i = 0 ; i < nums; i++)
    {
        cout << stick[i] << " "; 
    }
    cout << endl;
}
void get_print_sticks(int stick[], int nums){
    
    cout << nums << endl;
    int count = 0;
    
    
    int max = stick[0];
           
        for(int i = 0; i < nums; i++){
            if(stick[i] > max){
                max = stick[i];
            }
        }
            
            
           for(int k = 0; k < nums - 1; k++){
           int small = 100;
           
        
        for(int i = 0; i < nums; i++){
            if(stick[i] < small && stick[i] > 0){
                small = stick[i];
            }
        }
        
        if(small == 0 || small == 100){
            return;
        }
            for(int i = 0; i < nums; i++){
            int var = 0;
            var = stick[i];
            var = var - small;
            stick[i] = var;
           
            if(stick[i] > 0){
                count++;
            }
        }
        if(count == 0){
            return;
        }
        cout << count;
    
    cout << endl;
   count = 0;
    
}

}
