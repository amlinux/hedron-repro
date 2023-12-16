workspace(name = "test")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "hedron_compile_commands",
    sha256 = "f76d1e3ba22a9ea42f31375104b71d67f11ad3f1c078f6b37a27e380a1d99cdf",
    strip_prefix = "bazel-compile-commands-extractor-3b5caca9ff2ed7f05ab0a116921d6ab96b3505ae",
    url = "https://github.com/hedronvision/bazel-compile-commands-extractor/archive/3b5caca9ff2ed7f05ab0a116921d6ab96b3505ae.tar.gz",
)

load("@hedron_compile_commands//:workspace_setup.bzl", "hedron_compile_commands_setup")

hedron_compile_commands_setup()