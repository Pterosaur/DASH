#include "default_value.h"

#include <map>

std::vector<sai_attribute_t> merge_default_values(
    const std::vector<sai_attribute_t>& attrs,
    const std::vector<sai_attribute_t>& default_values) {

    std::vector<sai_attribute_t> merged_attrs;
    std::map<sai_attr_id_t, sai_attribute_t> attrs_map;

    for (const auto &attr : default_values) {
        attrs_map[attr.id] = attr;
    }

    for (const auto &attr : attrs) {
        attrs_map[attr.id] = attr;
    }

    for (const auto &pair : attrs_map) {
        merged_attrs.push_back(pair.second);
    }

    return merged_attrs;
}
