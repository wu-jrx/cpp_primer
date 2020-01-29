#include <string>

class Screen {
    
    public:
        using pos = std::string::size_type;
        Screen () = default;
        Screen ( pos ht, pos wd, size_t num_of_blanks): height(ht), width(wd), contents(num_of_blanks, ' ' ) {};
        Screen ( pos ht, pos wd, char c): height(ht), width(wd), contents(ht*wd, c) {};
        
    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;
};