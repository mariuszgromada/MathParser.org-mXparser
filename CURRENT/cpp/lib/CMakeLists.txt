#/*
# @(#)CMakeLists.txt        6.1.0    2024-10-06
#
# MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2024-05-19
# The most up-to-date license is available at the below link:
# - https://mathparser.org/mxparser-license
#
# AUTHOR: Copyright 2010 - 2024 Mariusz Gromada - All rights reserved
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
project(MathParserOrgMxParser VERSION 6.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)

# =========================================
# Add Cereal ===
set(SKIP_PERFORMANCE_COMPARISON ON)
include(FetchContent)
FetchContent_Declare(
	cereal
	GIT_REPOSITORY https://github.com/USCiLab/cereal.git
	GIT_TAG v1.3.2
)
FetchContent_MakeAvailable(cereal)
# === Add Cereal
# =========================================

message(STATUS "==============================================================")
message(STATUS "MSVC: ${MSVC}")
message(STATUS "CMAKE_CXX_COMPILER_ID: ${CMAKE_CXX_COMPILER_ID}")
message(STATUS "CMAKE_CXX_COMPILER: ${CMAKE_CXX_COMPILER}")
message(STATUS "CMAKE_CXX_COMPILER_VERSION: ${CMAKE_CXX_COMPILER_VERSION}")
message(STATUS "CMAKE_SYSTEM_NAME: ${CMAKE_SYSTEM_NAME}")
message(STATUS "CMAKE_SYSTEM_VERSION: ${CMAKE_SYSTEM_VERSION}")
message(STATUS "CMAKE_HOST_SYSTEM_NAME: ${CMAKE_HOST_SYSTEM_NAME}")
message(STATUS "CMAKE_SYSTEM_PROCESSOR: ${CMAKE_SYSTEM_PROCESSOR}")
message(STATUS "CMAKE_SIZEOF_VOID_P: ${CMAKE_SIZEOF_VOID_P}")
message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")
message(STATUS "CMAKE_MAKE_PROGRAM: ${CMAKE_MAKE_PROGRAM}")
message(STATUS "CMAKE_COMMAND: ${CMAKE_COMMAND}")
message(STATUS "CMAKE_GENERATOR: ${CMAKE_GENERATOR}")
message(STATUS "CMAKE_GENERATOR_PLATFORM: ${CMAKE_GENERATOR_PLATFORM}")
message(STATUS "CMAKE_GENERATOR_INSTANCE: ${CMAKE_GENERATOR_INSTANCE}")
message(STATUS "CMAKE_CXX_COMPILER_FRONTEND_VARIANT: ${CMAKE_CXX_COMPILER_FRONTEND_VARIANT}")
message(STATUS "CMAKE_CXX_COMPILER_LINKER: ${CMAKE_CXX_COMPILER_LINKER}")
message(STATUS "CMAKE_CXX_COMPILER_AR: ${CMAKE_CXX_COMPILER_AR}")
message(STATUS "CMAKE_CXX_COMPILER_LINKER: ${CMAKE_CXX_COMPILER_LINKER}")
message(STATUS "CMAKE_CXX_COMPILER_LINKER_FRONTEND_VARIANT: ${CMAKE_CXX_COMPILER_LINKER_FRONTEND_VARIANT}")
message(STATUS "CMAKE_CXX_COMPILER_LINKER_ID: ${CMAKE_CXX_COMPILER_LINKER_ID}")
message(STATUS "CMAKE_CXX_COMPILER_LINKER_VERSION: ${CMAKE_CXX_COMPILER_LINKER_VERSION}")
message(STATUS "CMAKE_CXX_COMPILER_RANLIB: ${CMAKE_CXX_COMPILER_RANLIB}")
message(STATUS "CMAKE_CXX_LINK_LIBRARY_SUFFIX: ${CMAKE_CXX_LINK_LIBRARY_SUFFIX}")
message(STATUS "CMAKE_MAJOR_VERSION: ${CMAKE_MAJOR_VERSION}")
message(STATUS "CMAKE_MINOR_VERSION: ${CMAKE_MINOR_VERSION}")
message(STATUS "CMAKE_PATCH_VERSION: ${CMAKE_PATCH_VERSION}")
message(STATUS "CMAKE_MAKE_PROGRAM: ${CMAKE_MAKE_PROGRAM}")
message(STATUS "PROJECT_VERSION: ${PROJECT_VERSION}")
message(STATUS "PROJECT_VERSION_MAJOR: ${PROJECT_VERSION_MAJOR}")
message(STATUS "PROJECT_VERSION_MINOR: ${PROJECT_VERSION_MINOR}")
message(STATUS "PROJECT_VERSION_PATCH: ${PROJECT_VERSION_PATCH}")
message(STATUS "CMAKE_TOOLCHAIN_FILE: ${CMAKE_TOOLCHAIN_FILE}")
message(STATUS "CMAKE_VS_PLATFORM_NAME: ${CMAKE_VS_PLATFORM_NAME}")
message(STATUS "CMAKE_BINARY_DIR: ${CMAKE_BINARY_DIR}")
message(STATUS "CMAKE_MODULE_PATH: ${CMAKE_MODULE_PATH}")
message(STATUS "==============================================================")

