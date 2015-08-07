
int array_size;

int calc(int size){
	int bottles[size];
	int i,j,k;
	int wanted;
	
	for(i=0;i<size;i++)
		scanf("%d",&bottles[i]);
	
	for(i=0;i<size;i++)
		printf("%d",bottles[i]);
		
	scanf("%d",&wanted);
		
	for(i=0;i<array_size-2;i++){
		for(j=i+1;j<array_size-1;j++){
			for(k=j+1;k<array_size;k++){
				if((bottles[i]+bottles[j]+bottles[k])==wanted){
					return 1;
				}
			}
		}
	}
	
	return 0;
	
}

int main(){

	scanf("%d",&array_size);
	
	if(calc(array_size))
		printf("True");
	else
		printf("False");	
	
	return 0;
		
}