#define TKINTER_H
#define TK_HEX_VERSION ((TK_MAJOR_VERSION << 24) | \
(TK_MINOR_VERSION << 16) | \
(TK_RELEASE_LEVEL << 8) | \
(TK_RELEASE_SERIAL << 0))
#define TK_VERSION_HEX ((TK_MAJOR_VERSION << 24) | \
(TK_MINOR_VERSION << 16) | \
(TK_RELEASE_SERIAL << 8) | \
(TK_RELEASE_LEVEL << 0))
#if TK_HEX_VERSION < 0x0804020e
#define TKINTER_PROTECT_LOADTK
#define TKINTER_LOADTK_ERRMSG \
"Calling Tk_Init again after a previous call failed might deadlock"
