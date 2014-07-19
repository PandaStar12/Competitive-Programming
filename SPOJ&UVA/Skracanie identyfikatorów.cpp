    #include <iostream>
    #include <string>
    #include <sstream>
 
    using namespace std;
 
    /*
    *
    */
    bool delnousualletters(string *str,int N,int *n){
        for (int i=*n-1;i >= 0;--i){
            if ((90 < (*str)[i] || (*str)[i] < 65) && (122 < (*str)[i] || (*str)[i] < 97) && (57 < (*str)[i] || (*str)[i] < 48) && (*str)[i] != 36){
                (*str).erase(i,1);
                if (--(*n) == N)
                    return true;
            }
        }
        return false;
    }
    bool deldigits(string *str,int N,int *n){
        for (int i=*n-1;i >= 0;--i)
                if (57 >= (*str)[i] && (*str)[i] >= 48){
                    (*str).erase(i,1);
                    if (--(*n) == N)
                        return true;
                }
        return false;
    }
    bool delvowel(string *str,int N,int *n){
        bool first_vowel = true;
        for (int i=0;i < *n;++i)
            if ((*str)[i] == 65 || (*str)[i] == 97 || (*str)[i] == 69 || (*str)[i] == 101 || (*str)[i] == 73 || (*str)[i] == 105 || (*str)[i] == 79 || (*str)[i] == 111 || (*str)[i] == 85 || (*str)[i] == 117 || (*str)[i] == 89 || (*str)[i] == 121){
                if (first_vowel)
                    first_vowel = false;
                else{
                    (*str).erase(i,1);
                    if (--(*n) == N)
                        return true;
                    --i;
                }
             }
        return false;
    }
    bool delletters(string *str,int N,int *n){
        (*str).erase(N - 1,*n - N);
        return true;
    }
    int main(int argc, char** argv) {
        string str;
        int N, n;
        std::cin >> str;
        stringstream(str) >> N;
        std::cin >> str;
        n = str.length();
        if (n <= N || delnousualletters(&str,N,&n) || deldigits(&str,N,&n) || delvowel(&str,N,&n) ||  delletters(&str,N,&n))
            cout << str;
        return (0);
    }

