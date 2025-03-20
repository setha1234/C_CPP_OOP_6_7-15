// Create a product for store phone
// Code Name Quantity Price
/*
	1.Create stock.
	2.Display all stock
	3.Search for product.[By id / Name]
	4.Update product.
	5.Delete product.[By Id/ Name]
	6.Insert / Add Product.
	7.Sort Product[By Id/Name]
	0.Exit
*/
#include<stdio.h>
#include<stdbool.h> // for using with boolean : bool
#include<strings.h>
int code[100],quantity[100],Size;
char name[100][100];
float price[100];
bool check;

void CreateStock(){
	int i;
	printf("\t==================[Create Phone to Stock]=====================\n");
	printf("\tEnter size of phone for store in stock :");scanf("%d",&Size);
	for(i=0;i<Size;i++)
	{
		printf("\t============[Stock %d]=============\n",i+1);
		printf("\tEnter the Code    :");scanf("%d",&code[i]);
		printf("\tEnter the Name    :");scanf("%s",&name[i]);
		printf("\tEnter the Price   :");scanf("%f",&price[i]);
		printf("\tEnter the Quantity:");scanf("%d",&quantity[i]);
		printf("\n");
	}
	printf("\t=================[Create Complete]====================\n");	
}

void DisplayPhone(){
	int i;
	printf("\t================[Display All Phone]======================\n");
	printf("\tCode Phone\tName Phone\tPrice \t Quantity\n");
	for(i=0;i<Size;i++){
		printf("\t%d\t\t%s\t\t%.2f\t%d\n",code[i],name[i],price[i],quantity[i]);
	}
	printf("\t===================[End Display]=========================\n");
}

void SearchPhone(){	
	int op,i,search_id;
	char search_name[100];
	printf("\t=====================[Option Search]=====================\n");
	do{
		printf("\t1.Search By Name.\n");
		printf("\t2.Search By Code.\n");
		printf("\t0.Go Back to Menu.\n");
		printf("\tChoose an option");scanf("%d",&op);
		switch(op){
			case 1:{
				printf("\t=>Enter Name of Phone for Searching :");scanf("%s",&search_name);
				for(i=0;i<Size;i++){
					if(strcmp(search_name,name[i])==0){	
						printf("*****************************************\n");
						printf("\n\tCode     : %d\n",code[i]);
						printf("\tName     : %s\n",name[i]);
						printf("\tPrice    : %.2f\n",price[i]);
						printf("\tQuantity : %d\n",quantity[i]);
						printf("*****************************************\n");
						break;
					}
				 }
				break;
			}
			case 2 :{
				// find by id
				printf("\t=>Enter Code Phone for searching  :");scanf("%d",&search_id);
				for(i=0;i<Size;i++){
					if(code[i]==search_id){
						printf("*****************************************\n");
						printf("\n\tCode     : %d\n",code[i]);
						printf("\tName     : %s\n",name[i]);
						printf("\tPrice    : %.2f\n",price[i]);
						printf("\tQuantity : %d\n",quantity[i]);
						printf("*****************************************\n");

						break;
					}
				}
				break;
			}
		}
		
		
	}while(op!=0);
}

void UpdatePhone(){
	char question[20],new_name[100];
	int update,i,new_code,new_qty;
	float new_price;
	printf("\t Do you want to update ?");
	printf("yes/no : ");fflush(stdin);scanf("%s",&question);
	if(strcmp(question,"yes")==0){
		printf("\t What you want to update?\n");
		printf("\t Enter the code for update :");scanf("%d",&update);
		for(i=0;i<Size;i++){
			if(code[i]==update){
				printf("\n\tEnter new name :");scanf("%s",&new_name);
				printf("\tEnter new code :");scanf("%d",&new_code);
				printf("\tEnter new price :");scanf("%f",&new_price);
				printf("\tEnter new quantity :");scanf("%d",&new_qty);
				// Update new value to old variable
				// strcpy - string copy is copy text 
				strcpy(name[i], new_name); 
				code[i] = new_code;
				price[i] = new_price;
				quantity[i] = new_qty;
				printf("\n\tUpdate Complate\n");	
				break;
			}
		}
	}else{
		printf("\tGo Back Menu\n");
	}	
}

