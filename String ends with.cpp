#include <string>
bool solution(std::string const &str, std::string const &ending) {
      if (str.length() < ending.length())
        return false;
    return str.compare(str.length() - ending.length(), ending.length(), ending) == 0;
}