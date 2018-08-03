
#include <iostream>
#include <string>
#include <map>

using namespace std;

struct Cabinet {
  map<string, string> m;
};

namespace Atelier {

  string xchange (string s, char b, char a) {
    int i = 0;
    while (i < s.length()) {
      if (s[i] == b) {
        s[i] = a;
      }
      i += 1;
    }
    return s;
  }

  string xchange (string s, string b, string a) {
    size_t n;
    n = s.find(b);
    if (n != string::npos) {
      s.replace(n, b.length(), a);
    }
    return s;
  }

  string fashion (string s) { 
    char b[4] = {'T', 'J', 'Q', 'K'};
    char a[4] = {'N', 'P', 'Q', 'R'};
    int i = 0;
    while (i < 4) {
      s = xchange (s, b[i], a[i]);
      i += 1;
    }
    while (i < 9) {
      s = xchange (s, "_ ", "- ");
      i += 1;
    }
    return s;
  }

  string tune (string s, int n) {
    return fashion (s.substr(n) + s.substr(0, n));
  }

  void view(Cabinet & o) {
    map<string, string>::iterator h, t;
    int i, a[9] = {22, 12, 2, 16, 6, 20, 10, 0, 14};
    string k, s;
    time_t e = time(NULL);

    cout << '\n' << endl;
    for (h = o.m.begin(), t = o.m.end(); h != t; h++)
    {
      i = 0;
      k = h->first;
      s = h->second;

     cout << '\t' + k + "-e" << e << endl;
      while (i < 9) {
        cout << '\t' + tune(s, a[i]) << endl;
        i += 1;
      }
      cout << '\n' << endl;
    }
  }

}

int main()
{
  Cabinet o;
    o.m["n0"]     = "4 9 _ 7 _ 5 T _ 8 _ 6 _ ";
    o.m["n167x4"] = "4 9 _ _ J _ T _ 8 Q 6 _ ";
    o.m["n26y5"]  = "4 _ _ 7 3 5 T _ _ _ 6 2 ";
    o.m["n345"]   = "4 _ K _ _ 5 T _ 8 Q _ 2 ";
    o.m["n45y2"]  = "4 9 _ _ J _ T _ 8 Q _ 2 ";
    o.m["n5y2"]   = "4 9 _ _ 3 5 _ _ 8 Q _ 2 ";
    o.m["s157x6"] = "4 9 K 7 _ 5 T _ _ Q _ _ ";
    o.m["s1v6"]   = "4 _ K 7 _ 5 T _ 8 Q _ _ ";
    o.m["s256"]   = "4 9 _ _ 3 5 T _ _ Q _ 2 ";
    o.m["s26"]    = "4 9 _ _ 3 5 T _ 8 _ _ 2 ";
    o.m["s26x5"]  = "4 9 _ _ 3 5 T _ _ _ 6 2 ";
    o.m["s2v6"]   = "4 9 _ _ 3 5 T _ 8 Q _ _ ";
    o.m["s56"]    = "4 9 _ 7 _ 5 T _ _ Q _ 2 ";
    o.m["s56x4"]  = "4 9 _ 7 _ 5 _ _ 8 Q _ 2 ";
    o.m["s6"]     = "4 9 _ 7 _ 5 T _ 8 _ _ 2 ";
    o.m["s6x5"]   = "4 9 _ 7 _ 5 T _ _ _ 6 2 ";
    o.m["v136y7"] = "4 _ _ 7 J _ T _ 8 Q 6 _ ";
    o.m["v167y2"] = "4 9 _ _ _ 5 T _ 8 Q _ 2 ";
    o.m["v17"]    = "4 _ _ 7 _ 5 T _ 8 _ 6 2 ";
    o.m["v17s2"]  = "4 _ _ _ 3 5 T _ 8 _ 6 2 ";
    o.m["v17y2"]  = "4 9 _ _ _ 5 T _ 8 _ 6 2 ";
    o.m["v23"]    = "4 9 K _ J _ T _ 8 _ 6 _ ";
    o.m["v236"]   = "4 9 K _ J _ T _ 8 Q _ _ ";
    o.m["v23s6"]  = "4 9 K _ J _ T _ 8 _ _ 2 ";
    o.m["v246y3"] = "4 9 K 7 _ 5 _ _ 8 Q _ _ ";
    o.m["v2"]     = "4 9 K _ _ 5 T _ 8 _ 6 _ ";
    o.m["v26"]    = "4 9 K _ _ 5 T _ 8 Q _ _ ";
    o.m["v26y34"] = "4 9 K 7 J _ _ _ 8 Q _ _ ";
    o.m["v26y3"]  = "4 9 K 7 _ _ T _ 8 Q _ _ ";
    o.m["v2s56"]  = "4 9 K _ _ 5 T _ _ Q _ 2 ";
    o.m["v2s56x4"]= "4 9 K _ _ 5 _ _ 8 Q _ 2 ";
    o.m["v2s6"]   = "4 9 K _ _ 5 T _ 8 _ _ 2 ";
    o.m["v2s6x5"] = "4 9 K _ _ 5 T _ _ _ 6 2 ";
    o.m["v2s6y3"] = "4 9 K 7 _ _ T _ 8 _ _ 2 ";
    o.m["v2y3"]   = "4 9 K 7 _ _ T _ 8 _ 6 _ ";
    o.m["v3"]     = "4 9 _ 7 J _ T _ 8 _ 6 _ ";
    o.m["v34s6"]  = "4 9 _ 7 3 5 _ _ 8 _ _ 2 ";
    o.m["v36"]    = "4 9 _ 7 J _ T _ 8 Q _ _ ";
    o.m["v3s56x4"]= "4 9 _ 7 J _ _ _ 8 Q _ 2 ";
    o.m["v3s5x4"] = "4 9 _ 7 J _ _ _ 8 Q 6 _ ";
    o.m["v3s6"]   = "4 9 _ 7 J _ T _ 8 _ _ 2 ";
    o.m["v6"]     = "4 9 _ 7 _ 5 T _ 8 Q _ _ ";

  Atelier::view(o);

  return 0;
}

