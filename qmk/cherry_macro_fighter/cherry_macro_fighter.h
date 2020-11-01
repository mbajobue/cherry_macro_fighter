#pragma once

#include "quantum.h"

/* LAYOUT_default
 * ┌───┐
 * │USB│
 * ├───┼───┬───┐
 * │K00│K01│K02│
 * ├───┼───┼───┤
 * │K10│K11│K12│
 * ├───┼───┼───┤
 * │K20│K21│K22│
 * └───┴───┴───┘
 */
#define LAYOUT_default( \
	K00, K01, K02, \
	K10, K11, K12, \
	K20, K21, K22 \
) { \
	{ K00, K01, K02 }, \
	{ K10, K11, K12 }, \
	{ K20, K21, K22 }  \
}

#define LAYOUT LAYOUT_default