# =========================================
# Recognizing compiler/variants
set(COMP_CLANG OFF)
set(COMP_CLANG_CL OFF)
set(ENV_SPECIFIC_CONFIG_1 "")
set(ENV_SPECIFIC_CONFIG_2 "")
set(ENV_SPECIFIC_CONFIG_3 "")
set(ENV_SPECIFIC_CONFIG_4 "")
set(CMAKE_MSVC "No")

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	if (MSVC)
		message(STATUS "Compiler: Clang-cl")
		set(ENV_SPECIFIC_CONFIG_1 "Clang-cl")
		set(COMP_CLANG_CL ON)
	else()
		message(STATUS "Compiler: Clang")
		set(COMP_CLANG ON)
	endif()
endif()

if (MSVC)
	set(CMAKE_MSVC "Yes")
endif()

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
	message(STATUS "Compiler: MSVC")
	set(COMP_CL ON)
else()
	set(COMP_CL OFF)
endif()

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU")
	message(STATUS "Compiler: GCC")
	set(COMP_GCC ON)
else()
	set(COMP_GCC OFF)
endif()

if (CMAKE_CXX_COMPILER MATCHES "msys|MSYS")
	message(STATUS "Compiler inside the MSYS environment.")
	set(ENV_SPECIFIC_CONFIG_2 "MSYS")
	set(ENV_MSYS ON)
else()
	set(ENV_MSYS OFF)
endif()

if (CMAKE_SYSTEM_VERSION MATCHES "WSL|wsl")
	message(STATUS "Compiler inside the WSL environment.")
	set(ENV_SPECIFIC_CONFIG_3 "WSL")
	set(ENV_WSL ON)
else()
	set(ENV_WSL OFF)
endif()

if (CMAKE_CXX_COMPILER MATCHES "mingw|MINGW|MinGW")
	message(STATUS "Compiler inside the MinGW environment.")
	set(ENV_SPECIFIC_CONFIG_4 "MinGW")
	set(ENV_MINGW ON)
else()
	set(ENV_MINGW OFF)
endif()

if (NOT COMP_CLANG_CL AND NOT COMP_CLANG AND NOT COMP_CL AND NOT COMP_GCC)
	message(STATUS "Compiler: Unrecognized")
	set(COMP_OTHER ON)
else ()
	set(COMP_OTHER OFF)
endif()

# =========================================
# Recognizing CPU architecture

if (CMAKE_SYSTEM_PROCESSOR MATCHES "x86|X86|AMD|amd|i[3-6]86|I[3-6]86")
	message(STATUS "CPU Architecture: x86")
	set(ARCH_X86 ON)
else()
	set(ARCH_X86 OFF)
endif()

if (CMAKE_SYSTEM_PROCESSOR MATCHES "arm|ARM|aarch|AARCH")
	message(STATUS "CPU Architecture: ARM")
	set(ARCH_ARM ON)
else()
	set(ARCH_ARM OFF)
endif()

if (CMAKE_SYSTEM_PROCESSOR MATCHES "64")
	message(STATUS "CPU Architecture: 64 bit")
	set(ARCH_64_BIT ON)
else()
	set(ARCH_64_BIT OFF)
endif()

if (CMAKE_SIZEOF_VOID_P EQUAL 8)
	message(STATUS "Target Architecture: 64 bit")
	set(ARCH_64_BIT_TARGET ON)
else()
	set(ARCH_64_BIT_TARGET OFF)
endif()

if (CMAKE_SIZEOF_VOID_P EQUAL 4)
	message(STATUS "Target Architecture: 32 bit")
	set(ARCH_32_BIT_TARGET ON)
