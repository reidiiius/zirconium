// cardstock.cpp
#include <iostream>
#include <string>
#include <map>

using namespace std;

namespace Phormium {

  struct Cabinet {
    short n, a[9];
    map<string, string> m;
    map<string, string>::iterator head, tail;
    string tuned;
    time_t epoch;
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

  Cabinet populate(const string& tuning) {
    Cabinet o;
    o.epoch = time(NULL);

    if (tuning == "ennead") {
      o.n = 9;
      const short u[] = {33, 18, 3, 24, 9, 30, 15, 0, 21};
      pegbox (o, u);
    }
    else if (tuning == "fkbjdn") {
      o.n = 6;
      const short u[] = {9, 33, 21, 9, 33, 21};
      pegbox (o, u);
    }
    else if (tuning == "eadgbe") {
      o.n = 6;
      const short u[] = {15, 0, 24, 9, 30, 15};
      pegbox (o, u);
    }
    else if (tuning == "cgdae") {
      o.n = 5;
      const short u[] = {15, 30, 9, 24, 3};
      pegbox (o, u);
    }
    else if (tuning == "bfbf") {
      o.n = 4;
      const short u[] = {18, 0, 18, 0};
      pegbox (o, u);
    }
    else {
      o.n = 1;
      o.a[0] = 0;
      o.m["??"] = "Error, check argument value: " + tuning;
      return o;
    }

    o.tuned = tuning;
    o.m = boethius();

    return o;
  }

  string xchange(string& specie, const char& b, const char& a) {
    const short n = specie.length();
    short i = 0;
    while (i < n) {
      if (specie[i] == b) specie[i] = a;
      i += 1;
    }
    return specie;
  }

  const string silverSmith(string& specie) { 
    const string b = "_opqrstuvwxyz", a = "-23456789NPQR";
    const short n = b.length(), u = a.length();
    if (n == u) {
      short i = 0;
      while (i < n) {
        specie = xchange(specie, b[i], a[i]);
        i += 1;
      }
      return specie;
    }
    else
      return specie;
  }

  const string permute(const string& genus, const short& ndx) {
    const short b = genus.length();
    if (b == 36) {
      string specie (genus.substr(ndx) + genus.substr(0, ndx));
      return silverSmith(specie);
    }
    else
      return genus + " ?";
  }

  void concierge(Cabinet& o) {
    short i;
    cout << "\n\n";
    for (o.head = o.m.begin(), o.tail = o.m.end(); o.head != o.tail; ++o.head) {
      i = 0;
      cout << '\t' + o.head->first + '-' + o.tuned + "-e" << o.epoch << '\n';
      while (i < o.n) {
        cout << '\t' + permute(o.head->second, o.a[i]) << '\n';
        i += 1;
      }
      cout << '\n' << endl;
    }
  }

  void concierge(Cabinet& o, const string& keySig) {
    short i = 0;
    cout << "\n\n";
    cout << '\t' + keySig + '-' + o.tuned + "-e" << o.epoch << '\n';
    while (i < o.n) {
      cout << '\t' + permute(o.m[keySig], o.a[i]) << '\n';
      i += 1;
    }
    cout << '\n' << endl;
  }

  void concierge(Cabinet& o, const string& keySig, const string& keyAlt) {
    short i;
    const string q[] = {keySig, keyAlt};
    for (short k = 0; k < 2; ++k) {
      i = 0;
      cout << "\n\n";
      cout << '\t' + q[k] + '-' + o.tuned + "-e" << o.epoch << '\n';
      while (i < o.n) {
        cout << '\t' + permute(o.m[q[k]], o.a[i]) << '\n';
        i += 1;
      }
    }
    cout << '\n' << endl;
  }

  void menu_tuning() {
    const string a[] = {"bfbf", "cgdae", "eadgbe", "fkbjdn", "ennead"};
    cout << "\nSelection:\n\n";
    for (short i = 0; i < 5; ++i) {
      cout << '\t' + a[i] << '\n';
    }
    cout << endl;
  }

  void menu_signat() {
    map<string, string> m = boethius();
    map<string, string>::iterator head, tail;
    short i = 0;
    cout << "Signature:\n";
    for (head = m.begin(), tail = m.end(); head != tail; ++head) {
      if (i % 7 == 0) cout << '\n';
      else cout << '\t' + head->first;
      i += 1;
    }
    cout << "\n\n\t./paperboard eadgbe n0 j3\n" << endl;
  }

  void menu_usage() {
    menu_tuning();
    menu_signat();
    cout << "Screenful:\n";
    cout << "\n\t./paperboard eadgbe | sensible-pager\n\n";
    cout << "Save text:\n";
    cout << "\n\t./paperboard eadgbe > exchequer-$(date +'%s').txt\n" << endl;
  }

  void atrium(const string& tuning) {
    Cabinet o = populate(tuning);
    if (o.n < 2) menu_usage();
    else concierge(o);
  }

  void atrium(const string& tuning, const string& keySig) {
    Cabinet o = populate(tuning);
    if (o.n < 2) menu_usage();
    else if (o.m.count(keySig))
      concierge(o, keySig);
    else {
      menu_tuning();
      menu_signat();
    }
  }

  void atrium(const string& tuning, const string& keySig, const string& keyAlt) {
    Cabinet o = populate(tuning);
    if (o.n < 2) menu_usage();
    else if (o.m.count(keySig) and o.m.count(keyAlt))
      concierge(o, keySig, keyAlt);
    else {
      menu_tuning();
      menu_signat();
    }
  }

} // close Phormium

int main(int argc, char** argv) {

  switch (argc) {
    case 2 : {
      const string tuning = argv[1];
      Phormium::atrium(tuning);
    } break;
    case 3 : {
      const string tuning = argv[1], keySig = argv[2];
      Phormium::atrium(tuning, keySig);
    } break;
    case 4 : {
      const string tuning = argv[1], keySig = argv[2], keyAlt = argv[3];
      Phormium::atrium(tuning, keySig, keyAlt);
    } break;
    default: Phormium::menu_usage();
  }

  return 0;
}

