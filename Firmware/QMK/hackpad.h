#pragma once
#include "quantum.h"

/* Layout: physical arrangement (3x3 with bottom-right empty)
   Mapping macro places the 8 keys into the 4-row x 2-column matrix used in config.h
   Physical layout (for reference):
   [ K00 K01 K02 ]
   [ K03 K04 K05 ]
   [ K06 K07  -- ]
*/
#define LAYOUT( K00, K01, K02, K03, K04, K05, K06, K07 ) \
{ \
    { K00, K01 }, \
    { K02, K03 }, \
    { K04, K05 }, \
    { K06, K07 }  \
}
