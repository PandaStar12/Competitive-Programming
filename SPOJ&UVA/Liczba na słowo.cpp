    #include <cstdlib>
    #include <iostream>
    #include <string>
 
    using namespace std;
 
    string wyswietl(int t[13]) {
        string wyj;
        if (t[12]==1) wyj.append("jeden bln. ");
        switch (t[11]) {
            case 1:
                wyj.append("sto ");
                break;
            case 2:
                wyj.append("dwiescie ");
                break;
            case 3:
                wyj.append("trzysta ");
                break;
            case 4:
                wyj.append("czterysta ");
                break;
            case 5:
                wyj.append("piecset ");
                break;
            case 6:
                wyj.append("szescset ");
                break;
            case 7:
                wyj.append("siedemset ");
                break;
            case 8:
                wyj.append("osiemset ");
                break;
            case 9:
                wyj.append("dziewiecset ");
                break;
        }
        switch (t[10]) {
            case 1:
                switch (t[9]) {
                    case 0:
                         wyj.append("dziesiec ");
                         break;
                    case 1:
                         wyj.append("jedenascie ");
                         break;
                    case 2:
                         wyj.append("dwanascie ");
                         break;
                    case 3:
                         wyj.append("trzynascie ");
                         break;
                    case 4:
                         wyj.append("czternascie ");
                         break;
                    case 5:
                         wyj.append("pietnascie ");
                         break;
                    case 6:
                         wyj.append("szesnascie ");
                         break;
                    case 7:
                         wyj.append("siedemnascie ");
                         break;
                    case 8:
                         wyj.append("osiemnascie ");
                         break;
                    case 9:
                         wyj.append("dziewietnascie ");
                         break;
                }
                break;
            case 2:
                wyj.append("dwadziescia ");
                break;
            case 3:
                wyj.append("trzydziesci ");
                break;
            case 4:
                wyj.append("czterdziesci ");
                break;
            case 5:
                wyj.append("piecdziesiat ");
                break;
            case 6:
                wyj.append("szescdziesiat ");
                break;
            case 7:
                wyj.append("siedemdziesiat ");
                break;
            case 8:
                wyj.append("osiemdziesiat ");
                break;
            case 9:
                wyj.append("dziewiecdziesiat ");
                break;
        }
        if (t[10]!=1) {
            switch (t[9]) {
                case 1:
                     wyj.append("jeden ");
                     break;
                case 2:
                     wyj.append("dwa ");
                     break;
                case 3:
                     wyj.append("trzy ");
                     break;
                case 4:
                     wyj.append("cztery ");
                     break;
                case 5:
                     wyj.append("piec ");
                     break;
                case 6:
                     wyj.append("szesc ");
                     break;
                case 7:
                     wyj.append("siedem ");
                     break;
                case 8:
                     wyj.append("osiem ");
                     break;
                case 9:
                     wyj.append("dziewiec ");
                     break;
            }
        }
        if (t[11]!=0 || t[10]!=0 || t[9]!=0) wyj.append("mld. ");
        switch (t[8]) {
            case 1:
                wyj.append("sto ");
                break;
            case 2:
                wyj.append("dwiescie ");
                break;
            case 3:
                wyj.append("trzysta ");
                break;
            case 4:
                wyj.append("czterysta ");
                break;
            case 5:
                wyj.append("piecset ");
                break;
            case 6:
                wyj.append("szescset ");
                break;
            case 7:
                wyj.append("siedemset ");
                break;
            case 8:
                wyj.append("osiemset ");
                break;
            case 9:
                wyj.append("dziewiecset ");
                break;
        }
        switch (t[7]) {
            case 1:
                switch (t[6]) {
                    case 0:
                         wyj.append("dziesiec ");
                         break;
                    case 1:
                         wyj.append("jedenascie ");
                         break;
                    case 2:
                         wyj.append("dwanascie ");
                         break;
                    case 3:
                         wyj.append("trzynascie ");
                         break;
                    case 4:
                         wyj.append("czternascie ");
                         break;
                    case 5:
                         wyj.append("pietnascie ");
                         break;
                    case 6:
                         wyj.append("szesnascie ");
                         break;
                    case 7:
                         wyj.append("siedemnascie ");
                         break;
                    case 8:
                         wyj.append("osiemnascie ");
                         break;
                    case 9:
                         wyj.append("dziewietnascie ");
                         break;
                }
                break;
            case 2:
                wyj.append("dwadziescia ");
                break;
            case 3:
                wyj.append("trzydziesci ");
                break;
            case 4:
                wyj.append("czterdziesci ");
                break;
            case 5:
                wyj.append("piecdziesiat ");
                break;
            case 6:
                wyj.append("szescdziesiat ");
                break;
            case 7:
                wyj.append("siedemdziesiat ");
                break;
            case 8:
                wyj.append("osiemdziesiat ");
                break;
            case 9:
                wyj.append("dziewiecdziesiat ");
                break;
        }
        if (t[7]!=1) {
            switch (t[6]) {
                case 1:
                     wyj.append("jeden ");
                     break;
                case 2:
                     wyj.append("dwa ");
                     break;
                case 3:
                     wyj.append("trzy ");
                     break;
                case 4:
                     wyj.append("cztery ");
                     break;
                case 5:
                     wyj.append("piec ");
                     break;
                case 6:
                     wyj.append("szesc ");
                     break;
                case 7:
                     wyj.append("siedem ");
                     break;
                case 8:
                     wyj.append("osiem ");
                     break;
                case 9:
                     wyj.append("dziewiec ");
                     break;
            }
        }
        if (t[8]!=0 || t[7]!=0 || t[6]!=0) wyj.append("mln. ");
        switch (t[5]) {
            case 1:
                wyj.append("sto ");
                break;
            case 2:
                wyj.append("dwiescie ");
                break;
            case 3:
                wyj.append("trzysta ");
                break;
            case 4:
                wyj.append("czterysta ");
                break;
            case 5:
                wyj.append("piecset ");
                break;
            case 6:
                wyj.append("szescset ");
                break;
            case 7:
                wyj.append("siedemset ");
                break;
            case 8:
                wyj.append("osiemset ");
                break;
            case 9:
                wyj.append("dziewiecset ");
                break;
        }
        switch (t[4]) {
            case 1:
                switch (t[3]) {
                    case 0:
                         wyj.append("dziesiec ");
                         break;
                    case 1:
                         wyj.append("jedenascie ");
                         break;
                    case 2:
                         wyj.append("dwanascie ");
                         break;
                    case 3:
                         wyj.append("trzynascie ");
                         break;
                    case 4:
                         wyj.append("czternascie ");
                         break;
                    case 5:
                         wyj.append("pietnascie ");
                         break;
                    case 6:
                         wyj.append("szesnascie ");
                         break;
                    case 7:
                         wyj.append("siedemnascie ");
                         break;
                    case 8:
                         wyj.append("osiemnascie ");
                         break;
                    case 9:
                         wyj.append("dziewietnascie ");
                         break;
                }
                break;
            case 2:
                wyj.append("dwadziescia ");
                break;
            case 3:
                wyj.append("trzydziesci ");
                break;
            case 4:
                wyj.append("czterdziesci ");
                break;
            case 5:
                wyj.append("piecdziesiat ");
                break;
            case 6:
                wyj.append("szescdziesiat ");
                break;
            case 7:
                wyj.append("siedemdziesiat ");
                break;
            case 8:
                wyj.append("osiemdziesiat ");
                break;
            case 9:
                wyj.append("dziewiecdziesiat ");
                break;
        }
        if (t[4]!=1) {
            switch (t[3]) {
                case 1:
                     wyj.append("jeden ");
                     break;
                case 2:
                     wyj.append("dwa ");
                     break;
                case 3:
                     wyj.append("trzy ");
                     break;
                case 4:
                     wyj.append("cztery ");
                     break;
                case 5:
                     wyj.append("piec ");
                     break;
                case 6:
                     wyj.append("szesc ");
                     break;
                case 7:
                     wyj.append("siedem ");
                     break;
                case 8:
                     wyj.append("osiem ");
                     break;
                case 9:
                     wyj.append("dziewiec ");
                     break;
            }
        }
        if (t[5]!=0 || t[4]!=0 || t[3]!=0) wyj.append("tys. ");
        switch (t[2]) {
            case 1:
                wyj.append("sto ");
                break;
            case 2:
                wyj.append("dwiescie ");
                break;
            case 3:
                wyj.append("trzysta ");
                break;
            case 4:
                wyj.append("czterysta ");
                break;
            case 5:
                wyj.append("piecset ");
                break;
            case 6:
                wyj.append("szescset ");
                break;
            case 7:
                wyj.append("siedemset ");
                break;
            case 8:
                wyj.append("osiemset ");
                break;
            case 9:
                wyj.append("dziewiecset ");
                break;
        }
        switch (t[1]) {
            case 1:
                switch (t[0]) {
                    case 0:
                         wyj.append("dziesiec ");
                         break;
                    case 1:
                         wyj.append("jedenascie ");
                         break;
                    case 2:
                         wyj.append("dwanascie ");
                         break;
                    case 3:
                         wyj.append("trzynascie ");
                         break;
                    case 4:
                         wyj.append("czternascie ");
                         break;
                    case 5:
                         wyj.append("pietnascie ");
                         break;
                    case 6:
                         wyj.append("szesnascie ");
                         break;
                    case 7:
                         wyj.append("siedemnascie ");
                         break;
                    case 8:
                         wyj.append("osiemnascie ");
                         break;
                    case 9:
                         wyj.append("dziewietnascie ");
                         break;
                }
                break;
            case 2:
                wyj.append("dwadziescia ");
                break;
            case 3:
                wyj.append("trzydziesci ");
                break;
            case 4:
                wyj.append("czterdziesci ");
                break;
            case 5:
                wyj.append("piecdziesiat ");
                break;
            case 6:
                wyj.append("szescdziesiat ");
                break;
            case 7:
                wyj.append("siedemdziesiat ");
                break;
            case 8:
                wyj.append("osiemdziesiat ");
                break;
            case 9:
                wyj.append("dziewiecdziesiat ");
                break;
        }
        if (t[1]!=1) {
            switch (t[0]) {
                case 1:
                     wyj.append("jeden ");
                     break;
                case 2:
                     wyj.append("dwa ");
                     break;
                case 3:
                     wyj.append("trzy ");
                     break;
                case 4:
                     wyj.append("cztery ");
                     break;
                case 5:
                     wyj.append("piec ");
                     break;
                case 6:
                     wyj.append("szesc ");
                     break;
                case 7:
                     wyj.append("siedem ");
                     break;
                case 8:
                     wyj.append("osiem ");
                     break;
                case 9:
                     wyj.append("dziewiec ");
                     break;
            }
        }
        return wyj;
    }
       
    int main() {
        int testy, omg;
        cin >> testy;
       
        long long liczba;
        for (int x=0; x<testy; x++) {
            int tab[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
            cin >> liczba;
            for (int y=0; y<13; y++) {
                tab[y]=liczba%10;
                liczba/=10;
            }
            cout << wyswietl(tab);
            cout << endl;
        }
        return 0;
    }