else()
	set(ARCH_32_BIT_TARGET OFF)
endif()

# =========================================
# Recognizing OS

if (CMAKE_SYSTEM_NAME MATCHES "Windows")
	message(STATUS "Target OS: Windows")
	set(TARGET_WINDOWS ON)
else()
	set(TARGET_WINDOWS OFF)
endif()

if (CMAKE_SYSTEM_NAME MATCHES "Linux")
	message(STATUS "Target OS: Linux")
	set(TARGET_LINUX ON)
else()
	set(TARGET_LINUX OFF)
endif()

if (CMAKE_SYSTEM_NAME MATCHES "Android")
	message(STATUS "Target OS: Android")
	set(TARGET_ANDROID ON)
else()
	set(TARGET_ANDROID OFF)
endif()

if (CMAKE_SYSTEM_NAME MATCHES "Darwin")
	message(STATUS "Target OS: macOS")
	set(TARGET_MACOS ON)
else()
	set(TARGET_MACOS OFF)
endif()

if (CMAKE_SYSTEM_NAME MATCHES "iOS")
	message(STATUS "Target OS: iOS")
	set(TARGET_IOS ON)
else()
	set(TARGET_IOS OFF)
endif()

if (CMAKE_HOST_SYSTEM_NAME MATCHES "Windows")
	message(STATUS "Host OS: Windows")
	set(HOST_WINDOWS ON)
else()
	set(HOST_WINDOWS OFF)
endif()

if (CMAKE_HOST_SYSTEM_NAME MATCHES "Linux")
	message(STATUS "Host OS: Linux")
	set(HOST_LINUX ON)
else()
	set(HOST_LINUX OFF)
endif()

if (CMAKE_HOST_SYSTEM_NAME MATCHES "Android")
	message(STATUS "Host OS: Android")
	set(HOST_ANDROID ON)
else()
	set(HOST_ANDROID OFF)
endif()

if (CMAKE_HOST_SYSTEM_NAME MATCHES "Darwin")
	message(STATUS "Host OS: macOS")
	set(HOST_MACOS ON)
else()
	set(HOST_MACOS OFF)
endif()

if (CMAKE_HOST_SYSTEM_NAME MATCHES "iOS")
	message(STATUS "Host OS: iOS")
	set(HOST_IOS ON)
else()
	set(HOST_IOS OFF)
endif()

message(STATUS "COMP_CLANG: ${COMP_CLANG}")
message(STATUS "COMP_GCC: ${COMP_GCC}")
message(STATUS "COMP_CL: ${COMP_CL}")
message(STATUS "COMP_CLANG_CL: ${COMP_CLANG_CL}")
message(STATUS "COMP_OTHER: ${COMP_OTHER}")
message(STATUS "ENV_MSYS: ${ENV_MSYS}")
message(STATUS "ENV_WSL: ${ENV_WSL}")
message(STATUS "ENV_MINGW: ${ENV_MINWG}")
message(STATUS "ARCH_64_BIT: ${ARCH_64_BIT}")
message(STATUS "ARCH_32_BIT: ${ARCH_32_BIT}")
message(STATUS "ARCH_X86: ${ARCH_X86}")
message(STATUS "ARCH_ARM: ${ARCH_ARM}")
message(STATUS "TARGET_WINDOWS: ${TARGET_WINDOWS}")
message(STATUS "TARGET_LINUX: ${TARGET_LINUX}")
message(STATUS "TARGET_ANDROID: ${TARGET_ANDROID}")
message(STATUS "TARGET_MACOS: ${TARGET_MACOS}")
message(STATUS "TARGET_IOS: ${TARGET_IOS}")


# Source encoding UTF-8
if (COMP_CL OR COMP_CLANG_CL)
	add_compile_options(/utf-8)
endif()

if (COMP_GCC OR COMP_CLANG)
	add_compile_options(-finput-charset=UTF-8)
endif()

# Exceptions handling in case of MSVC
if (COMP_CL OR COMP_CLANG_CL)
	add_compile_options(/EHsc)
endif()

# Long double
if (COMP_CLANG OR COMP_GCC)
	if (NOT ARCH_ARM)
		add_compile_options(-mlong-double-80)
	endif()
endif()

# Silence note: parameter passing for argument of type std::initializer_list changed in GCC 7.1
if (COMP_GCC)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-psabi")
endif()


