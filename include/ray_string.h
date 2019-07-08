/*
** RAY PROJECT, 2019
** string-library
** File description:
** include
*/

#ifndef RAY_STRING
#define RAY_STRING 1

#include <features.h>

__BEGIN_DECLS

#include <sys/types.h>

/* Trim */

extern int trimls(char *__restrict str)
    __THROW __nonnull((1));
extern int trimts(char *__restrict str)
    __THROW __nonnull((1));
extern int trim(char *__restrict str)
    __THROW __nonnull((1));

/* Replace */

extern int replace(char *__restrict str, int old_c, int new_c)
    __THROW __nonnull((1));

/* StartWith */

extern int start_with(const char *__restrict str,
    const char *__restrict prefix)
    __THROW __attribute_pure__ __nonnull((1, 2));

/* EndWith */

extern int end_with(const char *__restrict str,
    const char *__restrict suffix)
    __THROW __attribute_pure__ __nonnull((1, 2));

/* IndexOf */

extern ssize_t first_index_of(const char *__restrict str, int c)
    __THROW __attribute_pure__ __nonnull((1));
extern ssize_t last_index_of(const char *__restrict str, int c)
    __THROW __attribute_pure__ __nonnull((1));
extern ssize_t first_index_of_m(const char *__restrict str,
    const char *__restrict cs)
    __THROW __attribute_pure__ __nonnull((1, 2));
extern ssize_t last_index_of_m(const char *__restrict str,
    const char *__restrict cs)
    __THROW __attribute_pure__ __nonnull((1, 2));
extern ssize_t first_index_not_of(const char *__restrict str, int c)
    __THROW __attribute_pure__ __nonnull((1));
extern ssize_t last_index_not_of(const char *__restrict str, int c)
    __THROW __attribute_pure__ __nonnull((1));
extern ssize_t first_index_not_of_m(const char *__restrict str,
    const char *__restrict cs)
    __THROW __attribute_pure__ __nonnull((1, 2));
extern ssize_t last_index_not_of_m(const char *__restrict str,
    const char *__restrict cs)
    __THROW __attribute_pure__ __nonnull((1, 2));

/* CharOp */

extern int pop_back(char *__restrict str)
    __THROW __nonnull((1));
__extern_inline int push_back(char *__restrict str, int c)
    __THROW __nonnull((1));
extern int pop_front(char *__restrict str)
    __THROW __nonnull((1));
extern int push_front(char *__restrict str, int c)
    __THROW __nonnull((1));

/* Caps */

extern int to_lower(char *__restrict str)
    __THROW __nonnull((1));
extern int to_upper(char *__restrict str)
    __THROW __nonnull((1));

#ifdef __USE_XOPEN2K8

#include <locale.h>

extern int to_lower_l(char *__restrict str, locale_t locale)
    __THROW __nonnull((1));
extern int to_upper_l(char *__restrict str, locale_t locale)
    __THROW __nonnull((1));

#endif

/* Misc */

extern int revstr(char *__restrict str)
    __THROW __nonnull((1));

/* Count */

extern size_t count_char_oc(const char *__restrict str, int c)
    __THROW __attribute_pure__ __nonnull((1));
extern size_t count_char_oc_m(const char *__restrict str,
    const char *__restrict cs)
    __THROW __attribute_pure__ __nonnull((1, 2));
extern size_t count_str_oc(const char *__restrict str,
    const char *__restrict sub)
    __THROW __attribute_pure__ __nonnull((1, 2));

/* Split */

extern char **split(const char *__restrict str, const char *__restrict delims)
    __THROW __nonnull((1, 2));

/* Join */

extern char *join(const char **__restrict tab, const char *__restrict cs)
    __THROW __nonnull((1, 2));

__END_DECLS

#endif /* RAY_STRING */