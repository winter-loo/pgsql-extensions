#include "postgres.h"
#include "fmgr.h"
#include "utils/builtins.h"

PG_MODULE_MAGIC;

PG_FUNCTION_INFO_V1(xid2num);
void _PG_init(void);

void _PG_init(void) {
  ereport(INFO, (errmsg("...loading extension xid2num...")));
}

Datum xid2num(PG_FUNCTION_ARGS)
{
    char *str = "Hello, world!";
    PG_RETURN_TEXT_P(cstring_to_text(str));
}
