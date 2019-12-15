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

http_archive(
    name = "glm",
    build_file = "//third_party/glm:BUILD",
    sha256 = "9db7339c3b8766184419cfe7942d668fecabe9013ccfec8136b39e11718817d0",
    url = "https://github.com/g-truc/glm/releases/download/0.9.9.6/glm-0.9.9.6.zip",
    strip_prefix = "glm"
)

http_archive(
    name = "glfw",
    build_file = "//third_party/glfw:BUILD",
    sha256 = "b7ceae85dce2f3e2552f74564cb05a7500e3f1caa5d68ddbcf2ecf18f4036774",
    url = "https://github.com/glfw/glfw/releases/download/3.3/glfw-3.3.bin.WIN64.zip",
    strip_prefix = "glfw-3.3.bin.WIN64"
)

load("//third_party:env.bzl", "GLAD_URL")

http_archive(
    name = "glad",
    build_file = "//third_party/glad:BUILD",
    url = GLAD_URL,
    strip_prefix = ""
)

http_archive(
    name = "assimp",
    build_file = "//third_party/assimp:BUILD",
    sha256 = "0c81f2d6c2b18272c98727e21846a9a8a203b15e8957c2ff7a6e76a1c52af2d3",
    url = "https://github.com/assimp/assimp/archive/v5.0.0.zip",
    strip_prefix = "assimp-5.0.0"
)
