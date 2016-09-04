#include<conio.h>
#include<stdio.h>
#include<process.h>

void print(){

   printf("\n\t********************************************************\n");
   printf("\t**                                                    **\n");
   printf("\t**     -----Simple Unhider-----                       **\n");
   printf("\t**                                                    **\n");
   printf("\t**     Copy this software where you want to unhide    **\n");
   printf("\t**                                                    **\n");
   printf("\t**     Unhide ALL FOLDERS and ALL FILES press : *     **\n");
   printf("\t**     View HIDDEN FILES and FOLDERS press    : 9     **\n");
   printf("\t**     To EXIT press                          : /     **\n");
   printf("\t**                                                    **\n");
   printf("\t**                                       by dilusha   **\n");
   printf("\t**                                                    **\n");
   printf("\t********************************************************\n");	
}

int main(){

 system("color 02");
 char k;

while(1){
	print();
	k=getch();
	
	if(k=='/'){
		exit(1);
	}
	
	else if(k=='*'){
		printf("\n\tPlease wait..............");
		system("attrib *.* -h -s /s /d");
		system("attrib -s -h -a -r *.*");
		printf("\n\n\tUnhide Successful........\n\n");
	}
	
	else if(k=='9'){
		system("dir/ah");
	}
	
}
return 0;
}

