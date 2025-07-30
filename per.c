//Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.
void main()
{
	int s1=10,s2=20,s3=30,s4=40,s5=50,total,per;
	total=s1+s2+s3+s4+s5;
	per=(total*100)/500;
	printf("total subject marks %d",total);
	printf("\n percentage is %d",per);
}