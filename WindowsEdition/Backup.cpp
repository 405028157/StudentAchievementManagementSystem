//Copyright (C) 2018 XiyuWang All rights reserved.
#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
ifstream fin;
ofstream fout;
int main(){
	system("cls");
	system("color f0");
	system("title ѧ���ɼ�����ϵͳ-�������");
	cout<<"���ڼ�����ݡ���"<<endl;
	fin.open("~Control.usr");
	if(!fin){
		system("cls");
		cout<<"ȱʧ�ļ���"<<endl;
		getch();
		return 0;
	}
	fin.close();
	fin.open("~Control.passwd");
	if(!fin){
		system("cls");
		cout<<"ȱʧ�ļ���"<<endl;
		getch();
		return 0;
	}
	cout<<"���ڵ������ݡ���"<<endl;
	system("copy ~Control.usr C:\\ProgramData\\StudentAchievementManagementSystem\\~Control.usr");
	system("copy ~Control.passwd C:\\ProgramData\\StudentAchievementManagementSystem\\~Control.passwd");
	cout<<"�����н�StudentScore.dat��ClassEdition.dat���Ƶ������������ļ��У� "<<endl;
	getch();
	cout<<"����ɾ�������ļ����е��ļ�����"<<endl;
	system("del *.* /f/s/q");
	fout.open("del.bat");
	fout<<"taskkill /f /im Backup.exe"<<endl; 
	fout<<"del Backup.exe /f/s/q"<<endl;
	fout<<"del del.bat /f/s/q"<<endl;
	fout.close();
	system("cls");
	cout<<"��ɣ�"<<endl;
	getch();
	system("del.bat");	
	return 0;
}
