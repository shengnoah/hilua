#ifndef __tangguo_h__
#define __tangguo_h__
#include <stdio.h>
#include <string.h>
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"


extern int add(lua_State* L);
extern int sub(lua_State* L);
extern int prn(lua_State* L);
extern int split(lua_State* L);

static luaL_Reg libtangguo[] = {
    {"add", add},
    {"sub", sub},
    {"prn", prn},
    {"split", split},
    {NULL, NULL}
};

#endif