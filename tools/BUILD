package(default_visibility = ["//visibility:public"])

exports_files(["test_sharding_compliant"])

# Don't use these directly! Use //tools/build_rules/*.bzl instead.
config_setting(
    name = "compiler_clang",
    values = {"compiler": "clang"},
)

config_setting(
    name = "compiler_gcc",
    values = {"compiler": "gcc"},
)

config_setting(
    name = "compiler_emscripten",
    values = {"compiler": "emscripten"},
)

config_setting(
    name = "cpu_k8",
    values = {"cpu": "k8"},
)

config_setting(
    name = "cpu_web",
    values = {"cpu": "web"},
)

config_setting(
    name = "cpu_roborio",
    values = {"cpu": "roborio"},
)

config_setting(
    name = "cpu_cortex_m4f",
    values = {"cpu": "cortex-m4f"},
)

config_setting(
    name = "cpu_cortex_m4f_k22",
    values = {"cpu": "cortex-m4f-k22"},
)

config_setting(
    name = "cpu_armhf",
    values = {"cpu": "armhf-debian"},
)

config_setting(
    name = "has_asan",
    values = {"define": "have_asan=true"},
)

config_setting(
    name = "has_tsan",
    values = {"define": "have_tsan=true"},
)

config_setting(
    name = "has_ubsan",
    values = {"define": "have_ubsan=true"},
)

environment(name = "k8")

environment(name = "armhf-debian")

environment(name = "roborio")

environment(name = "web")

environment(name = "cortex-m4f")

environment(name = "cortex-m4f-k22")

environment_group(
    name = "cpus",
    defaults = [
        ":k8",
        ":roborio",
        ":armhf-debian",
    ],
    environments = [
        ":k8",
        ":roborio",
        ":web",
        ":armhf-debian",
        ":cortex-m4f",
        ":cortex-m4f-k22",
    ],
)