void DeletePhone(){
	int delete_phone,i,j;
	printf("\twhat do you want to delete.\n");
	printf("\tPlease enter code phone for delete : ");scanf("%d",&delete_phone);
	for(i=0;i<Size;i++){
		if(code[i]==delete_phone){
			for(j=i;j<Size-1;j++){
				code[j] = code[j+1];
				strcpy(name[j],name[j+1]);
				price[j] = price[j+1];
				quantity[j] = quantity[j+1];
				printf("\t Delete Complate!\n");
			}
			Size--;
		}
	} 
	
}

void InsertPhone(){
	int add_new_size,i;
	check = false;
	printf("Enter Size to add :");scanf("%d",&add_new_size);
	for (i=Size;i<Size+add_new_size;i++){
		printf("\n\t============[Stock %d]=============\n",i+1);
		printf("\tEnter the Code    :");scanf("%d",&code[i]);
		printf("\tEnter the Name    :");scanf("%s",&name[i]);
		printf("\tEnter the Price   :");scanf("%f",&price[i]);
		printf("\tEnter the Quantity:");scanf("%d",&quantity[i]);
		printf("\n");
		check = true;
	}
	// Add New Size
	Size+=add_new_size; // Size = Size+New_Size
	if(!check){
		printf("\t Insert Not Complate!!!\n");
	}else{
		printf("\t Insert Complate!!!\n");
	}
	
}

void Sort(){
	int op,i,j;
	check = false;
	int n_code,n_qty;
	char n_name[100];
	float n_price;
	printf("\t======Menu For Sort======\n");
	printf("\t1. Sort by id.\n");
	printf("\t2. Sort by name.\n");
	printf("\tPlease choose option :");scanf("%d",&op);
	switch(op){
		case 1 :{
			printf("\t==========Sort by ID=========\n");
			for(i=0;i<Size;i++){
				for (j=i+1;j<Size;j++){
					if(code[i]>code[j]){
						
						n_code = code[i]; // 
						code[i] = code[j];
						code[j] = n_code;
						
						strcpy(n_name,name[i]);
						strcpy(name[i],name[j]);
						strcpy(name[j],n_name);
						
						n_price = price[i];
						price[i] = price[j];
						price[j] = n_price;
						
						n_qty = quantity[i];
						quantity[i]=quantity[j];
						quantity[j] = n_qty;
						
						check = true;
					}
				}
			}
			if(!check){
				printf("\tNot Success!!!\n");
			}else{
				printf("\tSort is Successfully!\n");
			}
			
			break;
		}
		case 2 :{
			printf("==========Sort by Name=========\n");
			for(i=0;i<Size;i++){
				for (j=i+1;j<Size;j++){
					if(strcmp(name[i],name[j])>0){
						
						n_code = code[i]; // 
						code[i] = code[j];
						code[j] = n_code;
						
						strcpy(n_name,name[i]);
						strcpy(name[i],name[j]);
						strcpy(name[j],n_name);
						
						n_price = price[i];
						price[i] = price[j];
						price[j] = n_price;
						
						n_qty = quantity[i];
						quantity[i]=quantity[j];
						quantity[j] = n_qty;
						
						check = true;
					}
				}
			}
			if(!check){
				printf("Not Success!!!\n");
			}else{
				printf("Sort is Successfully!\n");
			}
			
			break;
		}
		
	}
}

int main(){
	system("cls");
	int option;
	do{
		printf("\t===============[Menu For Stock Phone]====================\n");
		printf("\t[1] Create Phone to stock.\n");
		printf("\t[2] Display all Phone from stock.\n");
		printf("\t[3] Search Phone in stock.\n");
		printf("\t[4] Update Phone from the stock.\n");
		printf("\t[5] Delete Phone form the stock.\n");
		printf("\t[6] Insert / Add Phone to the Stock.\n");
		printf("\t[7] Sort Product.\n");
		printf("\t[0] Exit.\n");
		printf("\t=========================================================\n");
		printf("\tPlease choose an option [0-7] :");
		scanf("%d",&option);
		switch(option){
			case 0:{
				printf("\t====================[Out Program]========================\n");
				break;
			}
			case 1: {
				// Calling function
				CreateStock();
				break;
			}
			case 2 :{
				DisplayPhone();
				break;
			}
			case 3:{
				SearchPhone();
				break;
			}
			case 4:{
				UpdatePhone();
				break;
			}
			case 5:{
				DeletePhone();
				break;
			}
			case 6 :{
				InsertPhone();
				break;
			}
			case 7 :{
				Sort();
				break;
			}
			default:{
				printf("\t Try Again\n");
				break;
			}
		}
		
	}while(option!=0);
	
	return 0;
}