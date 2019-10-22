#include<stdio.h>

int main(){

int n,*n_ptr;
int m,*m_ptr;

n_ptr=&n;
m_ptr=&m;

scanf("%d %d",n_ptr,m_ptr);

if((*n_ptr)-(*m_ptr)>1){printf("Dr. Chaz needs %d more pieces of chicken!",(*n_ptr)-(*m_ptr));}
else if((*n_ptr)-(*m_ptr)==1){printf("Dr. Chaz needs %d more piece of chicken!",(*n_ptr)-(*m_ptr));}
else if((*m_ptr)-(*n_ptr)>1){printf("Dr. Chaz will have %d pieces of chicken left over!",(*m_ptr)-(*n_ptr));}
else if((*m_ptr)-(*n_ptr)==1){printf("Dr. Chaz will have %d piece of chicken left over!",(*m_ptr)-(*n_ptr));}

return 0;
}
