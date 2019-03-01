#include <iostream>
using namespace std;

int main()
{
    int n,m;
    int a[100][100];
    cin >> n>> m;
    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m ; j++)
        {
           cin >> a[i][j];
        }
    }
    
   cout << "Normal print " << endl;
    //Normal print
        for (int i=0; i<n; i++)
    {
        for (int j=0; j<m ; j++)
        {
           cout << a[i][j] << " "; 
        }
        cout << endl;
    } 
    
    //spiral print;
    int start_row = 0;
    int end_row = n-1;
    int start_col = 0;
    int end_col = m-1;
    
    while (start_row <= end_row && start_col <= end_col)
    {
        for (int k=start_col; k<= end_col; k++)
        {
            cout << a[start_row][k] << " ";
        }
        start_row++;
        
        for (int k=start_row; k<= end_row; k++)
        {
            cout << a[k][end_col] << " ";
        }
        end_col--;
        
        if (end_row > start_row)
        {
        for (int k=end_col; k >= start_col ; k--)
        {
            cout << a[end_row][k] << " ";
        }
        end_row--;
        }
        
        if (start_col < end_col)
        {
        for (int k=end_row; k >= start_row; k--)
        {
            cout << a[k][start_col]<< " ";
        }
        start_col++;
        }
        
        if (start_col < end_col)
        {
        for (int k=start_col; k<=end_col; k++)
        {
            cout << a[start_row][k]<< " ";
        }
        start_row++;
        }
        
    }

    return 0;
}
