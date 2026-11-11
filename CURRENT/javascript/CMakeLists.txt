#/*
# @(#)CMakeLists.txt        6.2.0    2026-11-04
#
# MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2024-05-19
# The most up-to-date license is available at the below link:
# - https://mathparser.org/mxparser-license
#
# AUTHOR: Copyright 2010 - 2026 Mariusz Gromada - All rights reserved
# PUBLISHER: INFIMA - https://payhip.com/infima
#
# SOFTWARE means source code and/or binary form and/or documentation.
# PRODUCT: MathParser.org-mXparser SOFTWARE
# LICENSE: DUAL LICENSE AGREEMENT
#
# BY INSTALLING, COPYING, OR OTHERWISE USING THE PRODUCT, YOU AGREE TO BE
# BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
#
# The AUTHOR & PUBLISHER provide the PRODUCT under the DUAL LICENSE AGREEMENT
# model designed to meet the needs of both non-commercial use and commercial
# use.
#
# NON-COMMERCIAL USE means any use or activity where a fee is not charged
# and the purpose is not the sale of a good or service, and the use or
# activity is not intended to produce a profit. Examples of NON-COMMERCIAL USE
# include:
#
# 1. Non-commercial open-source software.
# 2. Non-commercial mobile applications.
# 3. Non-commercial desktop software.
# 4. Non-commercial web applications/solutions.
# 5. Non-commercial use in research, scholarly and educational context.
#
# The above list is non-exhaustive and illustrative only.
#
# COMMERCIAL USE means any use or activity where a fee is charged or the
# purpose is the sale of a good or service, or the use or activity is
# intended to produce a profit. COMMERCIAL USE examples:
#
# 1. OEMs (Original Equipment Manufacturers).
# 2. ISVs (Independent Software Vendors).
# 3. VARs (Value Added Resellers).
# 4. Other distributors that combine and distribute commercially licensed
#    software.
#
# The above list is non-exhaustive and illustrative only.
#
# IN CASE YOU WANT TO USE THE PRODUCT COMMERCIALLY, YOU MUST PURCHASE THE
# APPROPRIATE LICENSE FROM "INFIMA" ONLINE STORE, STORE ADDRESS:
#
# 1. https://mathparser.org/order-commercial-license
# 2. https://payhip.com/infima
#
# NON-COMMERCIAL LICENSE
#
# Redistribution and use of the PRODUCT in source and/or binary forms,
# with or without modification, are permitted provided that the following
# conditions are met:
#
# 1. Redistributions of source code must retain the unmodified content of
#    the entire MathParser.org-mXparser DUAL LICENSE AGREEMENT, including
#    the definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE,
#    the NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,
#    and the following DISCLAIMER.
# 2. Redistributions in binary form must reproduce the entire content of
#    MathParser.org-mXparser DUAL LICENSE AGREEMENT in the documentation
#    and/or other materials provided with the distribution, including the
#    definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE, the
#    NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,
#    and the following DISCLAIMER.
# 3. Any form of redistribution requires confirmation and signature of
#    the NON-COMMERCIAL USE by successfully calling the method:
#       License.iConfirmNonCommercialUse(...)
#    The method call is used only internally for logging purposes, and
#    there is no connection with other external services, and no data is
#    sent or collected. The lack of a method call (or its successful call)
#    does not affect the operation of the PRODUCT in any way. Please see
#    the API documentation.
#
# COMMERCIAL LICENSE
#
#  1. Before purchasing a commercial license, the AUTHOR & PUBLISHER allow
#     you to download, install, and use up to three copies of the PRODUCT to
#     perform integration tests, confirm the quality of the PRODUCT, and
#     its suitability. The testing period should be limited to fourteen
#     days. Tests should be performed under the test environments conditions
#     and not for profit generation.
#  2. Provided that you purchased a license from "INFIMA" online store
#     (store address: https://mathparser.org/order-commercial-license or
#     https://payhip.com/infima), and you comply with all terms and
#     conditions below, and you have acknowledged and understood the
#     following DISCLAIMER, the AUTHOR & PUBLISHER grant you a nonexclusive
#     license with the following rights:
#  3. The license is granted only to you, the person or entity that made
#     the purchase, identified and confirmed by the data provided during
#     the purchase.
#  4. If you purchased a license in the "ONE-TIME PURCHASE" model, the
#     license is granted only for the PRODUCT version specified in the
#     purchase. The upgrade policy gives you additional rights, described
#     in the dedicated section below.
#  5. If you purchased a license in the "SUBSCRIPTION" model, you may
#     install and use any version of the PRODUCT during the subscription
#     validity period.
#  6. If you purchased a "SINGLE LICENSE" you may install and use the
#     PRODUCT on/from one workstation that is located/accessible at/from
#     any of your premises.
#  7. Additional copies of the PRODUCT may be installed and used on/from
#     more than one workstation, limited to the number of workstations
#     purchased per order.
#  8. If you purchased a "SITE LICENSE", the PRODUCT may be installed
#     and used on/from all workstations located/accessible at/from any
#     of your premises.
#  9. You may incorporate the unmodified PRODUCT into your own products
#     and software.
# 10. If you purchased a license with the "SOURCE CODE" option, you may
#     modify the PRODUCT's source code and incorporate the modified source
#     code into your own products and/or software.
# 11. Provided that the license validity period has not expired, you may
#     distribute your product and/or software with the incorporated
#     PRODUCT royalty-free.
# 12. You may make copies of the PRODUCT for backup and archival purposes.
# 13. Any form of redistribution requires confirmation and signature of
#     the COMMERCIAL USE by successfully calling the method:
#        License.iConfirmCommercialUse(...)
#     The method call is used only internally for logging purposes, and
#     there is no connection with other external services, and no data is
#     sent or collected. The lack of a method call (or its successful call)
#     does not affect the operation of the PRODUCT in any way. Please see
#     the API documentation.
# 14. The AUTHOR & PUBLISHER reserve all rights not expressly granted to
#     you in this agreement.
#
# ADDITIONAL CLARIFICATION ON WORKSTATION
#
# A workstation is a device, a remote device, or a virtual device, used by
# you, your employees, or other entities to whom you have commissioned
# tasks. For example, the number of workstations may refer to the number
# of software developers, engineers, architects, scientists, and other
# professionals who use the PRODUCT on your behalf. The number of
# workstations is not the number of copies of your end-product that you
# distribute to your end-users.
#
# By purchasing the COMMERCIAL LICENSE, you only pay for the number of
# workstations, while the number of copies/users of your final product
# (delivered to your end-users) is not limited.
#
# Below are some examples to help you select the right license size:
#
# Example 1: Single Workstation License
# Only one developer works on the development of your application. You do
# not use separate environments for testing, meaning you design, create,
# test, and compile your final application on one environment. In this
# case, you need a license for a single workstation.
#
# Example 2: Up to 5 Workstations License
# Two developers are working on the development of your application.
# Additionally, one tester conducts tests in a separate environment.
# You use three workstations in total, so you need a license for up to
# five workstations.
#
# Example 3: Up to 20 Workstations License
# Ten developers are working on the development of your application.
# Additionally, five testers conduct tests in separate environments.
# You use fifteen workstations in total, so you need a license for
# up to twenty workstations.
#
# Example 4: Site License
# Several dozen developers and testers work on the development of your
# application using multiple environments. You have a large,
# multi-disciplinary team involved in creating your solution. As your team
# is growing and you want to avoid licensing limitations, the best choice
# would be a site license.
#
# UPGRADE POLICY
#
# The PRODUCT is versioned according to the following convention:
#
#    [MAJOR].[MINOR].[PATCH]
#
# 1. COMMERCIAL LICENSE holders can install and use the updated version
#    for bug fixes free of charge, i.e. if you have purchased a license
#    for the [MAJOR].[MINOR] version (e.g., 5.0), you can freely install
#    all releases specified in the [PATCH] version (e.g., 5.0.2).
#    The license terms remain unchanged after the update.
# 2. COMMERCIAL LICENSE holders for the [MAJOR].[MINOR] version (e.g., 5.0)
#    can install and use the updated version [MAJOR].[MINOR + 1] free of
#    charge, i.e., plus one release in the [MINOR] range (e.g., 5.1). The
#    license terms remain unchanged after the update.
# 3. COMMERCIAL LICENSE holders who wish to upgrade their version, but are
#    not eligible for the free upgrade, can claim a discount when
#    purchasing the upgrade. For this purpose, please contact us via e-mail.
#
# DISCLAIMER
#
# THIS PRODUCT IS PROVIDED BY THE AUTHOR & PUBLISHER "AS IS" AND ANY EXPRESS
# OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL AUTHOR OR PUBLISHER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS PRODUCT, EVEN IF ADVISED OF
# THE POSSIBILITY OF SUCH DAMAGE.
#
# THE VIEWS AND CONCLUSIONS CONTAINED IN THE PRODUCT AND DOCUMENTATION ARE
# THOSE OF THE AUTHORS AND SHOULD NOT BE INTERPRETED AS REPRESENTING
# OFFICIAL POLICIES, EITHER EXPRESSED OR IMPLIED, OF THE AUTHOR OR PUBLISHER.
#
# CONTACT
#
# - e-mail: info@mathparser.org
# - website: https://mathparser.org
# - source code: https://github.com/mariuszgromada/MathParser.org-mXparser
# - online store: https://mathparser.org/order-commercial-license
# - online store: https://payhip.com/infima
#*/

