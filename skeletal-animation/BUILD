load("//third_party:env.bzl", "THIRD_PARTY_COPTS")

cc_library(
    name = "camera",
    srcs = ["camera.cc"],
    hdrs = ["camera.h"],
    deps = [
        "@glm//:glm"
    ]
)

cc_library(
    name = "cg_exception",
    srcs = ["cg_exception.cc"],
    hdrs = ["cg_exception.h"],
)

cc_library(
    name = "keyboard",
    srcs = ["keyboard.cc"],
    hdrs = ["keyboard.h"],
    copts = THIRD_PARTY_COPTS,
    deps = [
        "@glfw//:glfw"
    ],
)

cc_library(
    name = "shader",
    srcs = ["shader.cc"],
    hdrs = ["shader.h"],
    copts = THIRD_PARTY_COPTS,
    deps = [
        "@glad//:glad",
        "@glm//:glm",
        ":cg_exception"
    ],
)

cc_library(
    name = "texture_manager",
    srcs = ["texture_manager.cc"],
    hdrs = ["texture_manager.h"],
    copts = THIRD_PARTY_COPTS,
    deps = [
        "@glad//:glad",
        "@stb//:stb",
        ":cg_exception"
    ],
)

cc_library(
    name = "vertex",
    srcs = ["vertex.cc"],
    hdrs = ["vertex.h"],
    copts = THIRD_PARTY_COPTS,
    deps = [
        "@glm//:glm",
        ":cg_exception"
    ],
)

cc_library(
    name = "wall",
    srcs = ["wall.cc"],
    hdrs = ["wall.h"],
    copts = THIRD_PARTY_COPTS,
    deps = [
        "@glm//:glm",
        "@glad//:glad",
        ":camera",
        ":shader",   
    ],
)

cc_library(
    name = "namer",
    srcs = ["namer.cc"],
    hdrs = ["namer.h"],
    deps = [],
)

cc_library(
    name = "sprite_model",
    srcs = ["sprite_model.cc"],
    hdrs = ["sprite_model.h"],
    deps = [
        "@glm//:glm",
        "@assimp//:assimp",
        ":camera",
        ":shader",
        ":mesh",
        ":namer",
    ],
)