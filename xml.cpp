#include <iostream>

class XML{
  public:
    void saveToFile();
    int kolElemSod();
    XML elemSod();
    char *nameElem();
    char *getText();
    void instText(char*);
    int kolAtr();
    char *nameAtr(int);
    char *znachAtr(int);
    XML findElemSod(char *name, char *atr, char *value);
    char *findZnachAtr(char *name);
    int numAtr(char *name);
    void addAtr(char *atr, char *value);
    void remAtr(int);
    XML *addElemSod(char *name);
    void remElemSod(int);
};

int main(int argc, char **argv) {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
