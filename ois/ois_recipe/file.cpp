#include <bits/stdc++.h>
using namespace std;
const string quack = "quack";

int n, M;
vector<vector<double>> P;

template <class T>
T sum(vector<T> v) {
   T sum = 0;
   for (int i = 0; i < v.size(); i++)
      sum += v[i];
   return sum;
}

int main() {
   scanf("%d %d", &n, &M);
    for (int j = 0; j < M; j++) {
      P.resize(n);
      double sum = 0;
      double value;
      vector<double> row;
      for (int i = 0; i < n; i++) {
         scanf("%lf", &value);
         sum += value;
         row.push_back(value);
      }
      double correction = 1000000.0 / (double)sum;
      for (int i = 0; i < n; i++) {
         P[i].push_back(row[i] * correction);
      }
    }

    for (int i = 0; i < n; i++)
       cout << (int)(sum(P.at(i)) / (double)M + 0.000000001) << " ";
    cout << endl;
    return 0;
}
