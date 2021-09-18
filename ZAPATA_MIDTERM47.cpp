// Fall 2020 Midterm Exam Question #47
// Write an interactive program where two distinct �rectangular� shapes using 
// the character 'X' maybe displayed on the screen given user input of
//(a) two positive integers between 5 and 12 and 
//(b) the users choice of "rectangular" display type.

#include <iostream>

using namespace std;
int main()
{
  int col = 1, row = 1, cols = 5, rows = 5, least = 5, highest = 7;
  char retry, type;

  do
  {
    cout << "Enter two numbers between 5 and 12: " << endl;
    cin >> col;
    if (col < 5 || col > 12)
       {
        cout << "Invalid Input, Please Retry" << endl;
        cin >> col;
       }
    cin >> row;
    if (row <5 || col > 12)
       {
         cout << "Invalid Input, Please Retry" << endl;
         cin >> row;
       }
    cout << "Enter A for a filled rectangle or B for an outline rectangle:" << endl;
    cin >> type;

    while (type == 'A' || type == 'a')
        {


        if (row < col)
        {
            cols = col;
            rows = row;
        }

        else
        {
            cols = row;
            rows = col;
        }

        col = 1;
        row = 1;

            while (row <= rows)
                {
                  if (row == 1 || row == rows)
                  {
                    cout << 'X';
                    while (col <= cols)
                      {
                        cout << 'X';
                        col++;
                      }
                    cout << 'X';
                  }
                  else
                  {
                    cout << 'X';
                    while (col <= cols)
                    {
                      cout << 'X';
                      col++;
                    }
                    cout << 'X';
                  }
                cout << endl;
                col = 1;
                row++;
            }


        while (row <= rows)
        {
          if (row == 1 || row == rows)
          {
            cout << 'X';
            while (col <= cols)
              {
                cout << 'X';
                col++;
              }
            cout << 'X';
          }
          else
          {
            cout << 'X';
            while (col <= cols)
            {
              cout << 'X';
              col++;
            }
            cout << 'X';
          }
        cout << endl;
        col = 1;
        row++;
        }
    cout << "To try my shape generator program again type Y for Yes and N for No: ";
    cin >> retry;
    }

    while (type == 'B' || type == 'b')
    {
        if (row < col)
        {
            cols = col;
            rows = row;
        }

        else
        {
            cols = row;
            rows = col;
        }

        col = 1;
        row = 1;

            while (row <= rows)
                {
                  if (row == 1 || row == rows)
                  {
                    cout << 'X';
                    while (col <= cols)
                      {
                        cout << 'X';
                        col++;
                      }
                    cout << 'X';
                  }
                  else
                  {
                    cout << 'X';
                    while (col <= cols)
                    {
                      cout << ' ';
                      col++;
                    }
                    cout << 'X';
                  }
                cout << endl;
                col = 1;
                row++;
            }
        while (row <= rows)
        {
          if (row == 1 || row == rows)
          {
            cout << 'X';
            while (col <= cols)
              {
                cout << 'X';
                col++;
              }
            cout << 'X';
          }
          else
          {
            cout << 'X';
            while (col <= cols)
            {
              cout << ' ';
              col++;
            }
            cout << 'X';
          }
        cout << endl;
        col = 1;
        row++;
        }
    cout << "To try my shape generator program again type Y for Yes and N for No: ";
    cin >> retry;
    }

    }

    while ( retry == 'y' || retry == 'Y');

    return 0;
}
