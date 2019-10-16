#include<stdio.h>

int main(){

int day,month;
int total_day=0;
int output=0;

scanf("%d %d",&day,&month);

if(month==1){

total_day=0;}
else if(month==2){

total_day=31;}
else if(month==3){

total_day=59;}
else if(month==4){

total_day=90;}
else if(month==5){

total_day=120;}
else if(month==6){

total_day=151;}
else if(month==7){

total_day=181;}
else if(month==8){

total_day=212;}

else if(month==9){

total_day=243;}

else if(month==10){

total_day=273;}

else if(month==11){

total_day=304;}

else if(month==12){

total_day=334;}

total_day=total_day+day;

if(total_day%7==1){
printf("Thursday");}
else if(total_day%7==2){
printf("Friday");}
else if(total_day%7==3){
printf("Saturday");}
else if(total_day%7==4){
printf("Sunday");}
else if(total_day%7==5){
printf("Monday");}
else if(total_day%7==6){
printf("Tuesday");}
else if(total_day%7==0){
printf("Wednesday");}

return 0;
}
