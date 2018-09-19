// cardstock.cpp
#include <iostream>
#include <string>
#include <map>

using namespace std;

namespace Phormium {

  struct Cabinet {
    short n, a[9];
    map<string, string> m;
    map<string, string>::iterator h, t;
    string s;
    time_t e;
  };

  map<string, string> boethius() {
    map<string, string> m;
    m["j136y7"]  = "qy __ __ tw xr __ wt __ uv yq so __ ";
    m["j167y2"]  = "qy vu __ __ __ rx wt __ uv yq __ os ";
    m["j17"]     = "qo __ __ tu __ rw wr __ ut __ sv oq ";
    m["j17y2"]   = "qo vs __ __ __ rw wr __ ut __ sv oq ";
    m["j2"]      = "qz vv zq __ __ ry wu __ uw __ sx __ ";
    m["j23"]     = "qz vv zq __ xs __ wu __ uw __ sx __ ";
    m["j236"]    = "qz vv zq __ xs __ wu __ uw yr __ __ ";
    m["j23k6"]   = "qz vv zq __ xs __ wu __ uw __ __ ot ";
    m["j246y3"]  = "qz vv zq to __ ry __ __ uw yr __ __ ";
    m["j26"]     = "qz vv zq __ __ ry wu __ uw yr __ __ ";
    m["j26y3"]   = "qz vv zq to __ __ wu __ uw yr __ __ ";
    m["j26y34"]  = "qz vv zq to xs __ __ __ uw yr __ __ ";
    m["j2k56"]   = "qz vv zq __ __ ry wu __ __ yr __ ot ";
    m["j2k56x4"] = "qz vv zq __ __ ry __ __ uw yr __ ot ";
    m["j2k6"]    = "qz vv zq __ __ ry wu __ uw __ __ ot ";
    m["j2k6x5"]  = "qz vv zq __ __ ry wu __ __ __ sx ot ";
    m["j2k6y3"]  = "qz vv zq to __ __ wu __ uw __ __ ot ";
    m["j2y3"]    = "qz vv zq to __ __ wu __ uw __ sx __ ";
    m["j3"]      = "qx vt __ tv xq __ ws __ uu __ sw __ ";
    m["j34k6"]   = "qp vt __ tv pq ro __ __ uu __ __ or ";
    m["j36"]     = "qy vu __ tw xr __ wt __ uv yq __ __ ";
    m["j3k56x4"] = "qq vo __ ty xu __ __ __ ux yt __ ov ";
    m["j3k5x4"]  = "qy vu __ tw xr __ __ __ uv yq so __ ";
    m["j3k6"]    = "qq vo __ ty xu __ ww __ ux __ __ ov ";
    m["j6"]      = "qy vu __ tw __ rx wt __ uv yq __ __ ";
    m["k157x6"]  = "qz vv zq to __ ry wu __ __ yr __ __ ";
    m["k1j6"]    = "qz __ zq to __ ry wu __ uw yr __ __ ";
    m["k256"]    = "qr vp __ __ pv rq wo __ __ yu __ ow ";
    m["k26"]     = "qr vp __ __ pv rq wo __ uy __ __ ow ";
    m["k26x5"]   = "qp vt __ __ pq ro ws __ __ __ sw or ";
    m["k2j17"]   = "qp __ __ __ pq ro ws __ uu __ sw or ";
    m["k2j6"]    = "qr vp __ __ pv rq wo __ uy yu __ __ ";
    m["k56"]     = "qy vu __ tw __ rx wt __ __ yq __ os ";
    m["k56x4"]   = "qy vu __ tw __ rx __ __ uv yq __ os ";
    m["k6"]      = "qo vs __ tu __ rw wr __ ut __ __ oq ";
    m["k6x5"]    = "qo vs __ tu __ rw wr __ __ __ sv oq ";
    m["n0"]      = "qw vr __ tt __ rv wq __ us __ su __ ";
    m["n167x4"]  = "qy vu __ __ xr __ wt __ uv yq so __ ";
    m["n26y5"]   = "qp __ __ tv pq ro ws __ __ __ sw or ";
    m["n345"]    = "qz __ zq __ __ ry wu __ uw yr __ ot ";
    m["n45y2"]   = "qq vo __ __ xu __ ww __ ux yt __ ov ";
    m["n5y2"]    = "qr vp __ __ pv rq __ __ uy yu __ ow ";

    return m;
  }

  void pegbox(Cabinet& o, const short u[]) {
    short i = 0;
    while (i < o.n) {
      o.a[i] = u[i];
      i += 1;
    }
  }

