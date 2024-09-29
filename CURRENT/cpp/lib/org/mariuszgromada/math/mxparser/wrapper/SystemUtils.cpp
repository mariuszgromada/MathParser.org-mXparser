/*
 * @(#)SystemUtils.cpp        6.1.0    2024-09-08
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2024-05-19
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2024 Mariusz Gromada - All rights reserved
 * PUBLISHER: INFIMA - https://payhip.com/infima
 *
 * SOFTWARE means source code and/or binary form and/or documentation.
 * PRODUCT: MathParser.org-mXparser SOFTWARE
 * LICENSE: DUAL LICENSE AGREEMENT
 *
 * BY INSTALLING, COPYING, OR OTHERWISE USING THE PRODUCT, YOU AGREE TO BE
 * BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
 *
 * The AUTHOR & PUBLISHER provide the PRODUCT under the DUAL LICENSE AGREEMENT
 * model designed to meet the needs of both non-commercial use and commercial
 * use.
 *
 * NON-COMMERCIAL USE means any use or activity where a fee is not charged
 * and the purpose is not the sale of a good or service, and the use or
 * activity is not intended to produce a profit. Examples of NON-COMMERCIAL USE
 * include:
 *
 * 1. Non-commercial open-source software.
 * 2. Non-commercial mobile applications.
 * 3. Non-commercial desktop software.
 * 4. Non-commercial web applications/solutions.
 * 5. Non-commercial use in research, scholarly and educational context.
 *
 * The above list is non-exhaustive and illustrative only.
 *
 * COMMERCIAL USE means any use or activity where a fee is charged or the
 * purpose is the sale of a good or service, or the use or activity is
 * intended to produce a profit. COMMERCIAL USE examples:
 *
 * 1. OEMs (Original Equipment Manufacturers).
 * 2. ISVs (Independent Software Vendors).
 * 3. VARs (Value Added Resellers).
 * 4. Other distributors that combine and distribute commercially licensed
 *    software.
 *
 * The above list is non-exhaustive and illustrative only.
 *
 * IN CASE YOU WANT TO USE THE PRODUCT COMMERCIALLY, YOU MUST PURCHASE THE
 * APPROPRIATE LICENSE FROM "INFIMA" ONLINE STORE, STORE ADDRESS:
 *
 * 1. https://mathparser.org/order-commercial-license
 * 2. https://payhip.com/infima
 *
 * NON-COMMERCIAL LICENSE
 *
 * Redistribution and use of the PRODUCT in source and/or binary forms,
 * with or without modification, are permitted provided that the following
 * conditions are met:
 *
 * 1. Redistributions of source code must retain the unmodified content of
 *    the entire MathParser.org-mXparser DUAL LICENSE AGREEMENT, including
 *    the definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE,
 *    the NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,
 *    and the following DISCLAIMER.
 * 2. Redistributions in binary form must reproduce the entire content of
 *    MathParser.org-mXparser DUAL LICENSE AGREEMENT in the documentation
 *    and/or other materials provided with the distribution, including the
 *    definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE, the
 *    NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,
 *    and the following DISCLAIMER.
 * 3. Any form of redistribution requires confirmation and signature of
 *    the NON-COMMERCIAL USE by successfully calling the method:
 *       License.iConfirmNonCommercialUse(...)
 *    The method call is used only internally for logging purposes, and
 *    there is no connection with other external services, and no data is
 *    sent or collected. The lack of a method call (or its successful call)
 *    does not affect the operation of the PRODUCT in any way. Please see
 *    the API documentation.
 *
 * COMMERCIAL LICENSE
 *
 *  1. Before purchasing a commercial license, the AUTHOR & PUBLISHER allow
 *     you to download, install, and use up to three copies of the PRODUCT to
 *     perform integration tests, confirm the quality of the PRODUCT, and
 *     its suitability. The testing period should be limited to fourteen
 *     days. Tests should be performed under the test environments conditions
 *     and not for profit generation.
 *  2. Provided that you purchased a license from "INFIMA" online store
 *     (store address: https://mathparser.org/order-commercial-license or
 *     https://payhip.com/infima), and you comply with all terms and
 *     conditions below, and you have acknowledged and understood the
 *     following DISCLAIMER, the AUTHOR & PUBLISHER grant you a nonexclusive
 *     license with the following rights:
 *  3. The license is granted only to you, the person or entity that made
 *     the purchase, identified and confirmed by the data provided during
 *     the purchase.
 *  4. If you purchased a license in the "ONE-TIME PURCHASE" model, the
 *     license is granted only for the PRODUCT version specified in the
 *     purchase. The upgrade policy gives you additional rights, described
 *     in the dedicated section below.
 *  5. If you purchased a license in the "SUBSCRIPTION" model, you may
 *     install and use any version of the PRODUCT during the subscription
 *     validity period.
 *  6. If you purchased a "SINGLE LICENSE" you may install and use the
 *     PRODUCT on/from one workstation that is located/accessible at/from
 *     any of your premises.
 *  7. Additional copies of the PRODUCT may be installed and used on/from
 *     more than one workstation, limited to the number of workstations
 *     purchased per order.
 *  8. If you purchased a "SITE LICENSE", the PRODUCT may be installed
 *     and used on/from all workstations located/accessible at/from any
 *     of your premises.
 *  9. You may incorporate the unmodified PRODUCT into your own products
 *     and software.
 * 10. If you purchased a license with the "SOURCE CODE" option, you may
 *     modify the PRODUCT's source code and incorporate the modified source
 *     code into your own products and/or software.
 * 11. Provided that the license validity period has not expired, you may
 *     distribute your product and/or software with the incorporated
 *     PRODUCT royalty-free.
 * 12. You may make copies of the PRODUCT for backup and archival purposes.
 * 13. Any form of redistribution requires confirmation and signature of
 *     the COMMERCIAL USE by successfully calling the method:
 *        License.iConfirmCommercialUse(...)
 *     The method call is used only internally for logging purposes, and
 *     there is no connection with other external services, and no data is
 *     sent or collected. The lack of a method call (or its successful call)
 *     does not affect the operation of the PRODUCT in any way. Please see
 *     the API documentation.
 * 14. The AUTHOR & PUBLISHER reserve all rights not expressly granted to
 *     you in this agreement.
 *
 * ADDITIONAL CLARIFICATION ON WORKSTATION
 *
 * A workstation is a device, a remote device, or a virtual device, used by
 * you, your employees, or other entities to whom you have commissioned
 * tasks. For example, the number of workstations may refer to the number
 * of software developers, engineers, architects, scientists, and other
 * professionals who use the PRODUCT on your behalf. The number of
 * workstations is not the number of copies of your end-product that you
 * distribute to your end-users.
 *
 * By purchasing the COMMERCIAL LICENSE, you only pay for the number of
 * workstations, while the number of copies/users of your final product
 * (delivered to your end-users) is not limited.
 *
 * Below are some examples to help you select the right license size:
 *
 * Example 1: Single Workstation License
 * Only one developer works on the development of your application. You do
 * not use separate environments for testing, meaning you design, create,
 * test, and compile your final application on one environment. In this
 * case, you need a license for a single workstation.
 *
 * Example 2: Up to 5 Workstations License
 * Two developers are working on the development of your application.
 * Additionally, one tester conducts tests in a separate environment.
 * You use three workstations in total, so you need a license for up to
 * five workstations.
 *
 * Example 3: Up to 20 Workstations License
 * Ten developers are working on the development of your application.
 * Additionally, five testers conduct tests in separate environments.
 * You use fifteen workstations in total, so you need a license for
 * up to twenty workstations.
 *
 * Example 4: Site License
 * Several dozen developers and testers work on the development of your
 * application using multiple environments. You have a large,
 * multi-disciplinary team involved in creating your solution. As your team
 * is growing and you want to avoid licensing limitations, the best choice
 * would be a site license.
 *
 * UPGRADE POLICY
 *
 * The PRODUCT is versioned according to the following convention:
 *
 *    [MAJOR].[MINOR].[PATCH]
 *
 * 1. COMMERCIAL LICENSE holders can install and use the updated version
 *    for bug fixes free of charge, i.e. if you have purchased a license
 *    for the [MAJOR].[MINOR] version (e.g., 5.0), you can freely install
 *    all releases specified in the [PATCH] version (e.g., 5.0.2).
 *    The license terms remain unchanged after the update.
 * 2. COMMERCIAL LICENSE holders for the [MAJOR].[MINOR] version (e.g., 5.0)
 *    can install and use the updated version [MAJOR].[MINOR + 1] free of
 *    charge, i.e., plus one release in the [MINOR] range (e.g., 5.1). The
 *    license terms remain unchanged after the update.
 * 3. COMMERCIAL LICENSE holders who wish to upgrade their version, but are
 *    not eligible for the free upgrade, can claim a discount when
 *    purchasing the upgrade. For this purpose, please contact us via e-mail.
 *
 * DISCLAIMER
 *
 * THIS PRODUCT IS PROVIDED BY THE AUTHOR & PUBLISHER "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL AUTHOR OR PUBLISHER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS PRODUCT, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE VIEWS AND CONCLUSIONS CONTAINED IN THE PRODUCT AND DOCUMENTATION ARE
 * THOSE OF THE AUTHORS AND SHOULD NOT BE INTERPRETED AS REPRESENTING
 * OFFICIAL POLICIES, EITHER EXPRESSED OR IMPLIED, OF THE AUTHOR OR PUBLISHER.
 *
 * CONTACT
 *
 * - e-mail: info@mathparser.org
 * - website: https://mathparser.org
 * - source code: https://github.com/mariuszgromada/MathParser.org-mXparser
 * - online store: https://mathparser.org/order-commercial-license
 * - online store: https://payhip.com/infima
 */

