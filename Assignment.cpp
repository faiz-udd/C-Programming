#include<iostream>
using namespace std;

void add(){
     int c, r,a[100][100],b[100][100],i,j,sum[100][100];
    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;
//Elements of First Matrix
    for(i = 0; i < r; i++)
       for(j = 0; j < c; j++)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    //Element of Second Matrix
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; i++)
       for(j = 0; j < c; j++)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Adding Two matrices
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
        {
            cout << sum[i][j] << "  ";
            //display matrix in r by c dimension
            if(j == c - 1)
                cout << endl;
        }
   
}
void subtraction(){
    int c, r,a[100][100],b[100][100],i,j,subtraction[100][100];
    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;
//Elements of First Matrix
    for(i = 0; i < r; i++)
       for(j = 0; j < c; j++)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    //Element of Second Matrix
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; i++)
       for(j = 0; j < c; j++)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Subtraction of  Two matrices
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            subtraction[i][j] = a[i][j] - b[i][j];

    // Displaying Resultant Matrix
    cout << endl << "Subtraction of two matrix is: " << endl;
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
        {
            cout << subtraction[i][j] << "  ";
            //display matrix in r by c dimension
            if(j == c-1)
                cout << endl;
        }

}
void multiplication(){
    int c, r,a[100][100],b[100][100],i,j,Multiplication[100][100],k,l,r2,c2;
    cout << "Enter number of rows of first Matrix: ";
    cin >> r;

    cout << "Enter number of columns first Matrix: ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;
//Elements of First Matrix
    for(i = 0; i < r; i++)
       for(j = 0; j < c; j++)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

       //second Matrix

    cout << "Enter number of rows of second Matrix: ";
    cin >> r2;

    cout << "Enter number of columns second Matrix: ";
    cin >> c2;
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r2; i++)
       for(j = 0; j < c2; j++)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }
