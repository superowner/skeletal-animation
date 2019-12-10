load("@rules_foreign_cc//tools/build_defs:cmake.bzl", "cmake_external")

filegroup(
    name = "srcs",
    srcs = glob(["**"]),
)

cmake_external(
    name = "assimp",
    generate_crosstool_file = True,
    cmake_options = ["-G \"NMake Makefiles\""],
    lib_source = "@assimp//:srcs",
    make_commands = [
        "nmake",
        "nmake install",
    ],
    static_libraries = [
        "IrrXML.lib",
        "assimp-vc142-mt.lib"
    ],
    visibility = [
        "//visibility:public"
    ],
)