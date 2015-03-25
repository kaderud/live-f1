/* live-f1
 *
 * Copyright © 2005 Scott James Remnant <scott@netsplit.com>.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef SJR_MACROS_H
#define SJR_MACROS_H

/* Get standard definitions from C library */
#include <stddef.h>


/* Allow headers to be imported from C++, marking as C. */
#ifdef __cplusplus
# define SJR_BEGIN_EXTERN  extern "C" {
# define SJR_END_EXTERN    }
#else
# define SJR_BEGIN_EXTERN
# define SJR_END_EXTERN
#endif /* __cplusplus */


/* Define NULL if we haven't got it */
#ifndef NULL
# define NULL ((void *) 0)
#endif /* NULL */

/* Define TRUE and FALSE if we haven't got them */
#ifndef FALSE
# define FALSE 0
#endif /* FALSE */
#ifndef TRUE
# define TRUE (!FALSE)
#endif /* TRUE */

/* Define MIN and MAX if we haven't got them */
#ifndef MIN
# define MIN(_a, _b) ((_a) > (_b) ? (_b) : (_a))
#endif /* MIN */
#ifndef MAX
# define MAX(_a, _b) ((_a) > (_b) ? (_a) : (_b))
#endif /* MAX */

#endif /* SJR_MACROS_H */
