#include<stdio.h>
int main(){


    int number_test_cases;
		int supply;
		int remainder;
		int number_of_bottles;
		int count_test_cases;

		int bottles [4] = {10,7,5,1};

      count_test_cases = 0;

     scanf("%d",&number_test_cases);


		while(count_test_cases<number_test_cases){
			remainder = 0;
			number_of_bottles=0;

			scanf("%d",&supply);

                if(supply==0)
                    break;
			while(supply>0){
                    if(supply>=bottles[0]){
                number_of_bottles += supply/bottles[0];
                remainder = supply%bottles[0];
                supply = remainder;

                }
                 if(supply>=bottles[1]&& supply<bottles[0]){
                    number_of_bottles += supply/bottles[1];
                remainder = supply%bottles[1];
                supply = remainder;


                }

                 if(supply>=bottles[2]&& supply<bottles[1]){
                    number_of_bottles += supply/bottles[2];
                remainder = supply%bottles[2];
                supply = remainder;


                }

                 if(supply>=bottles[3] && supply<bottles[2]){
                    number_of_bottles += supply/bottles[3];
                remainder = supply%bottles[3];
                supply = remainder;
                                }
            else{

                    break;
                }
			}
			printf("%d \n",number_of_bottles);

			count_test_cases++;
		}








return 0;

}
