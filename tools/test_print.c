#include "defs.h"
#include "print.h"


int main( int argc, const char* argv[] ) {
    init();

    board_col_t b = BLACK_START;
    board_col_t w = WHITE_START;

    char out[256];

    visualize_board(out, "BW", b, w);
    puts(out);

    board_to_hex(out, b);
    puts(out);

    visualize_board(out, "&$", b, w);

    puts(out);

    b = hex_to_board("00000005000000051403803d01403801");

    visualize_board(out, "B", b);
    puts(out);
    return 0;
}