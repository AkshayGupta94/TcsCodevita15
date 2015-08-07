#include<iostream>

using namespace std;

int main(){

		int number_test_cases;
		int supply;
		int remainder;
		int number_of_bottles;
		int count_test_cases;
		int i;
		int bottles [4] = {10,7,5,1};
		
		count_test_cases = 0;
		
		cin>>number_test_cases;
		
		while(count_test_cases<number_test_cases){
			remainder = 0;
			number_of_bottles=0;
			
			cin>>supply;
			
			for(i=0;i<4;i++){
				number_of_bottles += supply/bottles[i];
				remainder = supply%bottles[i];
				if(remainder==0)
					break;
				supply = remainder;
			}
			
			cout<<number_of_bottles;
			
			count_test_cases++;
		}
		
		return 0;
		
}