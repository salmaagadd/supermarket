//the our project super market             
// the our project contin 5 function every modul  and main function 
//first function  insert function to add prodect by Omar fatalaah  
//,display function to appears the prodect by salma khaled 
//3 search function  to search prodect by salma abd, 
// updatefunction to redevelop prodect by Ali 
// and delete function to delete prodect by Emad
  #include <iostream>   // libarary of output and input
#include <fstream>   // libarary of file
#include <string.h>  //  libarary of strcmp()
#include<iomanip>  //functian setw() to make space to momery 
using namespace std ; 
void insert_file()
{ 
system("cls");
  fstream file;
	bool Fcode , Fname;
	char c[2] ,
	 code[10] ,
	  code_i[10] ,
	   name [20] ,
	    name_i [20] ,
	     cost [10] , 
     	qnt [10] , 
	  shelf [10] , 
	  p_date[10],
	  e_date[10] ;
 	    do {
		    Fcode  = false;
		    Fname = false;
            file.open("Super Market.txt" , ios :: in);
            cin.ignore();
       cout << "\a Enter Product code                      : "; 
	  cin.getline(code,10);
			while (!file.eof()) {
			    file.getline( code_i , 10 , '|' ); 
 	 	        file.getline( name_i , 20 , '|' );
		        file.getline( cost , 10 , '|' );
		        file.getline( qnt , 10 , '|' );
		        file.getline( shelf , 10, '|' );
		        file.getline( p_date, 10 , '|' );
		        file.getline( e_date, 10, '\n' );
            if (strcmp(code, code_i) == 0 ) {
            	Fcode = true ;
            	break ;
            	} }		
		    if ( Fcode ) {
		    	cout << " \aThis Code Is Already Inserted before \n";
			}
		    else {
       cout << " \aEnter Product Name                      : ";
	   cin.getline(name,20);
            file.close();
		    file.open("Super Market.txt" , ios :: in ); 
		    while (!file.eof()) {
			    file.getline( code_i, 10 , '|' ); 
 	 	        file.getline( name_i , 20 , '|' );
		        file.getline( cost , 10 , '|' );
		        file.getline( qnt , 10 , '|' );
		        file.getline( shelf , 10 , '|' );
		        file.getline( p_date , 10 , '|' );
		        file.getline(e_date, 10 , '\n' );
            if (strcmp( name , name_i) == 0 ) {
            	Fname = true ;
            	break ;
            	} }		
		    if ( Fname ) {
		    	cout << "\a This Name Is Already Inserted before \n";
			}
		    else {
			file.close();
		file.open("Super Market.txt" , ios :: app);
		cout << "\a Enter Product Cost                    !$$";
		 cin.getline(cost,10);
        cout << " \aEnter Product Quantity                  ! [_]";
	    cin.getline(qnt,10);
        cout << " \aEnter Product Shelf_Number              ! ||";
	    cin.getline(shelf,10);
        cout << " \aEnter Production Date(YYYY-MM-DD)       !m ";
	    cin.getline(p_date,10);
        cout << " \aEnter End Date       (YYYY-MM-DD)       !m  ";
	    cin.getline(e_date,10);
           file<< code << '|' << name << '|' << cost << '|'<< qnt << '|' 
		     << shelf << '|' << p_date<< '|' << e_date <<"\n";
        cout << " \aThe product is successfly inserted \n";
    } }
		cout << " \aDo you want add more products ? ( enter[C]) ";
        cin.getline(c,2);
	    file.close();
	  } while (c[0] == 'c' || c[0] == 'C');
        file.close();
}

