/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* abuse trie to store feature weights */
/* #undef ABUSE_TRIE */

/* default classifier */
#define DEFAULT_CLASSIFIER FST

/* MeCab separater between features */
#define FEATURE_SEP ','

/* separater between POS1-4 */
/* #undef FEATURE_SEP_UNI */

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `floor' function. */
#define HAVE_FLOOR 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `memchr' function. */
#define HAVE_MEMCHR 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `pow' function. */
#define HAVE_POW 1

/* Define to 1 if you have the <random> header file. */
/* #undef HAVE_RANDOM */

/* Define to 1 if stdbool.h conforms to C99. */
/* #undef HAVE_STDBOOL_H */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <tr1/random> header file. */
/* #undef HAVE_TR1_RANDOM */

/* Define to 1 if you have the <tr1/unordered_map> header file. */
/* #undef HAVE_TR1_UNORDERED_MAP */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <unordered_map> header file. */
#define HAVE_UNORDERED_MAP 1

/* Define to 1 if the system has the type `_Bool'. */
/* #undef HAVE__BOOL */

/* the size of IO buffer */
#define IOBUF_SIZE 262144

/* the number of classes */
#define MAX_NUM_CLASSES 1024

/* disable debug */
#define NDEBUG 1

/* Name of package */
#define PACKAGE "jdepp"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "ynaga@tkl.iis.u-tokyo.ac.jp"

/* Define to the full name of this package. */
#define PACKAGE_NAME "jdepp"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "jdepp 2022-03-18"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "jdepp"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2022-03-18"

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* MeCab separater after surface string */
#define SURFACE_END '\t'

/* suffix of trie */
#define TRIE_SUFFIX "cda"

/* enable array trie */
#define USE_ARRAY_TRIE 1

/* standalone parser */
/* #undef USE_AS_STANDALONE */

/* cedar as double array library */
#define USE_CEDAR 1

/* CONDARA as morphological analyzer */
/* #undef USE_CONDARA */

/* darts as double array library */
/* #undef USE_DARTS */

/* darts-clone as double array library */
/* #undef USE_DARTS_CLONE */

/* float as floating-point numbers */
/* #undef USE_FLOAT */

/* FST as default classifier */
#define USE_FST_AS_DEFAULT 1

/* hash support */
#define USE_HASH 1

/* IPA POS set */
#define USE_IPA_POS 1

/* JUMAN as morphological analyzer */
/* #undef USE_JUMAN */

/* JUMAN POS set */
/* #undef USE_JUMAN_POS */

/* support kernel model */
#define USE_KERNEL 1

/* USE KyotoCorpus4.0 without Maichini news articles */
/* #undef USE_KYOTO_PARTIAL */

/* enable LFU PMT */
/* #undef USE_LFU_PMT */

/* support linear model */
/* #undef USE_LINEAR */

/* enable training with Tsuruoka's maxent */
/* #undef USE_MAXENT */

/* MeCab as morphological analyzer */
#define USE_MECAB 1

/* suffix for approximated kernel models */
/* #undef USE_MODEL_SUFFIX */

/* mt19937 support */
/* #undef USE_MT19937 */

/* enable training with opal */
#define USE_OPAL 1

/* PKE as default classifier */
/* #undef USE_PKE_AS_DEFAULT */

/* PMT as default classifier */
/* #undef USE_PMT_AS_DEFAULT */

/* enable profiling */
/* #undef USE_PROFILING */

/* enable pruning */
#define USE_PRUNING 1

/* use SSE 4.2 popcnt */
/* #undef USE_SSE4_2_POPCNT */

/* enable training with TinySVM */
/* #undef USE_SVM */

/* timer support */
#define USE_TIMER 1

/* hash support (TR1) */
/* #undef USE_TR1_HASH */

/* mt19937 support */
/* #undef USE_TR1_MT19937 */

/* UNI POS set */
/* #undef USE_UNI_POS */

/* Version number of package */
#define VERSION "2022-03-18"

/* Define for Solaris 2.5.1 so the uint64_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT64_T */

/* Define for Solaris 2.5.1 so the uint8_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT8_T */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the type of a signed integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int64_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef ssize_t */

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint16_t */

/* Define to the type of an unsigned integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint64_t */

/* Define to the type of an unsigned integer type of width exactly 8 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint8_t */
