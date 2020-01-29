#include <string>
#include <iostream>
#include <vector>

class Window_mgr {
    public:
        using ScreenIndex = std::vector<Screen>::size_type;
        void clear( ScreenIndex i );
    private:
        std::vector<Screen> screens { Screen( 0, 0, 'x' )};

};
inline 
void Window_mgr::clear ( ScreenIndex i ){
    Screen &item = screens[i]; 
    item.contents = std::string( item.height*item.width, ' ' );
};
class Screen {
    public:
        friend void Window_mgr::clear( ScreenIndex );

        using pos = std::string::size_type;
        Screen () = default;
        Screen (pos ht, pos wd): height(ht), width(wd), contents( ht*wd, ' ' ) {}
        Screen ( pos ht, pos wd, char c ): height( ht ), width( wd ), contents ( ht*wd, c ) {}
        
        Screen &move ( pos, pos );
        
        Screen &set( char );
        Screen &set( pos, pos, char );

        Screen &display( std::ostream &os ) { do_display ( os ); return *this; }
        const Screen &display ( std::ostream &os ) const { do_display( os ); return *this; }

    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;
        void do_display ( std::ostream &os ) const { os << contents; }


};
inline
Screen& Screen::move ( pos r, pos c ) {
    cursor = r*width + c;
    return *this;
};
inline
Screen& Screen::set( char c ) {
    contents [ cursor ] = c;
    return *this;
};
inline
Screen& Screen::set ( pos r, pos c, char ch ) {
    contents [ r*width + c ] = ch;
    return *this;
};