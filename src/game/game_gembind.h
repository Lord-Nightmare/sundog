/*
 * Copyright (c) 2017 Wladimir J. van der Laan
 * Distributed under the MIT software license, see the accompanying
 * file COPYING or http://www.opensource.org/licenses/mit-license.php.
 */
#ifndef H_GAME_GEMBIND
#define H_GAME_GEMBIND

#include <stdint.h>

struct game_screen;
struct psys_state;

/** Construction */
extern struct psys_binding *new_gembind(struct psys_state *state, struct game_screen *screen);

/** Destruction */
extern void destroy_gembind(struct psys_binding *b);

#endif