# =========================================

if (NOT TARGET MathParserOrgMxParser)
add_library(MathParserOrgMxParser SHARED
		org/mariuszgromada/math/mxparser.hpp
		org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp
		org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp
		org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp
		org/mariuszgromada/math/mxparser/Argument.cpp
		org/mariuszgromada/math/mxparser/Argument.hpp
		org/mariuszgromada/math/mxparser/ArgumentExtension.hpp
		org/mariuszgromada/math/mxparser/CalcStepRecord.cpp
		org/mariuszgromada/math/mxparser/CalcStepRecord.hpp
		org/mariuszgromada/math/mxparser/CalcStepsRegister.cpp
		org/mariuszgromada/math/mxparser/CalcStepsRegister.hpp
		org/mariuszgromada/math/mxparser/CloneCache.cpp
		org/mariuszgromada/math/mxparser/CloneCache.hpp
		org/mariuszgromada/math/mxparser/Constant.cpp
		org/mariuszgromada/math/mxparser/Constant.hpp
		org/mariuszgromada/math/mxparser/Expression.hpp
		org/mariuszgromada/math/mxparser/ExpressionA.cpp
		org/mariuszgromada/math/mxparser/ExpressionB.cpp
		org/mariuszgromada/math/mxparser/ExpressionUtils.cpp
		org/mariuszgromada/math/mxparser/ExpressionUtils.hpp
		org/mariuszgromada/math/mxparser/Function.cpp
		org/mariuszgromada/math/mxparser/Function.hpp
		org/mariuszgromada/math/mxparser/FunctionExtension.hpp
		org/mariuszgromada/math/mxparser/FunctionExtensionVariadic.hpp
		org/mariuszgromada/math/mxparser/License.cpp
		org/mariuszgromada/math/mxparser/License.hpp
		org/mariuszgromada/math/mxparser/macro/MacroBuild.hpp
		org/mariuszgromada/math/mxparser/macro/MacroCast.hpp
		org/mariuszgromada/math/mxparser/macro/MacroFriends.hpp
		org/mariuszgromada/math/mxparser/macro/MacroMemory.hpp
		org/mariuszgromada/math/mxparser/macro/MacroSerialization.hpp
		org/mariuszgromada/math/mxparser/macro/MacroStaticVarsInit.hpp
		org/mariuszgromada/math/mxparser/macro/MacroString.hpp
		org/mariuszgromada/math/mxparser/macro/MacroString.hpp
		org/mariuszgromada/math/mxparser/macro/MacroVarArgs.hpp
		org/mariuszgromada/math/mxparser/mathcollection/AstronomicalConstants.hpp
		org/mariuszgromada/math/mxparser/mathcollection/BinaryRelations.cpp
		org/mariuszgromada/math/mxparser/mathcollection/BinaryRelations.hpp
		org/mariuszgromada/math/mxparser/mathcollection/BooleanAlgebra.cpp
		org/mariuszgromada/math/mxparser/mathcollection/BooleanAlgebra.hpp
		org/mariuszgromada/math/mxparser/mathcollection/Calculus.cpp
		org/mariuszgromada/math/mxparser/mathcollection/Calculus.hpp
		org/mariuszgromada/math/mxparser/mathcollection/Coefficients.cpp
		org/mariuszgromada/math/mxparser/mathcollection/Coefficients.hpp
		org/mariuszgromada/math/mxparser/mathcollection/Evaluate.cpp
		org/mariuszgromada/math/mxparser/mathcollection/Evaluate.hpp
		org/mariuszgromada/math/mxparser/mathcollection/IRandom.hpp
		org/mariuszgromada/math/mxparser/mathcollection/MathConstants.cpp
		org/mariuszgromada/math/mxparser/mathcollection/MathConstants.hpp
		org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.cpp
		org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.hpp
		org/mariuszgromada/math/mxparser/mathcollection/NumberTheory.cpp
		org/mariuszgromada/math/mxparser/mathcollection/NumberTheory.hpp
		org/mariuszgromada/math/mxparser/mathcollection/PhysicalConstants.hpp
		org/mariuszgromada/math/mxparser/mathcollection/PrimesCache.cpp
		org/mariuszgromada/math/mxparser/mathcollection/PrimesCache.hpp
		org/mariuszgromada/math/mxparser/mathcollection/ProbabilityDistributions.cpp
		org/mariuszgromada/math/mxparser/mathcollection/ProbabilityDistributions.hpp
		org/mariuszgromada/math/mxparser/mathcollection/SpecialFunctions.cpp
		org/mariuszgromada/math/mxparser/mathcollection/SpecialFunctions.hpp
		org/mariuszgromada/math/mxparser/mathcollection/SpecialValue.cpp
		org/mariuszgromada/math/mxparser/mathcollection/SpecialValue.hpp
		org/mariuszgromada/math/mxparser/mathcollection/SpecialValueTrigonometric.cpp
		org/mariuszgromada/math/mxparser/mathcollection/SpecialValueTrigonometric.hpp
		org/mariuszgromada/math/mxparser/mathcollection/Statistics.cpp
		org/mariuszgromada/math/mxparser/mathcollection/Statistics.hpp
		org/mariuszgromada/math/mxparser/mathcollection/Units.cpp
		org/mariuszgromada/math/mxparser/mathcollection/Units.hpp
		org/mariuszgromada/math/mxparser/Miscellaneous.cpp
		org/mariuszgromada/math/mxparser/Miscellaneous.hpp
		org/mariuszgromada/math/mxparser/mXparser.cpp
		org/mariuszgromada/math/mxparser/mXparser.hpp
		org/mariuszgromada/math/mxparser/parsertokens/BinaryRelation.cpp
		org/mariuszgromada/math/mxparser/parsertokens/BinaryRelation.hpp
		org/mariuszgromada/math/mxparser/parsertokens/BitwiseOperator.cpp
		org/mariuszgromada/math/mxparser/parsertokens/BitwiseOperator.hpp
		org/mariuszgromada/math/mxparser/parsertokens/BooleanOperator.cpp
		org/mariuszgromada/math/mxparser/parsertokens/BooleanOperator.hpp
		org/mariuszgromada/math/mxparser/parsertokens/CalculusOperator.cpp
		org/mariuszgromada/math/mxparser/parsertokens/CalculusOperator.hpp
		org/mariuszgromada/math/mxparser/parsertokens/ConstantValue.cpp
		org/mariuszgromada/math/mxparser/parsertokens/ConstantValue.hpp
		org/mariuszgromada/math/mxparser/parsertokens/Function1Arg.cpp
		org/mariuszgromada/math/mxparser/parsertokens/Function1Arg.hpp
		org/mariuszgromada/math/mxparser/parsertokens/Function2Arg.cpp
		org/mariuszgromada/math/mxparser/parsertokens/Function2Arg.hpp
		org/mariuszgromada/math/mxparser/parsertokens/Function3Arg.cpp
		org/mariuszgromada/math/mxparser/parsertokens/Function3Arg.hpp
		org/mariuszgromada/math/mxparser/parsertokens/FunctionVariadic.cpp
		org/mariuszgromada/math/mxparser/parsertokens/FunctionVariadic.hpp
		org/mariuszgromada/math/mxparser/parsertokens/KeyWord.cpp
		org/mariuszgromada/math/mxparser/parsertokens/KeyWord.hpp
		org/mariuszgromada/math/mxparser/parsertokens/Operator.cpp
		org/mariuszgromada/math/mxparser/parsertokens/Operator.hpp
		org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.cpp
		org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp
		org/mariuszgromada/math/mxparser/parsertokens/RandomVariable.cpp
		org/mariuszgromada/math/mxparser/parsertokens/RandomVariable.hpp
		org/mariuszgromada/math/mxparser/parsertokens/SyntaxStringBuilder.cpp
		org/mariuszgromada/math/mxparser/parsertokens/SyntaxStringBuilder.hpp
		org/mariuszgromada/math/mxparser/parsertokens/Token.cpp
		org/mariuszgromada/math/mxparser/parsertokens/Token.hpp
		org/mariuszgromada/math/mxparser/parsertokens/Unit.cpp
		org/mariuszgromada/math/mxparser/parsertokens/Unit.hpp
		org/mariuszgromada/math/mxparser/PrimitiveElement.cpp
		org/mariuszgromada/math/mxparser/PrimitiveElement.hpp
		org/mariuszgromada/math/mxparser/RecursiveArgument.cpp
		org/mariuszgromada/math/mxparser/RecursiveArgument.hpp
		org/mariuszgromada/math/mxparser/SerializationUtils.cpp
		org/mariuszgromada/math/mxparser/SerializationUtils.hpp
		org/mariuszgromada/math/mxparser/StringInvariant.cpp
		org/mariuszgromada/math/mxparser/StringInvariant.hpp
		org/mariuszgromada/math/mxparser/StringModel.cpp
		org/mariuszgromada/math/mxparser/StringModel.hpp
		org/mariuszgromada/math/mxparser/StringResources.cpp
		org/mariuszgromada/math/mxparser/StringResources.hpp
		org/mariuszgromada/math/mxparser/StringResourcesFrench.cpp
		org/mariuszgromada/math/mxparser/StringResourcesFrench.hpp
		org/mariuszgromada/math/mxparser/StringResourcesGerman.cpp
		org/mariuszgromada/math/mxparser/StringResourcesGerman.hpp
		org/mariuszgromada/math/mxparser/StringResourcesItalian.cpp
		org/mariuszgromada/math/mxparser/StringResourcesItalian.hpp
		org/mariuszgromada/math/mxparser/StringResourcesPolish.cpp
		org/mariuszgromada/math/mxparser/StringResourcesPolish.hpp
		org/mariuszgromada/math/mxparser/StringResourcesPortuguese.cpp
		org/mariuszgromada/math/mxparser/StringResourcesPortuguese.hpp
		org/mariuszgromada/math/mxparser/StringResourcesSpanish.cpp
		org/mariuszgromada/math/mxparser/StringResourcesSpanish.hpp
		org/mariuszgromada/math/mxparser/StringUtils.cpp
		org/mariuszgromada/math/mxparser/StringUtils.hpp
		org/mariuszgromada/math/mxparser/syntaxchecker/CharStream.cpp
		org/mariuszgromada/math/mxparser/syntaxchecker/CharStream.hpp
		org/mariuszgromada/math/mxparser/syntaxchecker/ErrorHandler.cpp
		org/mariuszgromada/math/mxparser/syntaxchecker/ErrorHandler.hpp
		org/mariuszgromada/math/mxparser/syntaxchecker/ErrorMessage.cpp
		org/mariuszgromada/math/mxparser/syntaxchecker/ErrorMessage.hpp
		org/mariuszgromada/math/mxparser/syntaxchecker/JavaCC.hpp
		org/mariuszgromada/math/mxparser/syntaxchecker/JavaCCToken.cpp
		org/mariuszgromada/math/mxparser/syntaxchecker/JavaCCToken.hpp
		org/mariuszgromada/math/mxparser/syntaxchecker/ParseException.cpp
		org/mariuszgromada/math/mxparser/syntaxchecker/ParseException.hpp
		org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxChecker.cpp
		org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxChecker.hpp
		org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxCheckerConstants.hpp
		org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxCheckerTokenManager.cpp
		org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxCheckerTokenManager.hpp
		org/mariuszgromada/math/mxparser/syntaxchecker/TokenManager.hpp
		org/mariuszgromada/math/mxparser/syntaxchecker/TokenMgrError.cpp
		org/mariuszgromada/math/mxparser/syntaxchecker/TokenMgrError.hpp
		org/mariuszgromada/math/mxparser/Tutorial.cpp
		org/mariuszgromada/math/mxparser/Tutorial.hpp
		org/mariuszgromada/math/mxparser/wrapper/Array.hpp
		org/mariuszgromada/math/mxparser/wrapper/BigDecimal.cpp
		org/mariuszgromada/math/mxparser/wrapper/BigDecimal.hpp
		org/mariuszgromada/math/mxparser/wrapper/Double.cpp
		org/mariuszgromada/math/mxparser/wrapper/Double.hpp
		org/mariuszgromada/math/mxparser/wrapper/Integer.cpp
		org/mariuszgromada/math/mxparser/wrapper/Integer.hpp
		org/mariuszgromada/math/mxparser/wrapper/List.cpp
		org/mariuszgromada/math/mxparser/wrapper/List.hpp
		org/mariuszgromada/math/mxparser/wrapper/Math.hpp
		org/mariuszgromada/math/mxparser/wrapper/PtrsMap.hpp
		org/mariuszgromada/math/mxparser/wrapper/PtrsSet.hpp
		org/mariuszgromada/math/mxparser/wrapper/Random.cpp
		org/mariuszgromada/math/mxparser/wrapper/Random.hpp
		org/mariuszgromada/math/mxparser/wrapper/StringBuilder.cpp
		org/mariuszgromada/math/mxparser/wrapper/StringBuilder.hpp
		org/mariuszgromada/math/mxparser/wrapper/SystemUtils.cpp
		org/mariuszgromada/math/mxparser/wrapper/SystemUtils.hpp
		org/mariuszgromada/math/mxparser/wrapper/VariadicProcessor.cpp
		org/mariuszgromada/math/mxparser/wrapper/VariadicProcessor.hpp
)
endif()

