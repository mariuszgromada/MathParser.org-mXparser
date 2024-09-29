/*
 * @(#)CharStream.cpp        6.1.0    2024-09-08
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

#include "org/mariuszgromada/math/mxparser/syntaxchecker/CharStream.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/wrapper/Integer.hpp"

namespace org::mariuszgromada::math::mxparser::syntaxchecker {

	using namespace org::mariuszgromada::math::mxparser::wrapper;

	namespace {
		template<class T>
		void ArrayCopy(T *src, int src_offset, T *dest, int dest_offset, int len) {
			for (int i = 0; i < len; i++) {
				dest[dest_offset + i] = src[src_offset + i];
			}
		}

		class StringReaderStream : public ReaderStream {
		public:
			explicit StringReaderStream(const JJString &str) : str_(str), cur_(0), max_(str.size()) {
			}

			size_t read(JJChar *bufptr, int offset, size_t len) override {
				size_t count = str_.copy(bufptr + offset, len > max_ ? max_ : len, cur_);
				cur_ += count;
				max_ -= count;
				return count;
			}

			~StringReaderStream() override = default;

			bool endOfInput() override {
				return max_ == 0;
			}

		private:
			const JJString str_;
			size_t cur_;
			size_t max_;
		};
	}

	void CharStream::ReInit(const JJString &str, int startline,
	                        int startcolumn, int buffersize) {
		auto *stream = new StringReaderStream(str);
		ReInit(stream, startline, startcolumn, buffersize);
		deleteStream = true;
	}

	void CharStream::ReInit(ReaderStream *input_stream, int startline,
	                        int startcolumn, int buffersize) {
		if (deleteStream) {
			delete inputStream;
		}

		if (buffer) {
			DeleteBuffers();
		}

		available = bufsize = buffersize;
		buffer = new JJChar[buffersize];
		bufline = new int[buffersize];
		bufcolumn = new int[buffersize];

		column = startcolumn - 1;
		inputStream = input_stream;
		line = startline;
		prevCharIsLF = prevCharIsCR = false;
		tokenBegin = inBuf = maxNextCharInd = 0;
		bufpos = -1;
		deleteStream = false;
	}

	void CharStream::DeleteBuffers() {
		delete[] buffer;
		delete[] bufline;
		delete[] bufcolumn;
	}

	void CharStream::adjustBeginLineColumn(int newLine, int newCol) {
		int start = tokenBegin;
		int len;

		if (bufpos >= tokenBegin) {
			len = bufpos - tokenBegin + inBuf + 1;
		} else {
			len = bufsize - tokenBegin + bufpos + 1 + inBuf;
		}

		int i = 0, j = 0, k = 0;
		int nextColDiff = 0, columnDiff = 0;

		while (i < len && bufline[j = start % bufsize] ==
		       bufline[k = (start + 1) % bufsize]) {
			bufline[j] = newLine;
			nextColDiff = columnDiff + bufcolumn[k] - bufcolumn[j];
			bufcolumn[j] = newCol + columnDiff;
			columnDiff = nextColDiff;
			i++;
			start++;
		}

		if (i < len) {
			bufline[j] = newLine++;
			bufcolumn[j] = newCol + columnDiff;

			while (i++ < len) {
				if (bufline[j = start % bufsize] != bufline[(start + 1) % bufsize])
					bufline[j] = newLine++;
				else
					bufline[j] = newLine;
				start++;
			}
		}

		line = bufline[j];
		column = bufcolumn[j];
	}

	void CharStream::ExpandBuff(bool wrapAround) {
		auto *newbuffer = new JJChar[bufsize + 2048];
		int *newbufline = new int[bufsize + 2048];
		int *newbufcolumn = new int[bufsize + 2048];

		if (wrapAround) {
			ArrayCopy(buffer, tokenBegin, newbuffer, 0, bufsize - tokenBegin);
			ArrayCopy(buffer, 0, newbuffer, bufsize - tokenBegin, bufpos);
			ArrayCopy(bufline, tokenBegin, newbufline, 0, bufsize - tokenBegin);
			ArrayCopy(bufline, 0, newbufline, bufsize - tokenBegin, bufpos);
			ArrayCopy(bufcolumn, tokenBegin, newbufcolumn, 0, bufsize - tokenBegin);
			ArrayCopy(bufcolumn, 0, newbufcolumn, bufsize - tokenBegin, bufpos);
			bufpos += (bufsize - tokenBegin);
		} else {
			ArrayCopy(buffer, tokenBegin, newbuffer, 0, bufsize - tokenBegin);
			ArrayCopy(bufline, tokenBegin, newbufline, 0, bufsize - tokenBegin);
			ArrayCopy(bufcolumn, tokenBegin, newbufcolumn, 0, bufsize - tokenBegin);
			bufpos -= tokenBegin;
		}

		maxNextCharInd = bufpos;
		DeleteBuffers();
		buffer = newbuffer;
		bufline = newbufline;
		bufcolumn = newbufcolumn;
		bufsize += 2048;
		available = bufsize;
		tokenBegin = 0;
	}

	void CharStream::FillBuff() {
		if (maxNextCharInd == available) {
			if (available == bufsize) {
				if (tokenBegin > 2048) {
					bufpos = maxNextCharInd = 0;
					available = tokenBegin;
				} else if (tokenBegin < 0) {
					bufpos = maxNextCharInd = 0;
				} else {
					ExpandBuff(false);
				}
			} else if (available > tokenBegin) {
				available = bufsize;
			} else if ((tokenBegin - available) < 2048) {
				ExpandBuff(true);
			} else {
				available = tokenBegin;
			}
		}

		size_t i = inputStream->read(buffer, maxNextCharInd, available - maxNextCharInd);
		if (i > 0) {
			maxNextCharInd += Integer::castSizetToInt(i);
		} else {
			--bufpos;
			backup(0);
			if (tokenBegin == -1) {
				tokenBegin = bufpos;
			}
		}
	}

	void CharStream::UpdateLineColumn(JJChar c) {
		column++;
		if (prevCharIsLF) {
			prevCharIsLF = false;
			column = 1;
			line++;
		} else if (prevCharIsCR) {
			prevCharIsCR = false;
			if (c == '\n') {
				prevCharIsLF = true;
			} else {
				column = 1;
				line++;
			}
		}

		switch (c) {
			case '\r':
				prevCharIsCR = true;
				break;
			case '\n':
				prevCharIsLF = true;
				break;
			case '\t':
				column--;
				column += (tabSize - (column % tabSize));
				break;
			default:
				break;
		}

		bufline[bufpos] = line;
		bufcolumn[bufpos] = column;
	}
} // namespace org::mariuszgromada::math::mxparser::syntaxchecker

/* Generated By:JavaCC: Do not edit this line. ErrorHandler.h Version 7.0 */
/* JavaCCOptions:STATIC=false,SUPPORT_CLASS_VISIBILITY_PUBLIC=true,BUILD_PARSER=true,BUILD_TOKEN_MANAGER=true */
/* JavaCC - OriginalChecksum=8fb346d7f62b7dafdd3c7c64c2ab6e65 (do not edit this line) */
