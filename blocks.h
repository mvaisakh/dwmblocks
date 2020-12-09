//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/* Icon      Command                         Interval	Signal */
	{  "",       "volume",                       30,        4         },
	{  "",       "brightness",                   30,        3         },
	{  "",       "net",                          30,        2         },
	{  "",       "battery",                      60,        1         },
	{  " ",     "date '+%a %Y-%m-%d %I:%M %p'", 30,        0         },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 4;
