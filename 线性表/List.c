#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 10
typedef struct SequceList{
	int element[MAXSIZE];
	int length;
}SqList;

/*��ȡԪ��*/
//����һ 
int GetElement(SqList L,int index){
    return L.element[index-1];
}
//��������
/*
bool GetElement(SqList L,int index,char *element){
    *element=L.element[index-1];
    return 0;
}
*/


/*����Ԫ��*/
int InsertElement(){
	
}


/*ɾ��Ԫ��*/
int DeleteElement(){
	
}

 
int main(){
    SqList L;
    printf("result:%d",GetElement(L,1));
}
