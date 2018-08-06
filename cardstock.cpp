
#include <iostream>
#include <map>

using namespace std;

namespace Phormium {

  struct Cabinet {
    int n, a[9];
    map<string, string> m;
    map<string, string>::iterator h, t;
    time_t e;
  };

  Cabinet populate(int n) {
    Cabinet o;
    o.n = n;

    int i = 0;
    // ennead
    if (o.n == 9) {
      int u[9] = {22, 12, 2, 16, 6, 20, 10, 0, 14};
      while (i < o.n) {
        o.a[i] = u[i];
        i += 1;
      }
    }
    // BEADGCF
    else if (o.n == 7) {
      int u[7] = {12, 2, 16, 6, 20, 10, 0};
      while (i < o.n) {
        o.a[i] = u[i];
        i += 1;
      }
    }
    // EADGBE
    else if (o.n == 6) {
      int u[6] = {10, 0, 16, 6, 20, 10};
      while (i < o.n) {
        o.a[i] = u[i];
        i += 1;
      }
    }
    // CGDAE
    else if (o.n == 5) {
      int u[5] = {10, 20, 6, 16, 2};
      while (i < o.n) {
        o.a[i] = u[i];
        i += 1;
      }
    }
    // GDAE
    else if (o.n == 4) {
      int u[4] = {10, 20, 6, 16};
      while (i < o.n) {
        o.a[i] = u[i];
        i += 1;
      }
    }
    // default
    else {
      o.n = 1;
      o.a[0] = 0;
      o.m["z0"] = "error: value of argument";
      o.e = time(NULL);
      return o;
    }

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

    o.e = time(NULL);

    return o;
  }

  Cabinet populate(string s) {
    Cabinet o;

    int i = 0;
    // ennead
    if (s == "ennead") {
      o.n = 9;
      int u[9] = {33, 18, 3, 24, 9, 30, 15, 0, 21};
      while (i < o.n) {
        o.a[i] = u[i];
        i += 1;
      }
    }
    // BEADGCF
    else if (s == "beadgcf") {
      o.n = 7;
      int u[7] = {18, 3, 24, 9, 30, 15, 0};
      while (i < o.n) {
        o.a[i] = u[i];
        i += 1;
      }
    }
    // EADGBE
    else if (s == "eadgbe") {
      o.n = 6;
      int u[6] = {15, 0, 24, 9, 30, 15};
      while (i < o.n) {
        o.a[i] = u[i];
        i += 1;
      }
    }
    // CGDAE
    else if (s == "cgdae") {
      o.n = 5;
      int u[5] = {15, 30, 9, 24, 3};
      while (i < o.n) {
        o.a[i] = u[i];
        i += 1;
      }
    }
    // GDAE
    else if (s == "gdae") {
      o.n = 4;
      int u[4] = {15, 30, 9, 24};
      while (i < o.n) {
        o.a[i] = u[i];
        i += 1;
      }
    }
    // default
    else {
      o.n = 1;
      o.a[0] = 0;
      o.m["z0"] = "error: value of argument";
      o.e = time(NULL);
      return o;
    }

    o.m["j136y7"]  = "qy __ __ tw xr __ wt __ uv yq so __ ";
    o.m["j167y2"]  = "qy vu __ __ __ rx wt __ uv yq __ os ";
    o.m["j17"]     = "qo __ __ tu __ rw wr __ ut __ sv oq ";
    o.m["j17y2"]   = "qo vs __ __ __ rw wr __ ut __ sv oq ";
    o.m["j2"]      = "qz vv zq __ __ ry wu __ uw __ sx __ ";
    o.m["j23"]     = "qz vv zq __ xs __ wu __ uw __ sx __ ";
    o.m["j236"]    = "qz vv zq __ xs __ wu __ uw yr __ __ ";
    o.m["j23k6"]   = "qz vv zq __ xs __ wu __ uw __ __ ot ";
    o.m["j246y3"]  = "qz vv zq to __ ry __ __ uw yr __ __ ";
    o.m["j26"]     = "qz vv zq __ __ ry wu __ uw yr __ __ ";
    o.m["j26y3"]   = "qz vv zq to __ __ wu __ uw yr __ __ ";
    o.m["j26y34"]  = "qz vv zq to xs __ __ __ uw yr __ __ ";
    o.m["j2k56"]   = "qz vv zq __ __ ry wu __ __ yr __ ot ";
    o.m["j2k56x4"] = "qz vv zq __ __ ry __ __ uw yr __ ot ";
    o.m["j2k6"]    = "qz vv zq __ __ ry wu __ uw __ __ ot ";
    o.m["j2k6x5"]  = "qz vv zq __ __ ry wu __ __ __ sx ot ";
    o.m["j2k6y3"]  = "qz vv zq to __ __ wu __ uw __ __ ot ";
    o.m["j2y3"]    = "qz vv zq to __ __ wu __ uw __ sx __ ";
    o.m["j3"]      = "qx vt __ tv xq __ ws __ uu __ sw __ ";
    o.m["j34k6"]   = "qp vt __ tv pq ro __ __ uu __ __ or ";
    o.m["j36"]     = "qy vu __ tw xr __ wt __ uv yq __ __ ";
    o.m["j3k56x4"] = "qq vo __ ty xu __ __ __ ux yt __ ov ";
    o.m["j3k5x4"]  = "qy vu __ tw xr __ __ __ uv yq so __ ";
    o.m["j3k6"]    = "qq vo __ ty xu __ ww __ ux __ __ ov ";
    o.m["j6"]      = "qy vu __ tw __ rx wt __ uv yq __ __ ";
    o.m["k157x6"]  = "qz vv zq to __ ry wu __ __ yr __ __ ";
    o.m["k1j6"]    = "qz __ zq to __ ry wu __ uw yr __ __ ";
    o.m["k256"]    = "qr vp __ __ pv rq wo __ __ yu __ ow ";
    o.m["k26"]     = "qr vp __ __ pv rq wo __ uy __ __ ow ";
    o.m["k26x5"]   = "qp vt __ __ pq ro ws __ __ __ sw or ";
    o.m["k2j17"]   = "qp __ __ __ pq ro ws __ uu __ sw or ";
    o.m["k2j6"]    = "qr vp __ __ pv rq wo __ uy yu __ __ ";
    o.m["k56"]     = "qy vu __ tw __ rx wt __ __ yq __ os ";
    o.m["k56x4"]   = "qy vu __ tw __ rx __ __ uv yq __ os ";
    o.m["k6"]      = "qo vs __ tu __ rw wr __ ut __ __ oq ";
    o.m["k6x5"]    = "qo vs __ tu __ rw wr __ __ __ sv oq ";
    o.m["n0"]      = "qw vr __ tt __ rv wq __ us __ su __ ";
    o.m["n167x4"]  = "qy vu __ __ xr __ wt __ uv yq so __ ";
    o.m["n26y5"]   = "qp __ __ tv pq ro ws __ __ __ sw or ";
    o.m["n345"]    = "qz __ zq __ __ ry wu __ uw yr __ ot ";
    o.m["n45y2"]   = "qq vo __ __ xu __ ww __ ux yt __ ov ";
    o.m["n5y2"]    = "qr vp __ __ pv rq __ __ uy yu __ ow ";

    o.e = time(NULL);

    return o;
  }

