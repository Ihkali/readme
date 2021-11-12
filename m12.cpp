#include <iostream>
using namespace std;
int main()
{
int row,col;
cout<<"enter rows of first matrix ";
cin>>row;
cout<<"enter column of first matrix ";
cin>>col;
int arr[row][col];
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
arr[i][j]=rand()%9+1;
}
}
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<endl; 
}
int rowp,colp;
cout<<"enter row partitions of first matrix ";
cin>>rowp;
int rop=row/rowp;
cout<<rop;
cout<<"enter column partitions of first matrix ";
cin>>colp;
int cop=col/colp;

int arrp[rowp][colp][row/rowp][col/colp];
for(int i=0;i<rowp;i++)
{
for(int j=0;j<colp;j++)
{
for(int k=0;k<row/rowp;k++)
{
for(int l=0;l<col/colp;l++)
{
arrp[i][j][k][l]=arr[i*rop+k][j*cop+l];
}
}
}
}
cout<<"first matrix after row partition is :"<<endl;
for(int i=0;i<rowp;i++)
{
for(int k=0;k<row/rowp;k++)
{
for(int j=0;j<colp;j++)
{
for(int l=0;l<col/colp;l++)
{
cout<<arrp[i][j][k][l];
}
cout<<"  ";
}
cout<<endl;
}
cout<<endl;
}
/////////////////////////////---------------------------------------------------------------------------------------------------
int row1,col1;
cout<<"enter rows of second matrix:";
cin>>row1;
cout<<"enter column of second matrix";
cin>>col1;
int arr1[row1][col1];
for(int i=0;i<row1;i++)
{
for(int j=0;j<col1;j++)
{
arr1[i][j]=rand()%9+1;
}
}
for(int i=0;i<row1;i++)
{
for(int j=0;j<col1;j++)
{
cout<<arr1[i][j]<<" ";
}
cout<<endl;
}
int rowp1,colp1;
cout<<"enter row partitions of second matrix ";
cin>>rowp1;
int rop1=row1/rowp1;
cout<<"enter column partitions of second matrix ";
cin>>colp1;
int cop1=col1/colp1;

int arrp1[rowp1][colp1][row1/rowp1][col1/colp1];
for(int i=0;i<rowp1;i++)
{
for(int j=0;j<colp1;j++)
{
for(int k=0;k<row1/rowp1;k++)
{
for(int l=0;l<col1/colp1;l++)
{
arrp1[i][j][k][l]=arr1[i*rop1+k][j*cop1+l];
}
}
}
}
cout<<"second matrix after row partition is "<<endl;
for(int i=0;i<rowp1;i++)
{
for(int k=0;k<row1/rowp1;k++)
{
for(int j=0;j<colp1;j++)
{
for(int l=0;l<col1/colp1;l++)
{
cout<<arrp1[i][j][k][l];
}
cout<<"  ";
}
cout<<endl;
}
cout<<endl;
}

///-------------------------------------------------------------------------------------------------------------------------------------
int add[row/rowp][col1/colp1];
int arrout[rowp][colp1][row/rowp][col1/colp1];
for(int i=0;i<rowp;i++)
{
for(int j=0;j<colp1;j++)
{
for(int k=0;k<row/rowp;k++)
{
for(int l=0;l<col1/colp1;l++)
{
arrout[i][j][k][l]=0;
}}}}

///ar3[i][j]=ar3[i][j]+ar1[i][k]*ar2[k][j];

for(int i=0;i<rowp;i++)
{
for(int j=0;j<colp1;j++)
{
for(int n=0;n<colp;n++)
{
for(int k=0;k<row/rowp;k++)
{
for(int l=0;l<col1/colp1;l++)
{

add[k][l]=0;
}}
for(int k=0;k<row/rowp;k++)
{
for(int l=0;l<col1/colp1;l++)
{
for(int m=0;m<col/colp;m++)
{
//ar3[i][j]=ar3[i][j]+ar1[i][k]*ar2[k][j];
add[k][l]=add[k][l]+arrp[i][n][k][m]*arrp1[n][j][m][l];
}}}
for(int k=0;k<row/rowp;k++)
{
for(int l=0;l<col1/colp1;l++)
{
arrout[i][j][k][l]=arrout[i][j][k][l]+add[k][l];
}}}}
}
cout<<"product of twp marticces is :"<<endl;
for(int i=0;i<rowp;i++)
{
for(int k=0;k<row/rowp;k++)
{
for(int j=0;j<colp1;j++)
{
for(int l=0;l<col1/colp1;l++)
{
cout<<arrout[i][j][k][l]<<"  ";
}
}
cout<<endl;
}
}
return 0;
}

