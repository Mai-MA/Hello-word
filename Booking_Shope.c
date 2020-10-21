#include<stdio.h>
#include<conio.h>
#include<process.h>
void main(){
	int Book,Pen,rular,Up_Price;
	float T_Book,T_Pen,T_Rular,T_all;
	printf("Place inputn Qauintity of book:");
	scanf("%d",&Book);
	printf("Place input unit price:");
	scanf("%d",&Up_Price);
	if(Book<=15){
		T_Book=Book*Up_Price;
		printf("You can pay just=0.1%f Rile\n",T_Book);
	}
	if(Book>15 && Book<=30){
		T_Book=(Book*95/100)*Up_Price;
		printf("You can pay just=0.1%f Rile\n",T_Book);
	}
	if(Book>30 && Book<=60){
		T_Book=(Book*95/100)*Up_Price;
		printf("You can pay just=0.1%f Rile\n",T_Book);
	}
	printf("Place inputn Qauintity of Pen:");
	scanf("%d",&Pen);
	printf("Place input unit price:");
	scanf("%d",&Up_Price);
	if(Pen<=15){
		T_Pen=Pen*Up_Price;
		printf("You can pay just=0.1%f Rile\n",T_Pen);
	}
	if(Pen>15 && Pen<=30){
		T_Pen=(Pen*95/100)*Up_Price;
		printf("You can pay just=0.1%f Rile\n",T_Pen);
	}
	if(Pen>30 && Pen<=60){
		T_Pen=(Pen*95/100)*Up_Price;
		printf("You can pay just=0.1%f Rile\n",T_Pen);
	}
	printf("Place inputn Qauintity of Rular:");
	scanf("%d",&rular);
	printf("Place input unit price:");
	scanf("%d",&Up_Price);
	if(rular<=15){
		T_Rular=rular*Up_Price;
		printf("You can pay just=0.1%f Rile\n",T_Rular);
	}
	if(rular>15 && rular<=30){
		T_Rular=(rular*95/100)*Up_Price;
		printf("You can pay just=0.1%f Rile\n",T_Rular);
	}
	if(rular>30 && rular<=60){
		T_Rular=(rular*95/100)*Up_Price;
		printf("You can pay just=0.1%f Rile\n",T_Rular);
	}
	T_all=T_Book+T_Pen+T_Rular;
	printf("Totle all to pay many of some:0.0%f\n",T_all);
	printf("......................................\n");
	printf("\t\t\t\t\t Continue Program (Y/N)?");
//fflush(stdin);
//ch=getchar();
//if(ch=='Y' || ch=='y')
//goto Again;
//exit(1);

	getch();
	//return 0;
}
