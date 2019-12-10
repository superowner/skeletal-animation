load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
   name = "rules_foreign_cc",
   strip_prefix = "rules_foreign_cc-master",
   url = "https://github.com/bazelbuild/rules_foreign_cc/archive/master.zip",
)

load("@rules_foreign_cc//:workspace_definitions.bzl", "rules_foreign_cc_dependencies")
rules_foreign_cc_dependencies([], True)

new_git_repository(
    name = "stb",
    remote = "https://github.com/nothings/stb.git",
    commit = "f67165c2bb2af3060ecae7d20d6f731173485ad0",
    build_file = "//third_party/stb:BUILD"
)

new_git_repository(
    name = "glm",
    remote = "https://github.com/g-truc/glm.git",
    commit = "d666b5e533ac832241fc0dca2a6954ac2c0805d6",
    build_file = "//third_party/glm:BUILD"
)

http_archive(
    name = "glfw",
    build_file = "//third_party/glfw:BUILD",
    # sha256 = ""
    url = "https://github.com/glfw/glfw/releases/download/3.3/glfw-3.3.bin.WIN64.zip",
    strip_prefix = "glfw-3.3.bin.WIN64"
)

# http://glad.dav1d.de/#profile=core&specification=gl&api=gl%3D4.1&api=gles1%3Dnone&api=gles2%3Dnone&api=glsc2%3Dnone&language=c&loader=on
http_archive(
    name = "glad",
    build_file = "//third_party/glad:BUILD",
    # sha256 = ""
    url = "https://glad.dav1d.de/generated/tmp6oeZQyglad/glad.zip",
    strip_prefix = ""
)

http_archive(
    name = "assimp",
    build_file = "//third_party/assimp:BUILD",
    # sha256 = ""
    url = "https://github.com/assimp/assimp/archive/v5.0.0.zip",
    strip_prefix = "assimp-5.0.0"
)
