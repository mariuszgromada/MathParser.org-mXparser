/*
 * @(#)BindingNativeArray.hpp        6.2.0    2026-11-04
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2024-05-19
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2026 Mariusz Gromada - All rights reserved
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

#pragma once
// Private D1/D2 feasibility: original C++ arrays/storage, no registry or copies.
#include "BindingSupport.hpp"
#pragma push_macro("null")
#undef null
namespace mx_binding {
    // A raw C++ begin/end pointer borrows its allocation. The cursor does not
    // extend storage lifetime: only the original shared_ptr<T[]> owners do that.
    template<class T>
    struct NativeArrayPointer {
        std::weak_ptr<T[]> storage;
        const size_t extent;
        size_t position;
        const T *pointer;
        T *mutablePointer;
        const bool readOnly;

        NativeArrayPointer(const std::shared_ptr<T[]> &storage, size_t extent, size_t position, const T *pointer,
                           T *mutablePointer, bool readOnly)
            : storage(storage), extent(extent), position(position), pointer(pointer), mutablePointer(mutablePointer),
              readOnly(readOnly) {
        }

        std::shared_ptr<T[]> lock(bool dereference) const {
            auto owner = storage.lock();
            if (!owner)throw std::runtime_error("Borrowed native array allocation expired");
            if (position > extent || (dereference && position == extent))throw std::out_of_range(
                "Native array pointer allocation boundary");
            return owner;
        }

        bool isConst() const { return readOnly; }

        val get() const {
            const auto owner = lock(true);
            return Conversion<T>::write(*pointer);
        }

        void set(val value) {
            if (readOnly)throw std::invalid_argument("Cannot write through a const native array pointer");
            const auto owner = lock(true);
            *mutablePointer = Conversion<T>::read(value);
        }

        void advance(int difference) {
            const auto owner = lock(false);
            const Long target = static_cast<Long>(position) + difference;
            if (target < 0 || static_cast<unsigned long long>(target) > extent)throw std::out_of_range(
                "Native array pointer allocation boundary");
            pointer += difference;
            if (mutablePointer)mutablePointer += difference;
            position = static_cast<size_t>(target);
        }

        bool equals(const NativeArrayPointer &other) const {
            const auto a = lock(false);
            const auto b = other.lock(false);
            return pointer == other.pointer;
        }

        std::shared_ptr<NativeArrayPointer> copy() const {
            const auto owner = lock(false);
            return std::make_shared<NativeArrayPointer>(*this);
        }
    };

    template<class T>
    struct NativeArrayDataView {
        std::shared_ptr<T[]> value;
        const size_t extent;

        NativeArrayDataView(const std::shared_ptr<T[]> &value, size_t extent) : value(value), extent(extent) {
        }

        void check(size_t index) const {
            if (!value || index >= extent)throw std::out_of_range("Native array allocation boundary");
        }

        val get(size_t index) const {
            check(index);
            return Conversion<T>::write(value[index]);
        }

        void set(size_t index, val item) {
            check(index);
            value[index] = Conversion<T>::read(item);
        }

        size_t size() const { return extent; }

        bool sameStorage(const NativeArrayDataView &other) const {
            return value.get() == other.value.get() && !value.owner_before(other.value) && !other.value.
                   owner_before(value);
        }
    };

    template<class T>
    struct NativeArrayView {
        const ArrayPtr<T> original;
        // Only the allocation extent: mutable public length/sizet cannot prove it.
        size_t allocationExtent;

        explicit NativeArrayView(const ArrayPtr<T> &original) : original(original), allocationExtent(original->sizet) {
        }

        size_t offset(size_t row, size_t column) const { return row * original->columns + column; }

        void check(size_t row, size_t column) const {
            if (!original->data || offset(row, column) >= allocationExtent)throw std::out_of_range(
                "Native array allocation boundary");
        }

        val get(size_t row, size_t column) const {
            check(row, column);
            return Conversion<T>::write(std::as_const(*original)(row, column));
        }

        val getMutable(size_t row, size_t column) {
            check(row, column);
            return Conversion<T>::write((*original)(row, column));
        }

        val getRow(size_t row) const {
            check(row, 0);
            return Conversion<T>::write(std::as_const(*original)(row));
        }

        void set(size_t row, size_t column, val value) {
            check(row, column);
            (*original)(row, column) = Conversion<T>::read(value);
        }

        void setRow(size_t row, val value) {
            check(row, 0);
            (*original)(row) = Conversion<T>::read(value);
        }

        std::shared_ptr<NativeArrayDataView<T> > data() const {
            return original->data
                       ? std::make_shared<NativeArrayDataView<T> >(original->data, allocationExtent)
                       : nullptr;
        }

        void setData(const std::shared_ptr<NativeArrayDataView<T> > &value) {
            original->data = value ? value->value : nullptr;
            allocationExtent = value ? value->extent : 0;
        }

        val metadata() const {
            val o = val::object();
            o.set("rows", original->rows);
            o.set("columns", original->columns);
            o.set("length", original->length);
            o.set("sizet", original->sizet);
            o.set("allocationExtent", allocationExtent);
            return o;
        }

        void rows(int value) { original->rows = value; }
        void columns(int value) { original->columns = value; }
        void length(int value) { original->length = value; }
        void sizet(size_t value) { original->sizet = value; }

        std::shared_ptr<NativeArrayPointer<T> > pointer(bool end, bool readOnly) const {
            if (!original->data) {
                if (end && original->sizet != 0)throw std::out_of_range("Native array pointer allocation boundary");
                return nullptr;
            }
            const size_t position = end ? original->sizet : 0;
            if (position > allocationExtent)throw std::out_of_range("Native array pointer allocation boundary");
            T *mutablePointer = readOnly ? nullptr : (end ? original->end() : original->begin());
            const T *pointer = readOnly
                                   ? (end ? std::as_const(*original).end() : std::as_const(*original).begin())
                                   : mutablePointer;
            return std::make_shared<NativeArrayPointer<T> >(original->data, allocationExtent, position, pointer,
                                                            mutablePointer, readOnly);
        }

        bool sameArray(const NativeArrayView &other) const { return original.get() == other.original.get(); }
    };

    template<class T>
    std::shared_ptr<NativeArrayView<T> > constructNativeArray(val args) {
        const int mode = args[0].as<int>();
        ArrayPtr<T> original;
        if (mode == 0)original = std::make_shared<Array<T> >();
        else if (mode == 1)original = new_Array<T>(args[1].as<size_t>());
        else if (mode == 2)original = new_Array<T>(args[1].as<size_t>(), args[2].as<size_t>());
        else if (mode == 3) {
            const auto values = Conversion<ListPtr<T> >::read(args[1]);
            if (!values)throw std::invalid_argument("Array.toArray requires a nonnull list");
            original = Array<T>::toArray(values);
        } else throw std::invalid_argument("Unknown native Array constructor");
        return std::make_shared<NativeArrayView<T> >(original);
    }

    template<class T>
    std::shared_ptr<NativeArrayView<T> > nativeListToArray(val values) {
        const auto list = Conversion<ListPtr<T> >::read(values);
        if (!list)throw std::invalid_argument("Array.toArray requires a nonnull list");
        return std::make_shared<NativeArrayView<T> >(Array<T>::toArray(list));
    }

    template<class T, ArrayPtr<T>(*Factory)(size_t)>
    std::shared_ptr<NativeArrayView<T> > nativeArrayFactory1(size_t rows) {
        return std::make_shared<NativeArrayView<T> >(Factory(rows));
    }

    template<class T, ArrayPtr<T>(*Factory)(size_t, size_t)>
    std::shared_ptr<NativeArrayView<T> > nativeArrayFactory2(size_t rows, size_t columns) {
        return std::make_shared<NativeArrayView<T> >(Factory(rows, columns));
    }

    template<class T>
    void registerNativeArray(const char *name, const char *pointer, const char *dataName, const char *dataPointer,
                             const char *pointerName, const char *pointerType, const char *factory,
                             const char *toArray) {
        using V = NativeArrayView<T>;
        using D = NativeArrayDataView<T>;
        using C = NativeArrayPointer<T>;
        emscripten::class_<C>(pointerName).template smart_ptr<std::shared_ptr<C> >(pointerType)
                .function("get", &C::get).function("set", &C::set).function("advance", &C::advance).function(
                    "equals", &C::equals)
                .function("nativeAliasOf", &C::equals).function("copy", &C::copy).function("isConst", &C::isConst);

        emscripten::class_<D>(dataName).template smart_ptr<std::shared_ptr<D> >(dataPointer)
                .function("get", &D::get).function("set", &D::set).function("size", &D::size).function(
                    "nativeAliasOf", &D::sameStorage);
        emscripten::class_<V>(name).template smart_ptr<std::shared_ptr<V> >(pointer)
                .function("get", &V::get).function("getMutable", &V::getMutable).function("getRow", &V::getRow).
                function("set", &V::set).function("setRow", &V::setRow)
                .function("data", &V::data).function("setData", &V::setData).function("metadata", &V::metadata).
                function("pointer", &V::pointer)
                .function("rows", &V::rows).function("columns", &V::columns).function("length", &V::length).
                function("sizet", &V::sizet).function("nativeAliasOf", &V::sameArray);
        emscripten::function(factory, &constructNativeArray<T>);
        emscripten::function(toArray, &nativeListToArray<T>);
    }
}
#pragma pop_macro("null")