set(CMAKE_ENV_SPECIFIC_CONFIG "${ENV_SPECIFIC_CONFIG_1}${ENV_SPECIFIC_CONFIG_2}${ENV_SPECIFIC_CONFIG_3}${ENV_SPECIFIC_CONFIG_4}")

target_compile_definitions(MathParserOrgMxParser PUBLIC
		MXPARSER_BUILD_PROJECT_VERSION_MAJOR=${PROJECT_VERSION_MAJOR}
		MXPARSER_BUILD_PROJECT_VERSION_MINOR=${PROJECT_VERSION_MINOR}
		MXPARSER_BUILD_PROJECT_VERSION_PATCH=${PROJECT_VERSION_PATCH}
		MXPARSER_BUILD_CMAKE_HOST_SYSTEM_NAME="${CMAKE_HOST_SYSTEM_NAME}"
		MXPARSER_BUILD_CMAKE_SYSTEM_NAME="${CMAKE_SYSTEM_NAME}"
		MXPARSER_BUILD_CMAKE_SYSTEM_VERSION="${CMAKE_SYSTEM_VERSION}"
		MXPARSER_BUILD_CMAKE_SYSTEM_PROCESSOR="${CMAKE_SYSTEM_PROCESSOR}"
		MXPARSER_BUILD_CMAKE_CXX_COMPILER_ID="${CMAKE_CXX_COMPILER_ID}"
		MXPARSER_BUILD_CMAKE_ENV_SPECIFIC_CONFIG="${CMAKE_ENV_SPECIFIC_CONFIG}"
		MXPARSER_BUILD_CMAKE_CXX_COMPILER_VERSION="${CMAKE_CXX_COMPILER_VERSION}"
		MXPARSER_BUILD_CMAKE_CXX_COMPILER="${CMAKE_CXX_COMPILER}"
		MXPARSER_BUILD_CMAKE_CXX_COMPILER_FRONTEND_VARIANT="${CMAKE_CXX_COMPILER_FRONTEND_VARIANT}"
		MXPARSER_BUILD_CMAKE_CXX_COMPILER_LINKER_FRONTEND_VARIANT="${CMAKE_CXX_COMPILER_LINKER_FRONTEND_VARIANT}"
		MXPARSER_BUILD_CMAKE_CXX_COMPILER_LINKER_ID="${CMAKE_CXX_COMPILER_LINKER_ID}"
		MXPARSER_BUILD_CMAKE_CXX_COMPILER_LINKER_VERSION="${CMAKE_CXX_COMPILER_LINKER_VERSION}"
		MXPARSER_BUILD_CMAKE_CXX_COMPILER_LINKER="${CMAKE_CXX_COMPILER_LINKER}"
		MXPARSER_BUILD_CMAKE_MSVC="${CMAKE_MSVC}"
		MXPARSER_BUILD_CMAKE_BUILD_TYPE="${CMAKE_BUILD_TYPE}"
		MXPARSER_BUILD_CMAKE_GENERATOR="${CMAKE_GENERATOR}"
		MXPARSER_BUILD_CMAKE_VERSION="${DETECTED_CMAKE_MAJOR_VERSION}.${DETECTED_CMAKE_MINOR_VERSION}.${DETECTED_CMAKE_PATCH_VERSION}"
		MXPARSER_BUILD_CMAKE_MAKE_PROGRAM="${CMAKE_MAKE_PROGRAM}"
		MXPARSER_BUILD_PROJECT_VERSION="${PROJECT_VERSION}"
		MXPARSER_BUILD_CMAKE_SIZEOF_VOID_P="${CMAKE_SIZEOF_VOID_P}"
		MXPARSER_BUILD_CMAKE_CXX_FLAGS_RELEASE="${CMAKE_CXX_FLAGS_RELEASE}"
)

