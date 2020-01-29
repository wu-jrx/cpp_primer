
int fact ( int val ) {
    if ( val > 0 && val != 1 )
        return val * fact ( val - 1 );
    else
        return 1;
}