//start function display
 void display_file() 
 {
 system("cls");
 	fstream file;
char     code[10] ,  name [20] ,
         cost [10] , qnt [10] , 
	     shelf [10] , p_date[10], e_date[10] ;
 	file.open("Super Market.txt" , ios::in);
 	cin.ignore();
 	cout << "___________________________________________________________________________________________________________\n";
	cout << left << setw(10) << "code" << '|' 
	<< setw(20) << "name" << '|' 
	<< setw(10)  << "cost" << '|' 
	<< setw(15) << "Quantity" << '|' 
	<< setw(15) << "Shelf_Num " << '|'
	<< setw(15) << "Pro_Date" << '|' 
	<< setw(13) <<" end_date"<<endl;
	cout << "|_________________________________________________________________________________________________________|\n";
 	 while (!file.eof()) {
			    file.getline( code , 10 , '|' ); 
 	 	        file.getline( name , 20 , '|' );
		        file.getline( cost , 10 , '|' );
		        file.getline( qnt , 10 , '|' );
		        file.getline( shelf , 10 , '|' );
		        file.getline( p_date , 10 , '|' );
		        file.getline( e_date , 10 , '\n' );
 	if (int(code[0] != 0)) {
	       cout << /*left <<*/ setw(10) << code << '|'
	     << setw(20) << name << '|' << setw(10) 
		 << cost << '|' << setw(15) << qnt <<
		  '|' << setw(15) << shelf << '|'<< 
		 setw(15) << p_date << '|' << setw(13)
		 << e_date << " |"<<endl;
 	cout <<  "|__________________________________________________________________________________________________________|\n";
 }
 }
 file.close();	
 }
 void search_file() {system("cls");
 	
 	fstream file;
 	bool Found;
	char x[2] , code[10] , code_i[10] , name [20] , name_i [20] , cost [10] , qnt [10] , 
	shelf [10] , p_date[10], e_date[10] ,  OP[2];
 	    do {
 	        Found = false;
		file.open("Super Market.txt", ios:: in );
		cout   << "\n\n\a****************************\n";
		cout  << "*To Search By code      : 1 *\n" 
		      << "*To Search By Name      : 2 *\n";
		cout  << "*****************************\n";
		
		do {
		
		
			cout << "\aEnter OPtion to search :";
			
			 cin.getline(OP, 2);
			 
				
		   } while (!(OP[0] == '1' || OP[0] == '2'));	
 	    switch (OP[0])
		{
		case '1':
			cout << "\aEnter Product's code :"; 
			 cin.getline(code, 10);
			break;
		case '2':
			cout << "\aEnter Product's Name :";
			  cin.getline(name, 20);
			break;
		}	
 	    while (!file.eof()) 
		 {
			    file.getline( code_i , 10 , '|' ); 
 	 	        file.getline( name_i , 20 , '|' );
		        file.getline( cost , 10 , '|' );
		        file.getline( qnt , 10 , '|' );
		        file.getline( shelf , 10 , '|' );
		        file.getline( p_date , 10 , '|' );
		        file.getline( e_date, 10 , '\n' );
		if ((strcmp(code, code_i) == 0) || (strcmp(name, name_i) == 0)) {
	cout << "______________________________________________________________________________________________________________\n";
	cout << left << setw(10) << "  pro_code" << '|' << setw(20) << "Name" << '|' 
	<< setw(10)  << "cost" << '|' << setw(15) << "Quantity" << '|' 
	<< setw(15) << "Shelf_Num " << '|'<< setw(15) << "Pro_date" << '|' << setw(13) 
	<< "end date    |**|"<<endl;
	cout <<"|_____________________________________________________________________________________________________________|\n";
	cout << left << setw(10) << code_i << '|' << setw(20) << name_i << '|' << setw(10) 
		 << cost << '|' << setw(15) << qnt << '|' << setw(15) << shelf << '|'<< 
		setw(15) << p_date << '|' << setw(13) << e_date<< "|*|"<<endl;
 	cout <<"|_____________________________________________________________________________________________________________|\n";
				Found = true;
				break;
			}
		}
		if (!Found) {
			cout << "\aProduct Not Found !\n";
		}
		cout << "\ado you want search about another product(c) ?\n";
		cin.getline(x, 2);
		file.close();
		}while (x[0] == 'c' || x[0] == 'C');
 	file.close();	
 }
 
 void update_file() 
 {
 	system ("cls");
	char code [10] , // new code by enter user
	     code_i[10] ,//to combare in code in file to avoid like them
	     name [20] , // new code by enter user
	     name_i [20] ,//to combare in code in file to void like them
	     cost [10] , 
	     qnt [10] , 
	     shelf [10] , 
	     p_date[10], 
	     e_date[10], OP[2], x[2], A[2];
	bool found;
	fstream file;
	fstream temp;
	do {
		found = false;
		file.open("Super Market.txt", ios::in);
		temp.open("temp.txt", ios::out);
		cout << "*********************************\n";
		cout << "*\aTo Update By code Entre    : 1 *\n" 
		     << "*\aTo Update By Name Entre    : 2 *\n";
		cout << "***********************************\n";
		do {	cin.ignore();
			
			cout << "\aEnter OPtion :";
			 cin.getline(OP, 2);
			if (!(OP[0] == '1' || OP[0] == '2'))
				cout << "\a";
		} while (!(OP[0] == '1' || OP[0] == '2'));
		switch (OP[0])
		{
		case '1':
			cout << "\aEnter Product's Code :"; 
			  cin.getline(code, 10);
			break;
		case '2':
			cout << "\aEnter Product's Name :";
			    cin.getline(name, 20);
			break;
		}
 
		while (!file.eof()) {
		 file.getline(name,20,'|');
		 file.getline(code,10,'|');
		 file.getline(qnt,10,'|');
		 file.getline(shelf,10,'|');
		 file.getline(code_i,10,'|');
		 file.getline(name_i,20,'|');
		 file.getline(cost,10,'|');
		 file.getline(p_date,10,'|');
		 file.getline(e_date,10,'|');
			if (int(code_i[0]) == 0) {
				continue;
			}
			else if (strcmp(code, code_i) == 0 || strcmp(name, name_i) == 0) {
				found = true;
			     cout << "*******************************\n";
				cout << "*To Update Name           : 1 *\n" 
				     << "*To Update Cost           : 2 *\n" 
				     << "*To Update QTY            : 3 *\n" 
				     << "*To Update Shelf_N        : 4 *\n" 
				     << "*To Update P_Date         : 5 *\n" 
				     << "*To Update P_Valid        : 6 *\n"
				     << "*To Update All            : 7 *\n";
				cout << "*******************************\n";
				do {	
					cout << "\aEnter OPtion :";
				
					 
					 cin.getline(A, 2);
					if (!(A[0] == '1' || A[0] == '2'))
						cout << "\a";
				} while (!(A[0] == '1' || A[0] == '2' || A[0] == '3' || A[0] == '4' || A[0] == '5' || A[0] == '6' || A[0] == '7'));
				switch (A[0])
				{
				case '1':	
					cout << "\aEnter Product's Name                     :";
					   cin.getline(name_i, 20);
					break;
				case '2':
					cout << "\aEnter Product's Cost                     :";
					   cin.getline(cost, 10);
					break;
				case '3':
					cout << " \aEnter Product Quantity                  : ";
					    cin.getline(qnt,10);
					break;
				case '4':
				    cout << "\a Enter Product Shelf_Number               : "; 
					cin.getline(shelf,10);
					break;
				case '5':
					cout << "\a Enter ProDate (yyyy/mm/dd)              : "; 
					   cin.getline(p_date,10);
					break;
				case '6':
					cout << " \aEnter END Date(yyyy/mm/dd)              : ";
					 cin.getline(e_date,10);
					break;
				case '7':
					
					cout << "\aEnter Product's Name                 : "; 
					cin.getline(name_i, 20);
					
					cout << " \aEnter Product Cost                  : "; 
					cin.getline(cost,10);
                    cout << "\a Enter Product Quantity                  : ";
				 cin.getline(qnt,10);
                    cout << "\a Enter Product Shelf_Number              : ";
				 cin.getline(shelf,10);
                    cout << "\a Enter Production Date(yyyy/mm/dd)       : ";
				 cin.getline(p_date,10);
                    cout << " \aEnter  END  Date(yyyy/mm/dd)            : ";
				 cin.getline(e_date,10);
					break;
				}
				temp << code_i<< '|' << name_i << '|' << cost << '|'<< qnt << '|' 
		          << shelf << '|' << p_date << '|' << e_date <<endl;
			}
			else
			{
				temp << code_i << '|' << name_i << '|' << cost << '|'<< qnt << '|' 
		          << shelf << '|' << p_date << '|' << e_date<<endl;
			}
		}
		if (!found) {
			cout << "\a Product Not Found !\n";
		}
		if (found)
		{
			cout << " \aProduct succesfully Updated !\n";
		}
		cout << "\aDo you want Update another product(c) ?\n";
		cin.getline(x, 2);
		file.close();
		temp.close();
		remove("Super Market.txt");
		rename("temp.txt", "Super Market.txt");
		cout<<"\n\t Done !!!!! \n";
		
	} while (x[0] == 'C' || x[0] == 'c');
}
void delet_file()
 {
 	system("cls");
	char x[2] , code[10] , code_i[10] ,
	 name [20] , name_i [20] , cost [10] , qnt [10] , 
	shelf [10] , p_date[10], e_date[10] , OP[2];
	bool found;
	fstream file;
     fstream temp;
	do {
		found = false;
		file.open("Super Market.txt", ios::in);
		file.open("temp.txt", ios::app);
		cout << "****************************\n";
		cout << "*To Delete By Code     : 1 *\n" << "*To Delete By Name    : 2 *\n";
		cout << "****************************\n";
		do {	
	      	cin.ignore();
			cout << "\n\aEnter OPtion :"; 
			cin.getline(OP, 2);
			if (!(OP[0] == '1'|| OP[0] == '2'))
				cout << "\a";
		} while (!(OP[0] == '1' || OP[0] == '2'));
		switch (OP[0])
		{
		case '1':
			cout << "\aEnter Product's Code :";
			 cin.getline(code, 10);
			break;
		case '2':
			cout << "\aEnter Product's Name :"; 
			cin.getline(name, 20);
			break;
		}

		while (!file.eof()) {
			    file.getline( code_i , 10 , '|' ); 
 	 	        file.getline( name_i , 20 , '|' );
		        file.getline( cost , 10 , '|' );
		        file.getline( qnt , 10 , '|' );
		        file.getline( shelf , 10, '|' );
		        file.getline( p_date , 10 , '|' );
		        file.getline( e_date, 10 , '\n' );
			if (int(code_i[0]) == 0) {
				continue;
			}
			if (strcmp(code,code_i) == 0 || strcmp(name, name_i) == 0) {
				found = true;
				continue;
			}
				temp << code_i << '|' << 
				name_i << '|' << cost << 
				'|'<< qnt << '|' 
		     << shelf << '|' << p_date <<
			 '|' << e_date <<endl;
		
		}
		if (!found) {
			cout << "\aProduct Not Found !\n";
		}
		else
		{
			cout << "\aProduct succesfully Deleted !\n";
		}
		cout << "\aDo you want Delete another product(c) ?\n";cin.getline(x, 2);
		file.close();
		temp.close();
		remove("Super Market.txt");
		rename("temp.txt", "Super Market.txt");
	} while (x[0] == 'c' || x[0] == 'C');
} 
 

