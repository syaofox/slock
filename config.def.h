/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#2E3440",
	[INPUT] =  "#88C0D0",
	[FAILED] = "#BF616A",
};

static const char * text_color = "#ECEFF4";

ResourcePref resources[] = {
		{ "init",        STRING,  &colorname[INIT] },
		{ "input",       STRING,  &colorname[INPUT] },
		{ "fail",        STRING,  &colorname[FAILED] },
		{ "text",        STRING,  &text_color },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text size (must be a valid size) */
static const char * font_name = "6x13";