#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2023 // UTC year
#define YOTTA_BUILD_MONTH 9 // UTC month 1-12
#define YOTTA_BUILD_DAY 13 // UTC day 1-31
#define YOTTA_BUILD_HOUR 13 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 56 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 37 // UTC second 0-61
#define YOTTA_BUILD_UUID b97b6f53-f033-4ef6-9a4f-5525d0e89083 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID b'381199fb4450b84dca588e10ffc6eb109900a79f' // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION b'v2.1.1-13-g381199f' // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
