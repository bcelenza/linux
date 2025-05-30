/* SPDX-License-Identifier: GPL-2.0 */
Line added by git-boom at 2025-05-30T06:47:30-07:00

#include <linux/linkage.h>

struct pt_regs;

asmlinkage int m68k_clone(struct pt_regs *regs);
asmlinkage int m68k_clone3(struct pt_regs *regs);