if(c==r2)
{
    
      for(i = 0; i < r; i++)
        for(j = 0; j < c2; j++){
        Multiplication[r][c2]=0;
         for(int k=0;k<r2; k++){
             Multiplication[i][j]+=a[i][k]*b[k][j];
         }
         cout<<Multiplication[i][j]<<" ";
         if(j==c2-1)
          cout<<endl;
        }
       
}
else{
    cout<<endl<<endl;
    cout<<"Please Keep in Mind that Multiplication of Two matrices"<<endl;
    cout<<"is possible only,when Number of columns of First Matrix"<<endl;
    cout<<"is equals to the number of Rows of second Matrix"<<endl;
    cout<<endl;
    cout<<"Please Try again with correct Input"<<endl;

}
    

}
 void validation()
 {
     int c,r,c2,r2,i,j,k;

     cout<<"Please Enter the Number of rows of First Matrix"<<endl;
     cin>>r;
     cout<<endl;

       cout<<"Please Enter the Number of columns of First Matrix"<<endl;
     cin>>c;
     cout<<endl;

       cout<<"Please Enter the Number of rows of Second Matrix"<<endl;
     cin>>r2;
     cout<<endl;
       cout<<"Please Enter the Number of columns of Second Matrix"<<endl;
     cin>>c2;
     cout<<endl;
    //Declaration
     int a[r][c];
     int b[r2][c2];
     int sum[r][c];
     int subtraction[r][c];
     int Multiplication[100][100];

     cout<<"Enter 1 for validation of matrices for addtion and subtraction"<<endl;
     cout<<"Enter two for  Validation of matrices for multiplication"<<endl;
     int select;
     cin>>select;
     switch(select)
     {

         case 1:
         //validation for Addition and Subtraction
       if(r==r2 && c==c2)
       {
           cout<<"The matrix is valid for addition and subtractions"<<endl;
           cout<<"Please Select if you want to do operations"<<endl;
           cout<<"y/n"<<endl;
           //user Decison
           char Decision;
           cin>>Decision;
           if(Decision=='y')
           {
               cout<<"Enter 1 for addition"<<endl;
               cout<<"Enter 2 for subtraction"<<endl;
               int choice;
               cin>>choice;

               switch(choice)
               {
                 case 1:


                 //Elements of First Matrix
                  for(i = 0; i < r; i++)
                     for(j = 0; j < c; j++)
                            {
                               cout << "Enter element a" << i + 1 << j + 1 << " : ";
                                cin >> a[i][j];
                            }

                 //Element of Second Matrix
                 cout << endl << "Enter elements of 2nd matrix: " << endl;
                 for(i = 0; i < r2; i++)
                    for(j = 0; j < c2; j++)
                         {
                             cout << "Enter element b" << i + 1 << j + 1 << " : ";
                              cin >> b[i][j];
                         }

                  // Adding Two matrices
                    for(i = 0; i < r; i++)
                       for(j = 0; j < c; j++)
                          sum[i][j] = a[i][j] + b[i][j];

                 // Displaying the resultant sum matrix.
                 cout << endl << "Sum of two matrix is: " << endl;
                  for(i = 0; i < r; i++)
                      for(j = 0; j < c; j++)
                        {
                          cout << sum[i][j] << "  ";
                         //display matrix in r by c dimension
                             if(j == c - 1)
                                cout << endl;
                        }
   
                 break;


                 case 2:



                 //Elements of First Matrix
                  for(i = 0; i < r; i++)
                     for(j = 0; j < c; j++)
                            {
                               cout << "Enter element a" << i + 1 << j + 1 << " : ";
                                cin >> a[i][j];
                            }

                 //Element of Second Matrix
                 cout << endl << "Enter elements of 2nd matrix: " << endl;
                 for(i = 0; i < r2; i++)
                    for(j = 0; j < c2; j++)
                         {
                             cout << "Enter element b" << i + 1 << j + 1 << " : ";
                              cin >> b[i][j];
                         }

                  // subtracting Two matrices
                    for(i = 0; i < r; i++)
                       for(j = 0; j < c; j++)
                          subtraction[i][j] = a[i][j] - b[i][j];

                 // Displaying the resultant  matrix.
                 cout << endl << "Subtraction of two matrix is: " << endl;
                   for(i = 0; i < r; i++)
                      for(j = 0; j < c; j++)
                        {
                          cout << sum[i][j] << "  ";
                         //display matrix in r by c dimension
                             if(j == c - 1)
                                cout << endl;
                        }
   
                  break;
               
                  default:
                  cout<<"Please Enter correct option"<<endl;



               }

            }
       }
      else
       {
             cout<<"The Matrix is not Valid for addition"<<endl;
             cout<<"Please  try again will correct Input"<<endl;
       }
      break;

      case 2:

      //validation of Matrices for MUltiplication
       if(c==r2)
      {
     cout<<"your matrices are valid for multiplication"<<endl;
     cout<<"Do you want to perform the operation?"<<endl;
     cout<<"y/n"<<endl;
     char Decision;
           cin>>Decision;
           if(Decision=='y')
           {
               cout << endl << "Enter elements of 1st matrix: " << endl;
               //Elements of First Matrix
                 for(i = 0; i < r; i++)
                       for(j = 0; j < c; j++)
                     {
                       cout << "Enter element a" << i + 1 << j + 1 << " : ";
                      cin >> a[i][j];
                     }

                 //second Matrix
                 cout<<endl;
                 cout<<"Enter the Elements of second Matrix"<<endl;
                    for(i = 0; i < r2; i++)
                      for(j = 0; j < c2; j++)
                     {
                        cout << "Enter element b" << i + 1 << j + 1 << " : ";
                        cin >> b[i][j];
                     }
                 //Multiplication
                    for(i = 0; i < r; i++)
                      for(j = 0; j < c2; j++)
                    {
                      Multiplication[r][c2]=0;
                        for(k=0;k<r2; k++)
                          {
                                Multiplication[i][j]+=a[i][k]*b[k][j];
                          }
                             cout<<Multiplication[i][j]<<" ";
                             if(j==c2-1)
                             cout<<endl;
                    }
            }
            else{
                cout<<"Thank You"<<endl;
            }

      

     }
     break;
     
       default:
       cout<<"Please Select correct choice and try again"<<endl;
     }

}
void inverse(){
   int c, r,a[100][100],i,j;
   float determinant=0;
    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    cout << endl << "Enter elements of  matrix: " << endl;
//Elements of First Matrix
    for(i = 0; i < r; i++)
       for(j = 0; j < c; j++)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }
       //copied From google..
       //Determinant of Matrix.
       for(i = 0; i < r; i++)
            determinant = determinant + (a[0][i] * (a[1][(i+1)%3] * a[2][(i+2)%3] - a[1][(i+2)%3] * a[2][(i+1)%3]));
            cout<<endl<<"determinant: "<<determinant;
            cout<<endl;
            cout<<endl<<"Inverse of matrix is: "<<endl;
              for(i = 0; i < 3; i++){
                  for(j = 0; j < 3; j++)
                cout<<((a[(j+1)%3][(i+1)%3] * a[(j+2)%3][(i+2)%3]) - (a[(j+1)%3][(i+2)%3] * a[(j+2)%3][(i+1)%3]))/ determinant<<"\t";
                  cout<<endl;
}
       

}
int main()
{
    
    cout<<"Enter 1 for addition"<<endl;
    cout<<"Enter 2 for Subtraction"<<endl;
    cout<<"Enter 3 for multiplication"<<endl;
    cout<<"Enter 4 for validation of Matrices"<<endl;
    cout<<"Entet 5 for Inverse of the Function"<<endl;

int n;
cin>>n;
switch (n)
{
    case 1:
     add();
    break;

    case 2:
     subtraction();
     break;
     
     case 3:
      multiplication();
      break;

      case 4:
      validation();
      break;

      case 5:
      inverse();
      break;
    

      default:
      cout<<"Please Enter correct Input"<<endl;
}


}