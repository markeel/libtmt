#ifndef TMT_WIDE_LOOKUP_H
#define TMT_WIDE_LOOKUP_H

#include "libtmt/tmt.h"
#include <stdbool.h>

bool is_wc_unicode_full_width(tmt_wchar_t wc, bool is_east_asia);

#endif
