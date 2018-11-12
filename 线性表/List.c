#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 10
typedef struct SequceList{
	int element[MAXSIZE];
	int length;
}SqList;

/*获取元素*/
//方法一 
int GetElement(SqList L,int index){
    return L.element[index-1];
}
//方法二：
/*
bool GetElement(SqList L,int index,char *element){
    *element=L.element[index-1];
    return 0;
}
*/


/*插入元素*/
int InsertElement(){
	
}


/*删除元素*/
int DeleteElement(){
	
}

 
int main(){
    SqList L;
    printf("result:%d",GetElement(L,1));
}