  string xchange (string s, char b, char a) {
    int i = 0, n = s.length();
    while (i < n) {
      if (s[i] == b) {
        s[i] = a;
      }
      i += 1;
    }
    return s;
  }

  string xchange (string s, string b, string a) {
    int i = s.find(b), n = b.length();
    if (i != string::npos) {
      s.replace(i, n, a);
    }
    return s;
  }

  string copperSmith (string s) { 
    string b = "TJK", a = "NPR";
    int i = 0, n = b.length();
    while (i < n) {
      s = xchange (s, b[i], a[i]);
      i += 1;
    }
    while (i < (n + 5)) {
      s = xchange (s, "_ ", "- ");
      i += 1;
    }
    return s;
  }

  string silverSmith (string s) { 
    string b = "opqrstuvwxyz", a = "23456789NPQR";
    int i = 0, n = b.length();
    while (i < n) {
      s = xchange (s, b[i], a[i]);
      i += 1;
    }
    while (i < (n + 5)) {
      s = xchange (s, "__", "--");
      i += 1;
    }
    return s;
  }

  string permute (string s, int n) {
    int b = s.length();
    if (b == 24) {
      return copperSmith (s.substr(n) + s.substr(0, n));
    }
    else if (b == 36) {
      return silverSmith (s.substr(n) + s.substr(0, n));
    }
    else {
      return '?' + s + '?';
    }
  }

  void concierge (Cabinet & o) {
    int i;
    cout << '\n' << endl;
    for (o.h = o.m.begin(), o.t = o.m.end(); o.h != o.t; o.h++)
    {
      i = 0;
      cout << '\t' + o.h->first + "-e" << o.e << endl;
      while (i < o.n) {
        cout << '\t' + permute(o.h->second, o.a[i]) << endl;
        i += 1;
      }
      cout << '\n' << endl;
    }
  }

  void atelier(int n=6) {
    Cabinet o = populate(n);
    concierge(o);
  }

  void atelier(string s) {
    Cabinet o = populate(s);
    concierge(o);
  }

}

int main()
{
/* argument options
  9 || ennead
  7 || beadgcf
  6 || eadgbe
  5 || cgdae
  4 || gdae
*/

  for (int i = 4; i < 10; i++) {
    if (i == 8) continue;
    Phormium::atelier(i);
  }

  string a[5] = {"gdae", "cgdae", "eadgbe", "beadgcf", "ennead"};
  for (int i = 0; i < 5; i++) {
    Phormium::atelier(a[i]); 
  }

  return 0;
}

