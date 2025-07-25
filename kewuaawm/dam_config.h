/* appearance */
static int showbar           = 0; /* 0 means no bar */
static int topbar            = 1; /* 0 means bottom bar */
static const char *fonts[]   = { "FiraCode Nerd Font:size=15" };
static uint32_t colors[][3]  = {
	/*               fg          bg         */
	[SchemeNorm] = { 0x828bb8ff, 0x1b1d2bd0, 0x828bb8ff },
	[SchemeSel]  = { 0x444a73ff, 0xc8d3f5d0, 0xffc777ff },
};

/* tagging */
static char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };

/* layout name replacement values */
static const char *layouts[][2] = {
	/* layout name          replace */
	{ "rivertile - left",   "[]=" },
	{ "rivertile - right",  "=[]" },
	{ "rivertile - top",    "[^]" },
	{ "rivertile - bottom", "[_]" },
	{ "left",   "[]=" },
	{ "right",  "=[]" },
	{ "top",    "[^]" },
	{ "bottom", "[_]" },
	{ "monocle", "[M]" },
	{ NULL,                 "><>" }, /* no layout, last layout */
};

static const char *termcmd[] = { "footclient", NULL };

/* button definitions */
/* click can be ClkTagBar, ClkLayout, ClkMode, ClkTitle, ClkStatus */
static const Button buttons[] = {
	/* click     button      function  argument */
	{ ClkTagBar, BTN_LEFT,   command,  {.s = "set-focused-tags"} },
	{ ClkTagBar, BTN_RIGHT,  command,  {.s = "toggle-focused-tags"} },
	{ ClkTagBar, BTN_MIDDLE, command,  {.s = "set-view-tags"} },
	{ ClkTitle,  BTN_LEFT,   command,  {.s = "zoom"} },
	{ ClkStatus, BTN_MIDDLE, spawn,    {.v = termcmd } },
};
