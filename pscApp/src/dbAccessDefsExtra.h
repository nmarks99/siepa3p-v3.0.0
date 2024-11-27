// saRmsCal.c and saStdCal.c use the below macro but it is
// no longer included in EPICS base 7.0.8.
// This macro is copied from base-3.14.12.7/include/dbAccessDefs.h
#define dbGetPdbAddrFromLink(PLNK) \
    ( ( (PLNK)->type != DB_LINK ) \
      ? 0 \
      : ( ( (struct dbAddr *)( (PLNK)->value.pv_link.pvt) ) ) )
