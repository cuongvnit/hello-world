#define g_rgNumUDFs 5

#define g_rgUDFdata 11



static LPWSTR g_rgUDFs

[g_rgNumUDFs][g_rgUDFdata] =

{

	{

		L"SumTwo",                 // Function name/ordinal

		L"JJJ",                    // Func signature type

		L"SumTwo",                 // Func name in Func wizard

		L"Arg1, Arg2",             // Arg name in Func wizard

		L"1",                      // Function type

		L"SimpleXll2007",           // Category in Func wizard

		L"",                       // Shortcut (commands only)

		L"",                       // Help topic

		L"SumTwo function help",  // Func help in Func wizard

		L"Help for Arg1",          // Arg help in Func wizard

		L"Help for Arg2"           // Arg help in Func wizard       

	},

	{

		L"GetString",

		L"U",

		L"GetString",

		L"",

		L"1",

		L"SimpleXll2007",

		L"",

		L"",

		L"GetString function help",

		L"",

		L""

	},

	{

		L"GetChars",

		L"C",

		L"GetChars",

		L"",

		L"1",

		L"SimpleXll2007",

		L"",

		L"",

		L"GetChars function help",

		L"",

		L""

	},

};