cmake_minimum_required(VERSION 3.22)
project(MathParserOrgMxParserJavaScript LANGUAGES CXX)

if (NOT EMSCRIPTEN)
    message(FATAL_ERROR "Configure with Emscripten (see scripts/build.py)")
endif ()
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_compile_options(-fwasm-exceptions)
option(MXPARSER_ADDRESS_SANITIZER "Instrument the engine and binding with ASan" OFF)
if (MXPARSER_ADDRESS_SANITIZER)
    add_compile_options(-fsanitize=address -g)
    add_link_options(-fsanitize=address -g2 -sASSERTIONS=2 -sINITIAL_MEMORY=268435456)
endif ()

# One engine: derive its version and compilation units from the native build.
set(MXP_CPP "${CMAKE_CURRENT_LIST_DIR}/../cpp")
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${MXP_CPP}/lib/CMakeLists.txt")
file(READ "${MXP_CPP}/lib/CMakeLists.txt" native_library_cmake)
string(REGEX MATCH "project\\(MathParserOrgMxParser VERSION ([0-9]+)\\.([0-9]+)\\.([0-9]+)" version_match "${native_library_cmake}")
if (NOT version_match)
    message(FATAL_ERROR "Cannot identify the native engine version")
endif ()
set(PROJECT_VERSION_MAJOR "${CMAKE_MATCH_1}")
set(PROJECT_VERSION_MINOR "${CMAKE_MATCH_2}")
set(PROJECT_VERSION_PATCH "${CMAKE_MATCH_3}")
set(PROJECT_VERSION "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")
string(REGEX MATCHALL "org/[A-Za-z0-9_/]+\\.cpp" native_sources "${native_library_cmake}")
list(REMOVE_DUPLICATES native_sources)
if (NOT native_sources)
    message(FATAL_ERROR "Native engine source inventory is empty")
