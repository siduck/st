/* See LICENSE for license details. */

enum win_mode {
	MODE_VISIBLE     = 1 << 0,
	MODE_FOCUSED     = 1 << 1,
	MODE_APPKEYPAD   = 1 << 2,
	MODE_MOUSEBTN    = 1 << 3,
	MODE_MOUSEMOTION = 1 << 4,
	MODE_REVERSE     = 1 << 5,
	MODE_KBDLOCK     = 1 << 6,
	MODE_HIDE        = 1 << 7,
	MODE_APPCURSOR   = 1 << 8,
	MODE_MOUSESGR    = 1 << 9,
	MODE_8BIT        = 1 << 10,
	MODE_BLINK       = 1 << 11,
	MODE_FBLINK      = 1 << 12,
	MODE_FOCUS       = 1 << 13,
	MODE_MOUSEX10    = 1 << 14,
	MODE_MOUSEMANY   = 1 << 15,
	MODE_BRCKTPASTE  = 1 << 16,
	MODE_NUMLOCK     = 1 << 17,
	MODE_MOUSE       = MODE_MOUSEBTN|MODE_MOUSEMOTION|MODE_MOUSEX10\
	                  |MODE_MOUSEMANY,
};
/* Purely graphic info */
typedef struct {
	int tw, th; /* tty width and height */
	int w, h; /* window width and height */
	int hborderpx, vborderpx;
	int ch; /* char height */
	int cw; /* char width  */
	int mode; /* window state/mode flags */
	int cursor; /* cursor style */
} TermWindow;

// /* Purely graphic info */
// typedef struct {
// 	int tw, th; /* tty width and height */
// 	int w, h; /* window width and height */
// 	int ch; /* char height */
// 	int cw; /* char width  */
// 	int cyo; /* char y offset */
// 	int mode; /* window state/mode flags */
// 	int cursor; /* cursor style */
// } TermWindow;

TermWindow gettermwindow(void);
void xbell(void);
void xclipcopy(void);
int xsixelinit(SixelContext *);
void xsixelscrolldown(SixelContext *, int, int);
void xsixelscrollup(SixelContext *, int, int);
void xsixelnewimage(SixelContext *, int, int);
int xsixelparse(SixelContext *, unsigned char *, int);
void xsixeldeleteimage(SixelContext *, ImageList *);
void xdrawcursor(int, int, Glyph, int, int, Glyph, Line, int);
void xdrawsixel(SixelContext *, Line *, int, int);
void xdrawline(Line, int, int, int);
void xfinishdraw(void);
void xloadcols(void);
int xsetcolorname(int, const char *);
void xsettitle(char *);
int xsetcursor(int);
void xsetmode(int, unsigned int);
void xsetpointermotion(int);
void xsetsel(char *);
int xstartdraw(void);
void xximspot(int, int);