target_include_directories(MathParserOrgMxParser PUBLIC
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
		$<INSTALL_INTERFACE:include>
)

target_compile_definitions(MathParserOrgMxParser PRIVATE BUILDING_MATHPARSER_ORG_MXPARSER_LIBRARY)

if (COMP_CL)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_COMP_CL)
endif()
if (COMP_CLANG_CL)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_COMP_CLANG_CL)
endif()
if (COMP_CLANG)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_COMP_CLANG)
endif()
if (COMP_GCC)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_COMP_GCC)
endif()
if (COMP_OTHER)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_COMP_OTHER)
endif()
if (ENV_MSYS)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_ENV_MSYS)
endif()
if (ENV_WSL)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_ENV_WSL)
endif()
if (ENV_MINGW)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_ENV_MINGW)
endif()
if (ARCH_X86)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_ARCH_X86)
endif()
if (ARCH_ARM)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_ARCH_ARM)
endif()
if (ARCH_64_BIT)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_ARCH_64_BIT)
endif()
if (ARCH_64_BIT_TARGET)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_ARCH_64_BIT_TARGET)
endif()
if (ARCH_32_BIT_TARGET)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_ARCH_32_BIT_TARGET)
endif()
if (TARGET_WINDOWS)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_TARGET_WINDOWS)
endif()
if (TARGET_LINUX)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_TARGET_LINUX)
endif()
if (TARGET_ANDROID)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_TARGET_ANDROID)
endif()
if (TARGET_MACOS)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_TARGET_MACOS)
endif()
if (TARGET_IOS)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_TARGET_IOS)
endif()
if (HOST_WINDOWS)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_HOST_WINDOWS)
endif()
if (HOST_LINUX)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_HOST_LINUX)
endif()
if (HOST_ANDROID)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_HOST_ANDROID)
endif()
if (HOST_MACOS)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_HOST_MACOS)
endif()
if (HOST_IOS)
	target_compile_definitions(MathParserOrgMxParser PRIVATE MXPARSER_BUILD_HOST_IOS)