endif ()
list(TRANSFORM native_sources PREPEND "${MXP_CPP}/lib/")

include(FetchContent)
set(JUST_INSTALL_CEREAL ON CACHE BOOL "Header-only cereal" FORCE)
set(BUILD_SANDBOX OFF CACHE BOOL "No cereal examples" FORCE)
set(BUILD_DOC OFF CACHE BOOL "No cereal documentation" FORCE)
set(BUILD_TESTS OFF CACHE BOOL "No cereal tests" FORCE)
set(SKIP_PERFORMANCE_COMPARISON ON CACHE BOOL "No cereal benchmark" FORCE)
FetchContent_Declare(cereal
        GIT_REPOSITORY https://github.com/USCiLab/cereal.git
        GIT_TAG v1.3.2)
FetchContent_MakeAvailable(cereal)

add_library(mxparser_wasm_engine STATIC ${native_sources})
target_include_directories(mxparser_wasm_engine PUBLIC "${MXP_CPP}/lib")
target_link_libraries(mxparser_wasm_engine PUBLIC cereal::cereal)
target_compile_definitions(mxparser_wasm_engine PUBLIC
        MXPARSER_BUILD_PROJECT_VERSION_MAJOR=${PROJECT_VERSION_MAJOR}
        MXPARSER_BUILD_PROJECT_VERSION_MINOR=${PROJECT_VERSION_MINOR}
        MXPARSER_BUILD_PROJECT_VERSION_PATCH=${PROJECT_VERSION_PATCH})