#include "org/mariuszgromada/math/mxparser/wrapper/SystemUtils.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp"
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <string>

#ifdef _WIN32
	#ifndef WIN32_LEAN_AND_MEAN
		#define WIN32_LEAN_AND_MEAN
	#endif
	#ifndef NOMINMAX
		#define NOMINMAX
	#endif
	#include <windows.h>
	#include <winnls.h>
#elif __APPLE__
	#include <CoreFoundation/CoreFoundation.h>
#endif

#define PRINT_BUILD_CONFIG_OPTION(OPTION_NAME) std::cout << "--- " << #OPTION_NAME << " = " << OPTION_NAME << "\n";

namespace org::mariuszgromada::math::mxparser::wrapper {

	API_VISIBLE Ptr<std::locale> SystemUtils::classicLocale = nullptr;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_HOST_SYSTEM_NAME;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_SYSTEM_NAME;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_SYSTEM_VERSION;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_SYSTEM_PROCESSOR;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_CXX_COMPILER_ID;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_ENV_SPECIFIC_CONFIG;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_CXX_COMPILER_VERSION;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_CXX_COMPILER;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_CXX_COMPILER_FRONTEND_VARIANT;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_CXX_COMPILER_LINKER_FRONTEND_VARIANT;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_CXX_COMPILER_LINKER_ID;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_CXX_COMPILER_LINKER_VERSION;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_CXX_COMPILER_LINKER;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_MSVC;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_BUILD_TYPE;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_GENERATOR;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_VERSION;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_MAKE_PROGRAM;
	API_VISIBLE std::string SystemUtils::BUILD_PROJECT_VERSION;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_SIZEOF_VOID_P;
	API_VISIBLE std::string SystemUtils::BUILD_CMAKE_CXX_FLAGS_RELEASE;
	API_VISIBLE bool SystemUtils::BUILD_COMP_CL = false;
	API_VISIBLE bool SystemUtils::BUILD_COMP_CLANG_CL = false;
	API_VISIBLE bool SystemUtils::BUILD_COMP_CLANG = false;
	API_VISIBLE bool SystemUtils::BUILD_COMP_GCC = false;
	API_VISIBLE bool SystemUtils::BUILD_COMP_OTHER = false;
	API_VISIBLE bool SystemUtils::BUILD_ENV_MSVC = false;
	API_VISIBLE bool SystemUtils::BUILD_ENV_MSYS = false;
	API_VISIBLE bool SystemUtils::BUILD_ENV_WSL = false;
	API_VISIBLE bool SystemUtils::BUILD_ENV_MINGW = false;
	API_VISIBLE bool SystemUtils::BUILD_ARCH_X86 = false;
	API_VISIBLE bool SystemUtils::BUILD_ARCH_ARM = false;
	API_VISIBLE bool SystemUtils::BUILD_ARCH_64_BIT = false;
	API_VISIBLE bool SystemUtils::BUILD_ARCH_64_BIT_TARGET = false;
	API_VISIBLE bool SystemUtils::BUILD_ARCH_32_BIT_TARGET = false;
	API_VISIBLE bool SystemUtils::BUILD_TARGET_WINDOWS = false;
	API_VISIBLE bool SystemUtils::BUILD_TARGET_LINUX = false;
	API_VISIBLE bool SystemUtils::BUILD_TARGET_ANDROID = false;
	API_VISIBLE bool SystemUtils::BUILD_TARGET_MACOS = false;
	API_VISIBLE bool SystemUtils::BUILD_TARGET_IOS = false;
	API_VISIBLE bool SystemUtils::BUILD_HOST_WINDOWS = false;
	API_VISIBLE bool SystemUtils::BUILD_HOST_LINUX = false;
	API_VISIBLE bool SystemUtils::BUILD_HOST_ANDROID = false;
	API_VISIBLE bool SystemUtils::BUILD_HOST_MACOS = false;
	API_VISIBLE bool SystemUtils::BUILD_HOST_IOS = false;