endif()
if (COMP_CL OR COMP_CLANG_CL)
	target_compile_definitions(MathParserOrgMxParser PRIVATE COMP_MSVC_BASED)
endif()

set_target_properties(MathParserOrgMxParser PROPERTIES
		WINDOWS_EXPORT_ALL_SYMBOLS TRUE
		OUTPUT_NAME "MathParser.org-mXparser"
)

find_library(COREFOUNDATION_FRAMEWORK CoreFoundation)

if(COREFOUNDATION_FRAMEWORK)
	target_link_libraries(MathParserOrgMxParser cereal ${COREFOUNDATION_FRAMEWORK})
else()
	target_link_libraries(MathParserOrgMxParser cereal)
endif()

message(STATUS "CMAKE_CXX_FLAGS_RELEASE: ${CMAKE_CXX_FLAGS_RELEASE}")
message(STATUS "CMAKE_CXX_FLAGS for MathParserOrgMxParser: ${CMAKE_CXX_FLAGS}")

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

install(TARGETS cereal EXPORT MathParserOrgMxParserTargets)

install(TARGETS MathParserOrgMxParser
		EXPORT MathParserOrgMxParserTargets
		LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
		ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
		RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
		INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(FILES ${HEADER_FILES}
		DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(EXPORT MathParserOrgMxParserTargets
		FILE MathParserOrgMxParserTargets.cmake
		DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/MathParserOrgMxParser
)

write_basic_package_version_file(
		"${CMAKE_CURRENT_BINARY_DIR}/MathParserOrgMxParserConfigVersion.cmake"
		VERSION ${PROJECT_VERSION}
		COMPATIBILITY AnyNewerVersion
)

configure_package_config_file(
		"${CMAKE_CURRENT_SOURCE_DIR}/MathParserOrgMxParserConfig.cmake.in"
		"${CMAKE_CURRENT_BINARY_DIR}/MathParserOrgMxParserConfig.cmake"
		INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/MathParserOrgMxParser"
)

install(FILES
		"${CMAKE_CURRENT_BINARY_DIR}/MathParserOrgMxParserConfig.cmake"
		"${CMAKE_CURRENT_BINARY_DIR}/MathParserOrgMxParserConfigVersion.cmake"
		DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/MathParserOrgMxParser
)

add_custom_command(TARGET MathParserOrgMxParser POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy_if_different
		$<TARGET_FILE:MathParserOrgMxParser> ${CMAKE_BINARY_DIR})

message(STATUS "CMAKE_BINARY_DIR: ${CMAKE_BINARY_DIR}")