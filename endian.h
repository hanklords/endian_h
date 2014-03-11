
#ifndef _ENDIAN_H_
#define _ENDIAN_H_

#ifndef __APPLE__
#error This include file works on apple systems
#endif

#include <libkern/OSByteOrder.h>

#define htobe16(x) OSSwapHostToBigInt16(x)
#define htobe32(x) OSSwapHostToBigInt32(x)
#define htobe64(x) OSSwapHostToBigInt64(x)

#define htole16(x) OSSwapHostToLittleInt16(x)
#define htole32(x) OSSwapHostToLittleInt32(x)
#define htole64(x) OSSwapHostToLittleInt64(x)

#define betoh16(x) OSSwapBigToHostInt16(x)
#define betoh32(x) OSSwapBigToHostInt32(x)
#define betoh64(x) OSSwapBigToHostInt64(x)

#define letoh16(x) OSSwapLittleToHostInt16(x)
#define letoh32(x) OSSwapLittleToHostInt32(x)
#define letoh64(x) OSSwapLittleToHostInt64(x)

#define be16toh(x) betoh16(x)
#define be32toh(x) betoh32(x)
#define be64toh(x) betoh64(x)

#define le16toh(x) letoh16(x)
#define le32toh(x) letoh32(x)
#define le64toh(x) letoh64(x)

#endif