	API_VISIBLE void SystemUtils::collectBuildProperties() {
		BUILD_CMAKE_HOST_SYSTEM_NAME = MXPARSER_BUILD_CMAKE_HOST_SYSTEM_NAME;
		BUILD_CMAKE_SYSTEM_NAME = MXPARSER_BUILD_CMAKE_SYSTEM_NAME;
		BUILD_CMAKE_SYSTEM_VERSION = MXPARSER_BUILD_CMAKE_SYSTEM_VERSION;
		BUILD_CMAKE_SYSTEM_PROCESSOR = MXPARSER_BUILD_CMAKE_SYSTEM_PROCESSOR;
		BUILD_CMAKE_CXX_COMPILER_ID = MXPARSER_BUILD_CMAKE_CXX_COMPILER_ID;
		BUILD_CMAKE_ENV_SPECIFIC_CONFIG = MXPARSER_BUILD_CMAKE_ENV_SPECIFIC_CONFIG;
		BUILD_CMAKE_CXX_COMPILER_VERSION = MXPARSER_BUILD_CMAKE_CXX_COMPILER_VERSION;
		BUILD_CMAKE_CXX_COMPILER = MXPARSER_BUILD_CMAKE_CXX_COMPILER;
		BUILD_CMAKE_CXX_COMPILER_FRONTEND_VARIANT = MXPARSER_BUILD_CMAKE_CXX_COMPILER_FRONTEND_VARIANT;
		BUILD_CMAKE_CXX_COMPILER_LINKER_FRONTEND_VARIANT = MXPARSER_BUILD_CMAKE_CXX_COMPILER_LINKER_FRONTEND_VARIANT;
		BUILD_CMAKE_CXX_COMPILER_LINKER_ID = MXPARSER_BUILD_CMAKE_CXX_COMPILER_LINKER_ID;
		BUILD_CMAKE_CXX_COMPILER_LINKER_VERSION = MXPARSER_BUILD_CMAKE_CXX_COMPILER_LINKER_VERSION;
		BUILD_CMAKE_CXX_COMPILER_LINKER = MXPARSER_BUILD_CMAKE_CXX_COMPILER_LINKER;
		BUILD_CMAKE_MSVC = MXPARSER_BUILD_CMAKE_MSVC;
		BUILD_CMAKE_BUILD_TYPE = MXPARSER_BUILD_CMAKE_BUILD_TYPE;
		BUILD_CMAKE_GENERATOR = MXPARSER_BUILD_CMAKE_GENERATOR;
		BUILD_CMAKE_VERSION = MXPARSER_BUILD_CMAKE_VERSION;
		BUILD_CMAKE_MAKE_PROGRAM = MXPARSER_BUILD_CMAKE_MAKE_PROGRAM;
		BUILD_PROJECT_VERSION = MXPARSER_BUILD_PROJECT_VERSION;
		BUILD_CMAKE_SIZEOF_VOID_P = MXPARSER_BUILD_CMAKE_SIZEOF_VOID_P;
		BUILD_CMAKE_CXX_FLAGS_RELEASE = MXPARSER_BUILD_CMAKE_CXX_FLAGS_RELEASE;
#ifdef COMP_CL
		BUILD_COMP_CL = true;
#endif
#ifdef COMP_CLANG_CL
		BUILD_COMP_CLANG_CL = true;
#endif
#ifdef COMP_CLANG
		BUILD_COMP_CLANG = true;
#endif
#ifdef COMP_GCC
		BUILD_COMP_GCC = true;
#endif
#ifdef COMP_OTHER
		BUILD_COMP_OTHER = true;
#endif
#ifdef ENV_MSVC
		BUILD_ENV_MSVC = true;
#endif
#ifdef ENV_MSYS
		BUILD_ENV_MSYS = true;
#endif
#ifdef ENV_WSL
		BUILD_ENV_WSL = true;
#endif
#ifdef ENV_MINGW
		BUILD_ENV_MINGW = true;
#endif
#ifdef ARCH_X86
		BUILD_ARCH_X86 = true;
#endif
#ifdef ARCH_ARM
		BUILD_ARCH_ARM = true;
#endif
#ifdef ARCH_64_BIT
		BUILD_ARCH_64_BIT = true;
#endif
#ifdef ARCH_64_BIT_TARGET
		BUILD_ARCH_64_BIT_TARGET = true;
#endif
#ifdef ARCH_32_BIT_TARGET
		BUILD_ARCH_32_BIT_TARGET = true;
#endif
#ifdef TARGET_WINDOWS
		BUILD_TARGET_WINDOWS = true;
#endif
#ifdef TARGET_LINUX
		BUILD_TARGET_LINUX = true;
#endif
#ifdef TARGET_ANDROID
		BUILD_TARGET_ANDROID = true;
#endif
#ifdef TARGET_MACOS
		BUILD_TARGET_MACOS = true;
#endif
#ifdef TARGET_IOS
		BUILD_TARGET_IOS = true;
#endif
#ifdef HOST_WINDOWS
		BUILD_HOST_WINDOWS = true;
#endif
#ifdef HOST_LINUX
		BUILD_HOST_LINUX = true;
#endif
#ifdef HOST_ANDROID
		BUILD_HOST_ANDROID = true;
#endif
#ifdef HOST_MACOS
		BUILD_HOST_MACOS = true;
#endif
#ifdef HOST_IOS
		BUILD_HOST_IOS = true;
#endif
	}

