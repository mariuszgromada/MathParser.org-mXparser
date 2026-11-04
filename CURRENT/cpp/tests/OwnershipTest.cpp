/*
 * @(#)OwnershipTest.cpp        6.1.2    2026-10-26
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

#include <catch2/catch_test_macros.hpp>
#include "org/mariuszgromada/math/mxparser.hpp"
#include <iostream>
#include <stdexcept>
#include <atomic>
#include <thread>
#include <type_traits>
#include <utility>
#include <vector>
using namespace org::mariuszgromada::math::mxparser;

namespace org::mariuszgromada::math::mxparser {
// Read-only test friend: weak observers only, no lifetime/identity registry.
struct OwnershipTestAccess {
    static std::weak_ptr<Expression> body(const FunctionPtr& f) { return f->functionExpression; }
    static std::weak_ptr<Expression> body(const ArgumentPtr& a) { return a->argumentExpression; }
    static std::weak_ptr<void> functions(const ExpressionPtr& e) { return e->functionsList; }
    static std::weak_ptr<void> arguments(const ExpressionPtr& e) { return e->argumentsList; }
};
}
namespace {
int assertions=0;
void check(bool pass,const char* id) {
    INFO(id);
    REQUIRE(pass);
    ++assertions;
}
template<class T> void nativeFunctionCopyMove() {
    if constexpr (std::is_copy_constructible_v<T>) {
        auto source=new_Function("ff(x)=x+1");
        auto copy=std::make_shared<T>(*source);
        std::weak_ptr<Function> ws=source,wc=copy;
        check(static_cast<const T&>(*copy).getFunction(0)==source,"native_copy_self_target_identity");
        source.reset(); check(!ws.expired(),"native_copy_keeps_original_target");
        check(copy->calculate(3.0)==4,"native_copy_calculation");
        copy.reset(); check(ws.expired()&&wc.expired(),"native_copy_final_release");
    }
    if constexpr (std::is_move_constructible_v<T>) {
        auto source=new_Function("ff(x)=x+1");
        auto moved=std::make_shared<T>(std::move(*source));
        std::weak_ptr<Function> ws=source,wm=moved;
        // A moved-from target need not remain calculable, but an existing
        // shared_ptr identity must not disappear while this list uses it.
        check(static_cast<const T&>(*moved).getFunction(0)==source,"native_move_target_identity");
        source.reset(); check(!ws.expired(),"native_move_keeps_original_target");
        moved.reset(); check(ws.expired()&&wm.expired(),"native_move_final_release");
    }
    if constexpr (std::is_copy_assignable_v<T>) {
        auto source=new_Function("ff(x)=x+1"); auto copy=new_Function("zz(x)=x+2");
        *copy=*source; std::weak_ptr<Function> ws=source,wc=copy;
        source.reset(); check(!ws.expired(),"native_copy_assignment_keeps_target");
        copy->removeFunctions(ws.lock());
        check(ws.expired(),"copy_assignment_releases_removed_target");
        check(copy->calculate(3.0)==4,"copy_assignment_calculates_without_removed_self");
        copy->addFunctions(copy); check(copy->getFunction("ff")==copy,"copy_assignment_readds_own_self");
        copy.reset(); check(wc.expired(),"copy_assignment_final_release");
    }
}
 } // namespace

TEST_CASE("testOwnershipNativeGraphs", "[API][Ownership]") {
    assertions=0;
    const bool serializationWasEnabled=SerializationUtils::isBinarySerializationEnabled();
    struct RestoreSerialization {
        bool enabled;
        ~RestoreSerialization() {
            if(enabled) SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
            else SerializationUtils::disableBinarySerialization();
        }
    } restore{serializationWasEnabled};
    {
        auto f=new_Function("ff(x)=x+1");
        std::weak_ptr<Function> wf=f;
        auto wb=OwnershipTestAccess::body(f);
        std::weak_ptr<Argument> wp=f->getArgument("x");
        auto wl=OwnershipTestAccess::functions(wb.lock());
        check(f->calculate(2.0)==3,"function_calculation");
        auto self=f->getFunction("ff"); check(self==f,"function_self_identity");
        f.reset(); check(!wf.expired(),"retrieved_self_owns_function");
        check(self->calculate(3.0)==4,"retrieved_self_calculates");
        self.reset();
        check(wf.expired()&&wb.expired()&&wp.expired()&&wl.expired(),"function_all_nodes_release");
    }
    {
        auto f=new_Function("ff(x)=if(x<=0,1,x*ff(x-1))");
        auto wb=OwnershipTestAccess::body(f); std::weak_ptr<Function> wf=f;
        check(f->calculate(5.0)==120,"direct_recursive_function");
        f.reset(); check(wf.expired()&&wb.expired(),"direct_recursion_release");
    }
    {
        auto f=new_Function("ff(x)=x+1"); auto clone=new_Function(f,false,nullptr);
        std::weak_ptr<Function> wf=f,wc=clone;
        auto wb=OwnershipTestAccess::body(f),wbc=OwnershipTestAccess::body(clone);
        check(clone->getFunction("ff")==f,"shallow_clone_preserves_original_self");
        f.reset(); check(!wf.expired(),"shallow_clone_retains_original");
        check(clone->calculate(4.0)==5,"shallow_clone_calculates");
        clone.reset(); check(wf.expired()&&wc.expired()&&wb.expired()&&wbc.expired(),"shallow_clone_final_release");
    }
    {
        auto f=new_Function("ff(x)=x+1"); auto clone=f->cloneForThreadSafe();
        auto wb=OwnershipTestAccess::body(f); std::weak_ptr<Function> wf=f,wc=clone;
        check(clone->getFunction("ff")==clone,"threadsafe_function_self_identity");
        f.reset(); check(wf.expired()&&wb.expired(),"threadsafe_function_releases_original");
        check(clone->calculate(4.0)==5,"threadsafe_function_calculates");
        auto wbc=OwnershipTestAccess::body(clone); clone.reset();
        check(wc.expired()&&wbc.expired(),"threadsafe_function_final_release");
    }
    {
        auto r=new_RecursiveArgument("rr(n)=rr(n-1)+1"); r->addBaseCase(0,0);
        std::weak_ptr<Argument> wr=r,wn=r->getArgument("n"); auto wb=OwnershipTestAccess::body(r);
        check(r->getArgumentValue(6)==6,"recursive_argument_calculates");
        auto self=r->getArgument("rr"); check(self==r,"recursive_argument_self_identity");
        r.reset(); check(!wr.expired(),"recursive_self_handle_owns");
        self.reset(); check(wr.expired()&&wn.expired()&&wb.expired(),"recursive_argument_all_nodes_release");
    }
    {
        auto r=new_RecursiveArgument("rr(n)=rr(n-1)+1"); r->addBaseCase(0,0);
        auto clone=PtrCast<RecursiveArgument,Argument>(r->cloneForThreadSafe());
        std::weak_ptr<Argument> wr=r,wc=clone; auto wb=OwnershipTestAccess::body(r);
        check(clone->getArgument("rr")==clone,"threadsafe_recursive_self_identity");
        r.reset(); check(wr.expired()&&wb.expired(),"threadsafe_recursive_releases_original");
        check(clone->getArgumentValue(6)==6,"threadsafe_recursive_calculates");
        clone.reset(); check(wc.expired(),"threadsafe_recursive_final_release");
    }
    {
        auto r=new_RecursiveArgument("rr(n)=rr(n-1)+1"); r->addBaseCase(0,0);
        auto clone=r->clone(); std::weak_ptr<Argument> wr=r,wc=clone;
        check(clone->getArgument("rr")==r,"shallow_argument_clone_preserves_target");
        r.reset(); check(!wr.expired(),"shallow_argument_clone_retains_target");
        clone.reset(); check(wr.expired()&&wc.expired(),"shallow_argument_clone_final_release");
    }
    {
        auto f=new_Function("ff(x)=x+1"); f->addFunctions(f);
        check(f->getFunction("ff")==f,"duplicate_self_identity");
        f->removeAllFunctions(); check(f->getFunction("ff")==nullptr,"clear_self");
        f->addFunctions(f); check(f->getFunction("ff")==f,"readd_self");
        std::weak_ptr<Function> wf=f; f.reset(); check(wf.expired(),"readded_self_release");
    }
    SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
    for(bool shallow : {false,true}) {
        auto f=new_Function("ff(x)=x+1"); auto source=shallow?new_Function(f,false,nullptr):f;
        auto bytes=SerializationUtils::serializeToBytes(source); check(bytes!=nullptr,"serialize_function");
        auto restored=SerializationUtils::deserializeFromBytes<Function>(bytes); check(restored!=nullptr,"deserialize_function");
        auto target=restored->getFunction("ff");
        check(shallow ? target!=restored : target==restored,"deserialized_self_or_shallow_target_identity");
        check(target->getFunction("ff")==target,"deserialized_target_self_identity");
        check(restored->calculate(4.0)==5,"deserialized_function_calculation");
        std::weak_ptr<Function> wr=restored,wt=target; auto wb=OwnershipTestAccess::body(restored),wbt=OwnershipTestAccess::body(target);
        restored.reset(); target.reset();
        std::cout << "LIFETIME deserialized_function shallow=" << shallow << " root=" << wr.expired() << " target=" << wt.expired() << " rootBody=" << wb.expired() << " targetBody=" << wbt.expired() << '\n';
        check(wr.expired()&&wt.expired()&&wb.expired()&&wbt.expired(),"deserialized_function_graph_release");
        std::weak_ptr<Function> wf=f,ws=source; f.reset(); source.reset();
        check(wf.expired()&&ws.expired(),"serialized_source_graph_release");
    }
    {
        auto r=new_RecursiveArgument("rr(n)=rr(n-1)+1"); r->addBaseCase(0,0);
        auto bytes=SerializationUtils::serializeToBytes(r); check(bytes!=nullptr,"serialize_recursive");
        auto copy=SerializationUtils::deserializeFromBytes<RecursiveArgument>(bytes); check(copy!=nullptr,"deserialize_recursive");
        check(copy->getArgument("rr")==copy,"deserialized_recursive_identity");
        check(copy->getArgumentValue(6)==6,"deserialized_recursive_calculation");
        std::weak_ptr<Argument> wc=copy,wi=copy->getArgument("n"); auto wb=OwnershipTestAccess::body(copy);
        copy.reset(); check(wc.expired()&&wi.expired()&&wb.expired(),"deserialized_recursive_all_nodes_release");
    }
    SerializationUtils::disableBinarySerialization();
    for(int size : {2,3,8}) for(int rootIndex : {0,size-1}) {
        std::vector<FunctionPtr> owners; std::vector<std::weak_ptr<Function>> observers;
        for(int i=0;i<size;i++) { owners.push_back(new_Function("u"+std::to_string(i)+"(n)=n+1")); observers.push_back(owners.back()); }
        for(int i=0;i<size;i++) owners[i]->addFunctions(owners[(i+1)%size]);
        auto root=owners[rootIndex];
        for(int i=size-1;i>=0;i--) owners[i].reset();
        for(auto& observer:observers) check(!observer.expired(),"mutual_surviving_owner_retains_dependencies");
        auto peer=root->getFunction("u"+std::to_string((rootIndex+1)%size));
        check(peer==observers[(rootIndex+1)%size].lock(),"mutual_dependency_identity");
        root->removeFunctions(peer); check(root->calculate(3.0)==4,"mutual_disconnected_root_still_valid");
        peer.reset(); root.reset();
        for(auto& observer:observers) check(observer.expired(),"mutual_final_release_after_explicit_disconnection");
    }
    nativeFunctionCopyMove<Function>();
    for(bool removeThroughOriginal : {false,true}) {
        auto f=new_Function("ff(x)=x+1"); auto copy=new_Function(f,false,nullptr);
        std::weak_ptr<Function> wf=f,wc=copy;
        if(removeThroughOriginal) f->removeFunctions(f); else copy->removeFunctions(f);
        f.reset(); check(wf.expired(),"shared_view_releases_removed_original");
        check(copy->calculate(3.0)==4,"shared_view_survives_definition_removal");
        copy.reset(); check(wc.expired(),"shared_view_final_release_after_removal");
    }
    {
        auto f=new_Function("ff(x)=x+1"); auto copy=new_Function(f,false,nullptr);
        *f=*copy; std::weak_ptr<Function> wf=f,wc=copy;
        copy.reset(); check(wc.expired(),"assigned_original_releases_clone");
        check(f->calculate(3.0)==4,"assigned_original_calculates");
        f.reset(); check(wf.expired(),"assigned_original_does_not_create_self_cycle");
    }
    {
        auto x=new_Argument("x",2.0); auto copy=std::make_shared<Argument>(*x);
        std::weak_ptr<Argument> wx=x,wc=copy; x.reset();
        check(wx.expired(),"free_argument_copy_does_not_retain_original");
        check(copy->getArgumentValue()==2,"free_argument_copy_value");
        copy.reset(); check(wc.expired(),"free_argument_copy_release");
    }
    {
        auto r=new_RecursiveArgument("rr(n)=rr(n-1)+1"); r->addBaseCase(0,0);
        auto copy=std::make_shared<Argument>(*r); std::weak_ptr<Argument> wr=r,wc=copy;
        check(copy->getArgument("rr")==r,"native_argument_copy_self_target");
        r.reset(); check(!wr.expired(),"native_argument_copy_retains_target");
        copy->removeArguments(wr.lock()); check(wr.expired(),"native_argument_copy_releases_removed_target");
        copy.reset(); check(wc.expired(),"native_argument_copy_final_release");
    }
    {
        auto original=new_Function("ff(x)=x+1");
        auto first=std::make_shared<Function>(*original);
        auto second=std::make_shared<Function>(*first);
        std::weak_ptr<Function> wo=original,wf=first,ws=second;
        original->removeFunctions(original);
        second->addFunctions(second);
        first.reset(); second.reset();
        check(wf.expired(),"shared_body_unused_copy_releases");
        check(!ws.expired(),"original_retains_new_shared_body_definition");
        original->removeAllFunctions();
        check(ws.expired(),"shared_body_new_self_releases_after_removal");
        original.reset(); check(wo.expired(),"shared_body_original_final_release");
    }
    {
        auto original=new_Function("ff(x)=x+1"); auto peer=std::make_shared<Function>(*original);
        peer->setFunctionName("gg"); original->addFunctions(peer);
        std::weak_ptr<Function> wo=original,wp=peer; peer.reset();
        check(!wp.expired(),"aliased_mutual_dependency_retained");
        original->removeFunctions(original);
        check(!wp.expired(),"aliased_surviving_owner_retains_peer_after_break");
        check(original->getFunction("gg")==wp.lock(),"aliased_dependency_identity_after_break");
        original.reset(); check(wo.expired()&&wp.expired(),"aliased_mutual_cycle_break_final_release");
    }
    {
        auto source=new_Function("ff(x)=x+1"); std::atomic<bool> valid{true};
        auto worker=[&]() {
            for(int i=0;i<400;i++) {
                auto copy=std::make_shared<Function>(*source);
                if(static_cast<const Function&>(*copy).getFunction(0)!=source) valid=false;
            }
        };
        std::thread a(worker),b(worker); a.join(); b.join();
        check(valid,"parallel_native_copy_identity");
        std::weak_ptr<Function> ws=source; source.reset();
        check(ws.expired(),"parallel_native_copy_final_release");
    }
    std::cout << "ASSERTIONS " << assertions << " PASS\n";
}

namespace {
void assertRuntimeArgumentsEquivalent(const ArgumentPtr& a,const ArgumentPtr& b){
 check(*a->getArgumentName()==*b->getArgumentName(),"argument name");
 check(*a->getArgumentExpressionString()==*b->getArgumentExpressionString(),"argument body");
 check(a->getArgumentType()==b->getArgumentType(),"argument type");
 check(a->getArgumentsNumber()==b->getArgumentsNumber(),"argument definitions count");
 check(a->getArgumentValue()==b->getArgumentValue(),"argument value");
}
void assertRuntimeFunctionsEquivalent(const FunctionPtr& a,const FunctionPtr& b){
 check(*a->getFunctionName()==*b->getFunctionName(),"function name");
 check(*a->getFunctionExpressionString()==*b->getFunctionExpressionString(),"function body");
 check(a->getParametersNumber()==b->getParametersNumber(),"function parameter count");
 check(a->getArgumentsNumber()==b->getArgumentsNumber(),"function argument count");
 check(a->getFunctionsNumber()==b->getFunctionsNumber(),"function definition count");
 for(int i=0;i<a->getFunctionsNumber();i++)check(*a->getFunction(i)->getFunctionName()==*b->getFunction(i)->getFunctionName(),"definition order including intrinsic self");
 check(a->calculate(4.0)==b->calculate(4.0),"function result");
}
}

TEST_CASE("testVariadicRuntimeCollections", "[API][Interop]") {
 assertions=0;

 const StringPtr yy=S("yy"), yyBody=S("xx^2+cc"), ffName=S("ff"), ffBody=S("t+cc");
 auto x=new_Argument("xx",3);auto c=new_Constant("cc",5);auto g=new_Function("gg(t)=t+1");
 const auto elements=new_List<PrimitiveElementPtr>();elements->add(x);elements->add(c);elements->add(g);
 assertRuntimeArgumentsEquivalent(new_Argument(S("yy=xx^2+cc"),x,c,g),new_Argument(S("yy=xx^2+cc"),elements));
 assertRuntimeArgumentsEquivalent(new_Argument(yy,yyBody,x,c,g),new_Argument(yy,yyBody,elements));
 assertRuntimeArgumentsEquivalent(new_Argument(S("yy=2+2"),true,x,c,g),new_Argument(S("yy=2+2"),true,elements));
 const auto constants=new_List<PrimitiveElementPtr>();constants->add(c);constants->add(g);
 assertRuntimeFunctionsEquivalent(new_Function(S("ff(t)=t+cc"),c,g),new_Function(S("ff(t)=t+cc"),constants));
 const auto names=new_List<StringPtr>();names->add(S("t"));
 assertRuntimeFunctionsEquivalent(new_Function(ffName,ffBody,S("t"),c,g),new_Function(ffName,ffBody,names,constants));
 auto ra=new_RecursiveArgument(S("rr(n)=rr(n-1)+cc"),c,g);
 auto rb=new_RecursiveArgument(S("rr(n)=rr(n-1)+cc"),constants);
 ra->addBaseCase(0,0);rb->addBaseCase(0,0);check(ra->getArgumentValue(3)==rb->getArgumentValue(3),"recursive definition collection");
 auto n=new_Argument("nn");
 const StringPtr rr=S("rr"),rrBody=S("rr(nn-1)+cc");
 auto rna=new_RecursiveArgument(rr,rrBody,n,c,g);
 auto rnb=new_RecursiveArgument(rr,rrBody,n,constants);
 rna->addBaseCase(0,0);rnb->addBaseCase(0,0);check(rna->getArgumentValue(3)==rnb->getArgumentValue(3),"recursive index collection");
 auto f=new_Function("ff(za,zb,zc,zd,ze)=za+10*zb+100*zc+1000*zd+10000*ze");
 const auto numbers=new_List<double>();numbers->add(1);
 const auto aa=new_List<ArgumentPtr>();aa->add(new_Argument("aa",2));
 const auto cc=new_List<ConstantPtr>();cc->add(new_Constant("cc",3));
 const auto ff=new_List<FunctionPtr>();ff->add(new_Function("gg(tt)=tt+2"));ff->get(0)->setArgumentValue(0,2);
 const auto ee=new_List<ExpressionPtr>();ee->add(new_Expression("5"));
 check(f->calculate(numbers,aa,cc,ff,ee)==54321,"mixed runtime collections");
 check(f->calculate(ee->get(0),cc->get(0),aa->get(0),ff->get(0),1.0)==54321,"existing native grouping order");
 const auto manyNames=new_List<StringPtr>();const auto manyNumbers=new_List<double>();
 String body=L"0";
 for(int i=0;i<37;i++){manyNames->add(S(std::string("p")+std::to_string(i)));manyNumbers->add(1);body+=L"+p"+std::to_wstring(i);}
 const StringPtr manyName=S("many"),manyBody=S(body);
 auto many=new_Function(manyName,manyBody,manyNames);
 // Force generic pack forwarding via a second empty collection, beyond small arity switches.
 const auto emptyNumbers=new_List<double>();
 check(many->calculate(manyNumbers,emptyNumbers)==37,"runtime collection has no fixed arity cap");
 const auto nulls=new_List<PrimitiveElementPtr>();nulls->add(PrimitiveElementPtr{});
 auto badPack=new_Function(S("bb(t)=t"),PrimitiveElementPtr{});
 auto badList=new_Function(S("bb(t)=t"),nulls);
 check(*badPack->getErrorMessage()==*badList->getErrorMessage(),"native all-null parameter accounting");
 const auto emptyElements=new_List<PrimitiveElementPtr>();
 assertRuntimeFunctionsEquivalent(new_Function(S("empty(t)=t+1")),new_Function(S("empty(t)=t+1"),emptyElements));
 std::weak_ptr<Function> wm=many;many.reset();check(wm.expired(),"forwarding does not retain factory result");

 const ListPtr<PrimitiveElementPtr> absent;
 VariadicProcessorUdfs processor;
 REQUIRE_THROWS_AS(processor.processArgs(absent),std::invalid_argument);
}

namespace ownership_test {
struct TrackedSerializationExtension final : ArgumentExtension,
    std::enable_shared_from_this<TrackedSerializationExtension> {
    static inline int alive=0;
    static inline std::vector<std::weak_ptr<TrackedSerializationExtension>> loaded;
    int marker=7;
    TrackedSerializationExtension(){++alive;}
    ~TrackedSerializationExtension(){--alive;}
    double getArgumentValue() override{return marker;}
    ArgumentExtensionPtr clone() override{return std::make_shared<TrackedSerializationExtension>();}
    template<class Archive> void serialize(Archive& archive){
        archive(marker);
        if constexpr(Archive::is_loading::value) loaded.push_back(shared_from_this());
    }
};
}
CEREAL_REGISTER_TYPE(ownership_test::TrackedSerializationExtension)
CEREAL_REGISTER_POLYMORPHIC_RELATION(org::mariuszgromada::math::mxparser::ArgumentExtension,
                                   ownership_test::TrackedSerializationExtension)

TEST_CASE("testOwnershipFailedDeserialization", "[API][Ownership]") {
 using Tracked=ownership_test::TrackedSerializationExtension;
 const bool wasEnabled=SerializationUtils::isBinarySerializationEnabled();
 struct RestoreSerializationMode {
     bool enabled;
     ~RestoreSerializationMode(){
         if(enabled) SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();
         else SerializationUtils::disableBinarySerialization();
     }
 } restore{wasEnabled};
 SerializationUtils::disableBinarySerialization();
 const VectorPtr<char> absent;
 REQUIRE(SerializationUtils::deserializeFromBytes<Function>(absent)==nullptr);
 REQUIRE_FALSE(SerializationUtils::checkLastOperationWasSuccessful());
 SerializationUtils::enableBinarySerializationIamAwareOfSecurityRisks();

 auto survivorArgument=new_Argument("zz",11);
 auto survivor=new_Expression("zz+1",survivorArgument);
 std::weak_ptr<Expression> weakSurvivor=survivor;
 auto fa=new_Function("fa(tt)=tt+1"),fb=new_Function("fb(tt)=tt+2");
 fa->addFunctions(fb);fb->addFunctions(fa);
 ArgumentExtensionPtr ea=std::make_shared<Tracked>(),eb=std::make_shared<Tracked>();
 fa->addArguments(new_Argument("markerA",ea));fb->addArguments(new_Argument("markerB",eb));
 ea.reset();eb.reset();
 auto bytes=SerializationUtils::serializeToBytes(fa);
 REQUIRE(bytes!=nullptr);
 std::weak_ptr<Function> wa=fa,wb=fb;
 fa->removeFunctions(fb);fa.reset();fb.reset();
 REQUIRE(wa.expired());REQUIRE(wb.expired());REQUIRE(Tracked::alive==0);

 size_t prefixes=0;
 for(size_t size=0;size<bytes->size();++size){
     INFO("truncated prefix "<<size<<" of "<<bytes->size());
     Tracked::loaded.clear();
     auto prefix=std::make_shared<std::vector<char>>(bytes->begin(),bytes->begin()+size);
     auto loaded=SerializationUtils::deserializeFromBytes<Function>(prefix);
     REQUIRE(loaded==nullptr);
     REQUIRE_FALSE(SerializationUtils::checkLastOperationWasSuccessful());
     for(const auto& weak:Tracked::loaded) REQUIRE(weak.expired());
     REQUIRE(Tracked::alive==0);
     if(size%127==0){REQUIRE(survivor->calculate()==12);REQUIRE_FALSE(weakSurvivor.expired());}
     ++prefixes;
 }
 REQUIRE(prefixes==bytes->size());
 REQUIRE(prefixes>0);
 auto full=SerializationUtils::deserializeFromBytes<Function>(bytes);
 REQUIRE(full!=nullptr);
 REQUIRE(full->calculate(3.0)==4);
 auto peer=full->getFunction("fb");
 REQUIRE(peer!=nullptr);
 REQUIRE(peer->getFunction("fa")==full);
 REQUIRE(peer->calculate(3.0)==5);
 std::weak_ptr<Function> weakFull=full,weakPeer=peer;
 full->removeFunctions(peer);
 full.reset();
 REQUIRE_FALSE(weakFull.expired());
 REQUIRE(peer->getFunction("fa")==weakFull.lock());
 peer.reset();
 REQUIRE(weakFull.expired());REQUIRE(weakPeer.expired());
 REQUIRE(Tracked::alive==0);
 for(const auto& weak:Tracked::loaded) REQUIRE(weak.expired());
 Tracked::loaded.clear();
 REQUIRE(survivor->calculate()==12);
 survivor.reset();survivorArgument.reset();
 REQUIRE(weakSurvivor.expired());
 std::cout<<"FAILED_LOAD_PREFIXES "<<prefixes<<" PASS\n";
}
