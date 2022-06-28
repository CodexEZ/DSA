#include<stdio.h>
#include<stdlib.h>
struct myarray{
    int total_Size;
    int used_Size;
    int *ptr;
};
void createArray(struct myarray *a, int tSize, int uSize){
    a->total_Size=tSize;
    a->used_Size=uSize;
    a->ptr=(int *)malloc(tSize*sizeof(int));
}
void setVal(struct myarray *a){
    for (int i=0;i<a->used_Size;i++){
        printf("Enter the value of %d:",i);
        scanf("%d",&a->ptr[i]);

    }
}
void showArray(struct myarray *a){
    for(int i=0;i<a->used_Size;i++){
        printf("%d ",a->ptr[i]);
    }
}
int main(){
    
    struct myarray marks;
    createArray(&marks,10,2);
    setVal(&marks);
    showArray(&marks);
    
}