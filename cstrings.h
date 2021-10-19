#include <iostream>
#include <fstream>
#include <sstream>

class CString {
    private:
        std::string s;
    public:
        explicit CString(const std::string &c) {
            s = c;
        }
        std::string Parse() {
            std::string newstring;
            for (uint i = 0; i < s.length(); i++) {
                if (s[i] == '\\') {
                    switch (s[i+1]) {
                        case 'n':
                            newstring = newstring + "\n";
                            break;
                        case 't':
                            newstring = newstring + "\t";
                            break;
                        case 'r':
                            newstring = newstring + "\r";
                            break;
                        
                        default: std::cout << "wrong escape sequence, '" << s[i+1] << "'" << std::endl; break;
                    }
                } else {
                    if (i != 0) {
                        if (s[i-1] != '\\') { /* not escaped */
                            newstring = newstring + s[i];
                        }
                    } else {
                        newstring = newstring + s[i];
                    }
                }
            }
            return newstring;
        }

};

std::string PrettyPrint(std::string cstring) {
    std::string OPEN;
    std::stringstream ss(cstring);
    std::string entstring;
    getline(ss, OPEN, '\"');
    getline(ss, entstring, '\"');
    return CString(entstring).Parse();
}