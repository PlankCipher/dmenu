/* See LICENSE file for copyright and license details. */

static int topbar = 1;
static const char *fonts[] = {
	"monospace:size=10",
	"Noto Color Emoji:size=10"
};
static const char *prompt      = NULL;
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#928374" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
static unsigned int lines      = 0;

static const char worddelimiters[] = " ";
