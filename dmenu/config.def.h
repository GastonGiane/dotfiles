/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Fira Mono Medium:size=12"
};
static const char *prompt      = "Run:";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
						 	/*     fg         bg       */
	[SchemeNorm] = 			{ "#c1c0c0", "#2d2a2e" },
	[SchemeSel] = 			{ "#fcfcfa", "#fc9867" },
	[SchemeSelHighlight] = 	{ "#2d2a2e", "#fc9867" },
	[SchemeNormHighlight] = { "#ffd866", "#2d2a2e" },
	[SchemeOut] = 			{ "#FFFFFF", "#FFFFFF" },
	[SchemeHp] = 			{ "#FFFFFF", "#FFFFFF" }
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 28;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
