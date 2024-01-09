/*

enter title :-PATTHAN
enter genre :-YJUQWDUGY
enter language :-ENGLISH
enter title :-KJHSCAKJB
enter genre :-BJHASCBHC
enter language :-JKHCASHKGJ
enter title :-JHSDHBGS
enter genre :-GHJSHG
enter language :-BHASFJHK


title :PATTHAN
genre :YJUQWDUGY
language :ENGLISH
title :KJHSCAKJB
genre :BJHASCBHC
language :JKHCASHKGJ
title :JHSDHBGS
genre :GHJSHG


*/
#include<stdio.h>
#include<string.h>
struct movie{
	
	char title [20];
	char genre [20];
	char language[20];
	
	
	
};

void main()
{
	struct movie m;
	struct movie m1;
	struct movie m2;
	
	printf("enter title :-");
	scanf("%s",&m.title);
	printf("enter genre :-");
	scanf("%s",&m.genre);
	printf("enter language :-");
	scanf("%s",&m.language);
	
	printf("enter title :-");
	scanf("%s",&m1.title);
	printf("enter genre :-");
	scanf("%s",&m1.genre);
	printf("enter language :-");
	scanf("%s",&m1.language);
	
	
	printf("enter title :-");
	scanf("%s",&m2.title);
	printf("enter genre :-");
	scanf("%s",&m2.genre);
	printf("enter language :-");
	scanf("%s",&m2.language);
	
	printf("\n\n");
	
	printf("title :%\s\n",m.title);
	printf("genre :%s\n",m.genre);
	printf("language :%s\n",m.language);
	
	printf("title :%\s\n",m1.title);
	printf("genre :%s\n",m1.genre);
	printf("language :%s\n",m1.language);
	
	printf("title :%\s\n",m2.title);
	printf("genre :%s\n",m2.genre);
	printf("language :%s\n",m2.language);
}





