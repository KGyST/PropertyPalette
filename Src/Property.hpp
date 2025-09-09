#ifndef PROPERTY_HPP
#define PROPERTY_HPP



#if ACVER == 27
//#include	"ACAPI_MigrationHeader.hpp"
#include	"AC27.hpp"
#endif

bool operator== (const API_Property& i_this, const API_Property& i_other);
inline bool operator!= (const API_Property& i_this, const API_Property& i_other) { return !operator==(i_this, i_other); };

#endif // !PROPERTY_HPP

