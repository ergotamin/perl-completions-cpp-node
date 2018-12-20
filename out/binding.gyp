{
	"targets": [
		{
			"includes": [
				"auto.gypi"
			],
			"sources": [
				"../src/index.cc"
			],
			"cflags": [
				"-Wall",
				"-Wno-deprecated",
				"-Wno-deprecated-declarations",
				"-Wno-cast-function-type",
				"-O2",
				"-Ofast",
				"-pthread"
			]

		}
	],
	"includes": [
		"auto-top.gypi"
	]
}