  Cabinet populate(const string& s) {
    Cabinet o;
    o.e = time(NULL);

    if (s == "ennead") {
      o.n = 9;
      const short u[] = {33, 18, 3, 24, 9, 30, 15, 0, 21};
      pegbox (o, u);
    }
    else if (s == "fkbjdn") {
      o.n = 6;
      const short u[] = {9, 33, 21, 9, 33, 21};
      pegbox (o, u);
    }
    else if (s == "eadgbe") {
      o.n = 6;
      const short u[] = {15, 0, 24, 9, 30, 15};
      pegbox (o, u);
    }
    else if (s == "cgdae") {
      o.n = 5;
      const short u[] = {15, 30, 9, 24, 3};
      pegbox (o, u);
    }
    else if (s == "bfbf") {
      o.n = 4;
      const short u[] = {18, 0, 18, 0};
      pegbox (o, u);
    }
    else {
      o.n = 1;
      o.a[0] = 0;
      o.m["??"] = "Error, check argument value: " + s;
      return o;
    }

    o.s = s;
    o.m = boethius();

    return o;
  }

  string xchange(string& s, const char& b, const char& a) {
    const short n = s.length();
    short i = 0;
    while (i < n) {
      if (s[i] == b) {
        s[i] = a;
      }
      i += 1;
    }
    return s;
  }

  const string silverSmith(string s) { 
    const string b = "_opqrstuvwxyz", a = "-23456789NPQR";
    const short n = b.length();
    short i = 0;
    while (i < n) {
      s = xchange (s, b[i], a[i]);
      i += 1;
    }
    return s;
  }

  const string permute(const string& s, const short& n) {
    const short b = s.length();
    if (b == 36)
      return silverSmith (s.substr(n) + s.substr(0, n));
    else
      return s + " ?";
  }

  void concierge(Cabinet& o) {
    short i;
    cout << "\n\n";
    for (o.h = o.m.begin(), o.t = o.m.end(); o.h != o.t; ++o.h) {
      i = 0;
      cout << '\t' + o.h->first + '-' + o.s + "-e" << o.e << '\n';
      while (i < o.n) {
        cout << '\t' + permute(o.h->second, o.a[i]) << '\n';
        i += 1;
      }
      cout << '\n' << endl;
    }
  }

  void concierge(Cabinet& o, const string& v) {
    short i = 0;
    cout << "\n\n";
    cout << '\t' + v + '-' + o.s + "-e" << o.e << '\n';
    while (i < o.n) {
      cout << '\t' + permute(o.m[v], o.a[i]) << '\n';
      i += 1;
    }
    cout << '\n' << endl;
  }

  void concierge(Cabinet& o, const string& v, const string& x) {
    short i;
    const string q[] = {v, x};
    for (short k = 0; k < 2; ++k) {
      i = 0;
      cout << "\n\n";
      cout << '\t' + q[k] + '-' + o.s + "-e" << o.e << '\n';
      while (i < o.n) {
        cout << '\t' + permute(o.m[q[k]], o.a[i]) << '\n';
        i += 1;
      }
    }
    cout << '\n' << endl;
  }

  void showMenu() {
    const string a[] = {"bfbf", "cgdae", "eadgbe", "fkbjdn", "ennead"};
    cout << "\nSelection:\n\n";
    for (short i = 0; i < 5; ++i) {
      cout << '\t' + a[i] << '\n';
    }
    cout << endl;
  }

  void signat() {
    map<string, string> m = boethius();
    map<string, string>::iterator h, t;
    short i = 0;
    cout << "Signature:\n";
    for (h = m.begin(), t = m.end(); h != t; ++h) {
      if (i % 7 == 0) cout << '\n';
      else cout << '\t' + h->first;
      i += 1;
    }
    cout << "\n\n\t./paperboard eadgbe n0 j3\n" << endl;
  }

  void uSage() {
    showMenu();
    signat();
    cout << "Screenful:\n";
    cout << "\n\t./paperboard eadgbe | sensible-pager\n\n";
    cout << "Save text:\n";
    cout << "\n\t./paperboard eadgbe > exchequer-$(date +'%s').txt\n" << endl;
  }

  void atelier(const string& s) {
    Cabinet o = populate(s);
    if (o.n < 2) uSage();
    else concierge(o);
  }

  void atelier(const string& s, const string& v) {
    Cabinet o = populate(s);
    if (o.n < 2) uSage();
    else if (o.m.count(v))
      concierge(o, v);
    else {
      showMenu();
      signat();
    }
  }

  void atelier(const string& s, const string& v, const string& x) {
    Cabinet o = populate(s);
    if (o.n < 2) uSage();
    else if (o.m.count(v) and o.m.count(x))
      concierge(o, v, x);
    else {
      showMenu();
      signat();
    }
  }

} // close Phormium

int main(int argc, char** argv) {

  switch (argc) {
    case 2 : {
      const string s = argv[1];
      Phormium::atelier(s);
    } break;
    case 3 : {
      const string s = argv[1], v = argv[2];
      Phormium::atelier(s, v);
    } break;
    case 4 : {
      const string s = argv[1], v = argv[2], x = argv[3];
      Phormium::atelier(s, v, x);
    } break;
    default: Phormium::uSage();
  }

  return 0;
}

