/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#444444",   /* after initialization */
	[INPUT] =  "#709080",   /* during input */
	[FAILED] = "#705050",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
