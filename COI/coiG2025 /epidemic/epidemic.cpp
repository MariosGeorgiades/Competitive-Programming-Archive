#include "epidemic.h"
using namespace std;

bool solve(int n) {
  set<int> query;
  for (int i = 0; i < n / 2; i++)
    query.insert(i);
  int cnt = ask(query);
  if (cnt == n)
    return true;
  else
    return false;
}
