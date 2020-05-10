#include <array>

#include "config.hpp"

#include "item_naming.hpp"

#include "generated/item_naming.inc"
#if SC_USE_PTR == 1
#include "generated/item_naming_ptr.inc"
#endif

const arv::array_view<item_name_description_t> item_name_description_t::data( bool ptr )
{
#if SC_USE_PTR == 1
  const auto data = ptr ? arv::array_view<item_name_description_t>( __ptr_item_name_description_data )
                        : arv::array_view<item_name_description_t>( __item_name_description_data );
#else
  ( void ) ptr;
  const auto& data = __item_name_description_data;
#endif

  return data;
}

