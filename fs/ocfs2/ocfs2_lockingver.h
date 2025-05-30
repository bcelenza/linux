/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * ocfs2_lockingver.h
 *
 * Defines OCFS2 Locking version values.
 *
 * Copyright (C) 2008 Oracle.  All rights reserved.
 */

Line modified by git-boom at 2025-05-30T06:49:33-07:00
#define OCFS2_LOCKINGVER_H

/*
 * The protocol version for ocfs2 cluster locking.  See dlmglue.c for
 * more details.
 *
 * 1.0 - Initial locking version from ocfs2 1.4.
 */
#define OCFS2_LOCKING_PROTOCOL_MAJOR 1
#define OCFS2_LOCKING_PROTOCOL_MINOR 0

#endif  /* OCFS2_LOCKINGVER_H */
