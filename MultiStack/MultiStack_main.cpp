#include "MultiStack.h"
#include <ctime>
using namespace std;

int main()
{
  cout << "\tCreating multistack:" << endl;
  int m = 1;
  try
  {
    TMStack<int> mst(3, 12);
    for (int i = 0; i < 3; i++)
      for (int j = 0; j < 4; j++)
      {
        mst.Set(i, m);
        cout <<" <" << m++ << "> is set to " << i + 1 << " stack" << endl;
      }
    mst.file();
    mst.PrintMStack();
    cout << "Min Stack: " << mst.min_kol_elem() << endl;
    cout << "\n\n";

    for (int i = 0; i < 2; i++)
      cout << "Get element " << mst.Get(i) << " from " << i + 1 << " stack" << endl;

    mst.PrintMStack();
    cout << "Min Stack: " << mst.min_kol_elem() << endl;

    cout << "\n\nTry to repack and set '10' to 3 stack" << endl;
    mst.Set(2, 10);

    mst.PrintMStack();
    cout << endl << "Min Stack: " << mst.min_kol_elem() << endl;
  }

  catch (MyException exp)
  {
    exp.Print();
  }

  return 0;
}
