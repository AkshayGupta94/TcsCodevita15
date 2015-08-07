
int main(){

		int number_test_cases;
		int supply;
		int remainder;
		int number_of_bottles;
		int count_test_cases;
		int i;
		int bottles [4] = {10,7,5,1};
		
		int debug = 0;
		
		count_test_cases = 0;
		
		scanf("%d",&number_test_cases);
		
		while(count_test_cases<number_test_cases){
			remainder = 0;
			number_of_bottles=0;
			
			scanf("%d",&supply);
			
			for(i=0;i<4;i++){
				if(debug)
					printf("bottle capacity %d\n",bottles[i]);
				number_of_bottles += supply/bottles[i];
				if(debug)
					printf("number of bottles %d\n",number_of_bottles);
				remainder = supply%bottles[i];
				if(debug)
					printf("remainder is %d\n",remainder);
				if(remainder==0)
					break;
				supply = remainder;
				if(debug){
					printf("new supply is %d\n");
				}
			}
			
			printf("%d",number_of_bottles);
			
			count_test_cases++;
		}
		
		return 0;
		
}