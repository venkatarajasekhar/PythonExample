#define __TMACRO_H__
#if !defined(LOBYTE)
#define LOBYTE(w)           ((BYTE)(w))
#if !defined(HIBYTE)
#define HIBYTE(w)           ((BYTE)(((WORD)(w) >> 8) & 0xFF))
#if !defined(LOWORD)
#define LOWORD(d)           ((WORD)(d))
#if !defined(HIWORD)
#define HIWORD(d)           ((WORD)((((DWORD)(d)) >> 16) & 0xFFFF))
#define LODWORD(q)          ((q).u.dwLowDword)
#define HIDWORD(q)          ((q).u.dwHighDword)
#if !defined(MAKEWORD)
#define MAKEWORD(lb, hb)    ((WORD)(((BYTE)(lb)) | (((WORD)((BYTE)(hb))) << 8)))
#if !defined(MAKEDWORD)
#define MAKEDWORD(lw, hw)   ((DWORD)(((WORD)(lw)) | (((DWORD)((WORD)(hw))) << 16)))