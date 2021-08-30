		#include<stdio.h>
		int digital;//stores marks for digital electronics
		int circuit,total_cuv;//stores marks for circuit theory
		int political;//store marks for political economy
		float gpD,gpC,gpP;//stores gradepoints for digital,circuit and political respectively
		int cuvD=4,cuvC=4,cuvP=3;//stores course unit value for digital electronics,circuit,political.
		int digital_points,circuit_points,political_points;//each stores overall points obtained from each course
		int i; //for looping the program
		int main(){
			//line 10 creates aloop to input all available courses
			for(i=1;i<=4;i++){ 	
			
			switch(i){
			
		case 1:	printf("Enter marks for Digital Electronics:");
		scanf("%d",&digital);
		//line 16-25 sorts the gradepoint equivalent to input marks for digital digital electronics
		if(digital<45){
			gpD=0;
		}if(digital>45){if(digital<=60){
			gpD=3;
		}}if(digital>60){if(digital<=70){
			gpD=3.5;
		}}if(digital>70){if(digital<=80){
			gpD=4.5;
		}}if(digital>80){
			gpD=5;}
	
		digital_points=gpD*cuvD;//overall points obtained from digital electronics
		break;
		case 2:	printf("Enter marks for Circuit Theory:");
		scanf("%d",&circuit);
			//line 32-41 sorts the gradepoint equivalent to input marks for digital circuit theory
			if(circuit<45){
			gpC=0;
		}if(circuit>45){if(circuit<=60){
			gpC=3;
		}}if(circuit>60){if(circuit<=70){
			gpC=3.5;
		}}if(circuit>70){if(circuit<=80){
			gpC=4.5;
		}}if(circuit>80){
			gpC=5;}
	
		
		circuit_points=gpC*cuvC;//overall points obtained from circuit theory
			break;
		case 3:	printf("Enter marks for Political economy:");
		scanf("%d",&political);
			//line 49-58 sorts the gradepoint equivalent to input marks for political economy
		if(political<45){
			gpP=0;
		}if(political>45){if(political<=60){
			gpP=3;
		}}if(political>60){if(political<=70){
			gpP=3.5;
		}}if(political>70){if(political<=80){
			gpP=4.5;
		}}if(political>80){
			gpP=5;}
	
		
		
		political_points=gpP*cuvP;//overall points obtained from political econony
		break;
		}
		
	if(i==3){
	
		//calculation of GPA
		float total_points,GPA;
		total_cuv=cuvD+cuvC+cuvP;
	    total_points=digital_points+circuit_points+political_points;
		GPA=total_points/total_cuv;
		
		//line 75-84 outputs the overall information needed	
	printf("-------------------------------------------------------\n");
		printf("    | Course Unit         | Marks | Grade Point |\n");
		printf("---------------------------------------------------\n");	
		printf("\n  | DIGITAL ELECTRONICS |  %d   |      %.1f     |",digital,gpD);
		printf("\n  | CIRCUIT THEORY      |  %d   |      %.1f     |",circuit,gpC);
		printf("\n  | POLITICAL ECONOMY   |  %d   |      %.1f     |\n",political,gpP);
		printf("---------------------------------------------------\n\n");
		
		printf(">>>>>>>>  Your GPA is %.2f <<<<<<<",GPA);
	
	}
		}
	return 0;	
		}
		
