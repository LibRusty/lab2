#include "classunit.h"

ClassUnit::ClassUnit(const std::string& name) : m_name(name) {
    m_fields.resize(ACCESS_MODIFIERS.size());
}
