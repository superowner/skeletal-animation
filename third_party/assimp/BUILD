load("@rules_foreign_cc//tools/build_defs:cmake.bzl", "cmake_external")

filegroup(
    name = "srcs",
    srcs = glob(["**"]),
    visibility = ["//visibility:public"],
)

cmake_external(
    name = "assimp",
    generate_crosstool_file = True,
    cmake_options = ["-G \"Visual Studio 16 2019\""],
    lib_source = "@assimp//:srcs",
    make_commands = ["MSBuild.exe INSTALL.vcxproj"],
)