int main ()
      {
	  system("color  2e") ;
	  
	  
	  
	  cout<<"\t\tBY OMAT ,SALMA ,AIL ,SALMA ,EMAD\n";
	  
	  
	  
	  int i; 
	     bool osase=true;
	     fstream file;
		 file.open("super market.txt",ios::app);
		 file.close();
		 	
        do{ 
		 cout<<"\t\twelcome to super market                          \n";
	     cout<<"   ***********************************************\n";
		 cout<<"  ***************    *****        ***************\n";
		 cout<<"  ** To   Insert     Enter     :  [ press 1 ]  **\n" 
		     <<"  ** To   Display    Enter     :  [ press 2 ]  **\n" 
			<<"  ** To   search     Enter     :  [ press 3 ]  **\n"
		     <<"  ** To   Update     Enter     :  [ press 4 ]  **\n" 
		     <<"  ** To   Delet      Enter     :  [ press 5 ]  **\n"
		     <<"  ** To   Exit       Enter     :  [ press 6 ]  **\n";
		cout <<"  ***************    *****        ***************\n";
		cout  <<" ***********************************************\n";
		cout <<"  Enter Your Choice  ??? \n ";
		cin>>i; // i to make switch work 
		switch (i) //to use switch is faster
		{
		    case 1:// when to press 1 to work funuctian intert_project
			insert_file();
			break;
			case  2:
			display_file(); 
			break;
			case 3:
			search_file();
			break;
			case 4:
			update_file();
			break;
			case 5:
			delet_file();
			break;	
			case 6:
			cout<<"\n\a Thanks to use our program\n";
			osase= false;
			break;
		default:
			cout << "\a\a\a\a please correct Number erre\n";
		}
	 }while (osase);
	 system("pause");	
return 0;}
    
    
   