	STATIC_VARS_INITI_CPP(SystemUtils,
		classicLocale = std::make_shared<std::locale>(std::locale::classic());
		collectBuildProperties();
	);

	API_VISIBLE void SystemUtils::consolePrintBuildConfig() {
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_HOST_SYSTEM_NAME);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_SYSTEM_NAME);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_SYSTEM_VERSION);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_SYSTEM_PROCESSOR);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_CXX_COMPILER_ID);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_ENV_SPECIFIC_CONFIG);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_CXX_COMPILER_VERSION);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_CXX_COMPILER);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_CXX_COMPILER_FRONTEND_VARIANT);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_CXX_COMPILER_LINKER_FRONTEND_VARIANT);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_CXX_COMPILER_LINKER_ID);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_CXX_COMPILER_LINKER_VERSION);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_CXX_COMPILER_LINKER);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_MSVC);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_BUILD_TYPE);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_GENERATOR);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_VERSION);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_MAKE_PROGRAM);
		PRINT_BUILD_CONFIG_OPTION(BUILD_PROJECT_VERSION);
		PRINT_BUILD_CONFIG_OPTION(BUILD_PROJECT_VERSION_MAJOR);
		PRINT_BUILD_CONFIG_OPTION(BUILD_PROJECT_VERSION_MINOR);
		PRINT_BUILD_CONFIG_OPTION(BUILD_PROJECT_VERSION_PATCH);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_SIZEOF_VOID_P);
		PRINT_BUILD_CONFIG_OPTION(BUILD_CMAKE_CXX_FLAGS_RELEASE);
		PRINT_BUILD_CONFIG_OPTION(BUILD_COMP_CL);
		PRINT_BUILD_CONFIG_OPTION(BUILD_COMP_CLANG_CL);
		PRINT_BUILD_CONFIG_OPTION(BUILD_COMP_CLANG);
		PRINT_BUILD_CONFIG_OPTION(BUILD_COMP_GCC);
		PRINT_BUILD_CONFIG_OPTION(BUILD_COMP_OTHER);
		PRINT_BUILD_CONFIG_OPTION(BUILD_ENV_MSVC);
		PRINT_BUILD_CONFIG_OPTION(BUILD_ENV_MSYS);
		PRINT_BUILD_CONFIG_OPTION(BUILD_ENV_WSL);
		PRINT_BUILD_CONFIG_OPTION(BUILD_ENV_MINGW);
		PRINT_BUILD_CONFIG_OPTION(BUILD_ARCH_X86);
		PRINT_BUILD_CONFIG_OPTION(BUILD_ARCH_ARM);
		PRINT_BUILD_CONFIG_OPTION(BUILD_ARCH_64_BIT);
		PRINT_BUILD_CONFIG_OPTION(BUILD_ARCH_64_BIT_TARGET);
		PRINT_BUILD_CONFIG_OPTION(BUILD_ARCH_32_BIT_TARGET);
		PRINT_BUILD_CONFIG_OPTION(BUILD_TARGET_WINDOWS);
		PRINT_BUILD_CONFIG_OPTION(BUILD_TARGET_LINUX);
		PRINT_BUILD_CONFIG_OPTION(BUILD_TARGET_ANDROID);
		PRINT_BUILD_CONFIG_OPTION(BUILD_TARGET_MACOS);
		PRINT_BUILD_CONFIG_OPTION(BUILD_TARGET_IOS);
		PRINT_BUILD_CONFIG_OPTION(BUILD_HOST_WINDOWS);
		PRINT_BUILD_CONFIG_OPTION(BUILD_HOST_LINUX);
		PRINT_BUILD_CONFIG_OPTION(BUILD_HOST_ANDROID);
		PRINT_BUILD_CONFIG_OPTION(BUILD_HOST_MACOS);
		PRINT_BUILD_CONFIG_OPTION(BUILD_HOST_IOS);
	}

	API_VISIBLE Long SystemUtils::currentTimeMillis() {

		auto clockNow = std::chrono::high_resolution_clock::now();;
		auto msNow = std::chrono::duration_cast<std::chrono::milliseconds>(clockNow.time_since_epoch());
		return msNow.count();
	}

	API_VISIBLE std::string SystemUtils::getDefaultOsLanguage() {
#if defined(_WIN32)
		WCHAR locale[LOCALE_NAME_MAX_LENGTH] = {0};
		if (GetUserDefaultLocaleName(locale, LOCALE_NAME_MAX_LENGTH)) {
			return UTF16toUTF8(locale);
		}
		return "Unknown";
#elif defined(__APPLE__)
		// Używamy CoreFoundation API na macOS
		CFArrayRef languages = CFLocaleCopyPreferredLanguages();
		if (languages && CFArrayGetCount(languages) > 0) {
			CFStringRef language = (CFStringRef)CFArrayGetValueAtIndex(languages, 0);
			char languageCode[128];
			if (CFStringGetCString(language, languageCode, sizeof(languageCode), kCFStringEncodingUTF8)) {
				CFRelease(languages);
				return std::string(languageCode);
			}
			CFRelease(languages);
		}
		return "Unknown";
#elif defined(__unix__)
		// Dla systemów Unix/Linux
		const char* lang = std::getenv("LANG");
		if (lang) {
			// Zwracamy część przed kropką, jeśli LANG zawiera kodowanie
			std::string langStr(lang);
			auto pos = langStr.find('.');
			if (pos != std::string::npos) {
				langStr = langStr.substr(0, pos);
			}
			return langStr;
		}
		return "en-US";
#else
		return "en-US";  //
#endif
	}

} // namespace org::mariuszgromada::math::mxparser::wrapper