foreach (property IN ITEMS
        CMAKE_HOST_SYSTEM_NAME CMAKE_SYSTEM_NAME CMAKE_SYSTEM_VERSION
        CMAKE_SYSTEM_PROCESSOR CMAKE_CXX_COMPILER_ID CMAKE_ENV_SPECIFIC_CONFIG
        CMAKE_CXX_COMPILER_VERSION CMAKE_CXX_COMPILER CMAKE_CXX_COMPILER_FRONTEND_VARIANT
        CMAKE_CXX_COMPILER_LINKER_FRONTEND_VARIANT CMAKE_CXX_COMPILER_LINKER_ID
        CMAKE_CXX_COMPILER_LINKER_VERSION CMAKE_CXX_COMPILER_LINKER CMAKE_MSVC
        CMAKE_BUILD_TYPE CMAKE_GENERATOR CMAKE_VERSION CMAKE_MAKE_PROGRAM
        PROJECT_VERSION CMAKE_SIZEOF_VOID_P CMAKE_CXX_FLAGS_RELEASE)
    string(REPLACE "\\" "/" value "${${property}}")
    target_compile_definitions(mxparser_wasm_engine PUBLIC "MXPARSER_BUILD_${property}=\"${value}\"")
endforeach ()

# Only the reviewed Java/C# public binding; no diagnostic translation units.
add_executable(mxparser_js src/bindings/bindings.cpp src/Console.cpp)
target_include_directories(mxparser_js PRIVATE "${CMAKE_CURRENT_LIST_DIR}/src/bindings")
target_link_libraries(mxparser_js PRIVATE mxparser_wasm_engine)
target_compile_options(mxparser_js PRIVATE -O2)
set(mxp_runtime_methods "'getExceptionMessage','decrementExceptionRefcount','stackSave','stackRestore','FS'")
if (MXPARSER_ADDRESS_SANITIZER)
    # The ASan test counts SDK handles; this is absent from the release module.
    string(APPEND mxp_runtime_methods ",'count_emval_handles'")
endif ()
target_link_options(mxparser_js PRIVATE
        -O2 -fwasm-exceptions --bind --no-entry
        -Wl,--wrap=wprintf -Wl,--wrap=fwprintf
        -sMODULARIZE=1 -sEXPORT_ES6=1 -sENVIRONMENT=web,node
        -sALLOW_MEMORY_GROWTH=1 -sSTACK_SIZE=8388608
        -sEXCEPTION_STACK_TRACES=1 -sPRINTF_LONG_DOUBLE=1
        "-sEXPORTED_RUNTIME_METHODS=[${mxp_runtime_methods}]")
if (MXPARSER_ADDRESS_SANITIZER)
    # --no-entry has no main/exit hook: the test loader explicitly checks leaks.
    target_link_options(mxparser_js PRIVATE "-sEXPORTED_FUNCTIONS=['___lsan_do_recoverable_leak_check']")
endif ()
set_target_properties(mxparser_js PROPERTIES OUTPUT_NAME "mxparser-native" SUFFIX ".mjs")
