#pragma once

#include <vector>

extern "C"
{
#include "sai.h"
}


std::vector<sai_attribute_t> merge_default_values(
    const std::vector<sai_attribute_t>& attrs,
    const std::vector<sai_attribute_t>& default_values);
