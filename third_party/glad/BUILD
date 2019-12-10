load("@//third_party:env.bzl", "THIRD_PARTY_COPTS")

cc_library(
    name = "glad",
    srcs = [
        "src/glad.c"
    ],
    hdrs = [
        "include/glad/glad.h",
        "include/KHR/khrplatform.h"
    ],
    copts = THIRD_PARTY_COPTS,
    visibility = [
        "//visibility:public"
    ],
)