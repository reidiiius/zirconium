// cardstock.cpp
#include <exception>
#include <iostream>
#include <string>
#include <map>

using namespace std;

namespace Phormium {

  struct Wampum {
    unsigned short cords, pitch[9];
    map<string, string> carta;
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

  void pegbox(Wampum& shells, const unsigned short tension[]) {
    unsigned short i = 0;
    while (i < shells.cords) {
      shells.pitch[i] = tension[i];
      i += 1;
    }
  }

  Wampum populate(const string& tuning) {
    Wampum shells;
    shells.epoch = time(NULL);

    if (tuning == "ennead") {
      shells.cords = 9;
      const unsigned short tension[] = {33, 18, 3, 24, 9, 30, 15, 0, 21};
      pegbox(shells, tension);
    }
    else if (tuning == "fkbjdn") {
      shells.cords = 6;
      const unsigned short tension[] = {9, 33, 21, 9, 33, 21};
      pegbox(shells, tension);
    }
    else if (tuning == "eadgbe") {
      shells.cords = 6;
      const unsigned short tension[] = {15, 0, 24, 9, 30, 15};
      pegbox(shells, tension);
    }
    else if (tuning == "cgdae") {
      shells.cords = 5;
      const unsigned short tension[] = {15, 30, 9, 24, 3};
      pegbox(shells, tension);
    }
    else if (tuning == "bfbf") {
      shells.cords = 4;
      const unsigned short tension[] = {18, 0, 18, 0};
      pegbox(shells, tension);
    }
    else {
      shells.cords = 1;
      shells.pitch[0] = 0;
      shells.carta["??"] = "Error, check argument value: " + tuning;
      return shells;
    }

    shells.tuned = tuning;
    shells.carta = boethius();

    return shells;
  }

  string exchange(string& specie, const char& before, const char& after) {
    const unsigned short limit = specie.length();
    unsigned short i = 0;
    while (i < limit) {
      if (specie[i] == before) specie[i] = after;
      i += 1;
    }
    return specie;
  }

  const string silverSmith(string& specie) { 
    const string before = "_opqrstuvwxyz", after = "-23456789NPQR";
    const unsigned short limit = before.length(), pairs = after.length();
    if (limit == pairs) {
      unsigned short i = 0;
      while (i < limit) {
        specie = exchange(specie, before[i], after[i]);
        i += 1;
      }
      return specie;
    }
    else
      return specie;
  }

  const string permute(const string& genus, const unsigned short& amulet) {
    const unsigned short limit = genus.length();
    if (limit == 36) {
      string specie (genus.substr(amulet).append(genus.substr(0, amulet)));
      return silverSmith(specie);
    }
    else
      return genus + " ?";
  }

  void concierge(Wampum& belt) {
    unsigned short i;
    cout << "\n\n";
    for (belt.head = belt.carta.begin(), belt.tail = belt.carta.end();
    belt.head != belt.tail; ++belt.head) {
      i = 0; // reset
      cout << '\t' + belt.head->first + '-';
      cout << belt.tuned + "-e" << belt.epoch << '\n';
      while (i < belt.cords) {
        cout << '\t' + permute(belt.head->second, belt.pitch[i]) << '\n';
        i += 1;
      }
      cout << '\n' << endl;
    }
  }

  void concierge(Wampum& belt, const string& keySig) {
    unsigned short i = 0;
    cout << "\n\n";
    cout << "\033[0;33m\t" + keySig + '-' + belt.tuned + "-e" << belt.epoch;
    cout << "\033[0m\n";
    while (i < belt.cords) {
      cout << '\t' + permute(belt.carta[keySig], belt.pitch[i]) << '\n';
      i += 1;
    }
    cout << '\n' << endl;
  }

  void concierge(Wampum& belt, const string& keySig, const string& keyAlt) {
    unsigned short i;
    const string clef[] = {keySig, keyAlt};
    for (unsigned short k = 0; k < 2; ++k) {
      i = 0; // reset
      cout << "\n\n";
      cout << "\033[0;33m\t" + clef[k] + '-' + belt.tuned + "-e" << belt.epoch;
      cout << "\033[0m\n";
      while (i < belt.cords) {
        cout << '\t' + permute(belt.carta[clef[k]], belt.pitch[i]) << '\n';
        i += 1;
      }
    }
    cout << '\n' << endl;
  }

  void menu_usage() {
    unsigned short i;
    const string tunings[] = {"bfbf", "cgdae", "eadgbe", "fkbjdn", "ennead"};
    cout << "\033[0;33m\nSelection:\033[0m\n\n";
    for (i = 0; i < 5; ++i) cout << "\t" + tunings[i] + '\n';

    map<string, string> atlas = boethius();
    map<string, string>::iterator head, tail;
    i = 0;
    cout << "\033[0;33m\nSignature:\033[0m\n";
    for (head = atlas.begin(), tail = atlas.end(); head != tail; ++head) {
      if (i % 7 == 0) cout << '\n';
      else cout << '\t' + head->first;
      i += 1;
    }
    cout << "\n\n\t./paperboard eadgbe n0 j3\n";

    cout << "\033[0;33m\nScreenful:\033[0m\n";
    cout << "\n\t./paperboard eadgbe | sensible-pager\n";

    cout << "\033[0;33m\nSave text:\033[0m\n";
    cout << "\n\t./paperboard eadgbe > exchequer-$(date +'%s').txt\n" << endl;
  }

  void atrium(const string& tuning) {
    Wampum belt = populate(tuning);
    if (belt.cords < 2) menu_usage();
    else concierge(belt);
  }

  void atrium(const string& tuning, const string& keySig) {
    Wampum belt = populate(tuning);
    if (belt.cords < 2) menu_usage();
    else if (belt.carta.count(keySig))
      concierge(belt, keySig);
    else {
      menu_usage();
    }
  }

  void atrium(const string& tuning,
    const string& keySig, const string& keyAlt) {
    Wampum belt = populate(tuning);
    if (belt.cords < 2) menu_usage();
    else if (belt.carta.count(keySig) and belt.carta.count(keyAlt))
      concierge(belt, keySig, keyAlt);
    else {
      menu_usage();
    }
  }

} // close Phormium

int main(int argc, char* argv[]) {
  try {
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
  }
  catch (const exception& anomaly) {
    cerr << "\033[0;33m\n\texception: ";
    cerr << anomaly.what() << "\033[0m\n" << endl;
  }
  return 0;
}

