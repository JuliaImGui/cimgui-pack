// this file was auto-generated by wrapit v1.4.0
#include "Wrapper.h"

#include "jlImGuiTestEngine.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<ImGuiPerfToolEntry> : std::false_type { };
  template<> struct DefaultConstructible<ImGuiPerfToolEntry> : std::false_type { };
}

// Class generating the wrapper for type ImGuiPerfToolEntry
// signature to use in the veto file: ImGuiPerfToolEntry
struct JlImGuiPerfToolEntry: public Wrapper {

  JlImGuiPerfToolEntry(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type ImGuiPerfToolEntry (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:24:18
    jlcxx::TypeWrapper<ImGuiPerfToolEntry>  t = jlModule.add_type<ImGuiPerfToolEntry>("ImGuiPerfToolEntry");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<ImGuiPerfToolEntry>>(new jlcxx::TypeWrapper<ImGuiPerfToolEntry>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void ImGuiPerfToolEntry::ImGuiPerfToolEntry(const ImGuiPerfToolEntry &) (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:45:5
    t.constructor<const ImGuiPerfToolEntry &>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for ImGuiPerfToolEntry & ImGuiPerfToolEntry::operator=(const ImGuiPerfToolEntry &) (" __HERE__ ")");
    // signature to use in the veto list: ImGuiPerfToolEntry & ImGuiPerfToolEntry::operator=(const ImGuiPerfToolEntry &)
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:46:25
    t.method("assign", static_cast<ImGuiPerfToolEntry & (ImGuiPerfToolEntry::*)(const ImGuiPerfToolEntry &) >(&ImGuiPerfToolEntry::operator=));

    DEBUG_MSG("Adding wrapper for void ImGuiPerfToolEntry::Set(const ImGuiPerfToolEntry &) (" __HERE__ ")");
    // signature to use in the veto list: void ImGuiPerfToolEntry::Set(const ImGuiPerfToolEntry &)
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:47:10
    t.method("Set", static_cast<void (ImGuiPerfToolEntry::*)(const ImGuiPerfToolEntry &) >(&ImGuiPerfToolEntry::Set));

    DEBUG_MSG("Adding Timestamp methods  to provide read access to the field Timestamp (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:26:33
    // signature to use in the veto list: ImGuiPerfToolEntry::Timestamp
    t.method("Timestamp", [](const ImGuiPerfToolEntry& a) -> ImU64 { return a.Timestamp; });
    t.method("Timestamp", [](ImGuiPerfToolEntry& a) -> ImU64 { return a.Timestamp; });
    t.method("Timestamp", [](const ImGuiPerfToolEntry* a) -> ImU64 { return a->Timestamp; });
    t.method("Timestamp", [](ImGuiPerfToolEntry* a) -> ImU64 { return a->Timestamp; });
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:26:33
    // signature to use in the veto list: ImGuiPerfToolEntry::Timestamp
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding Timestamp! methods to provide write access to the field Timestamp (" __HERE__ ")");
    t.method("Timestamp!", [](ImGuiPerfToolEntry& a, ImU64 val) -> ImU64 { return a.Timestamp = val; });

    DEBUG_MSG("Adding Timestamp! methods to provide write access to the field Timestamp (" __HERE__ ")");
    t.method("Timestamp!", [](ImGuiPerfToolEntry* a, ImU64 val) -> ImU64 { return a->Timestamp = val; });

    DEBUG_MSG("Adding Category methods  to provide read access to the field Category (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:27:33
    // signature to use in the veto list: ImGuiPerfToolEntry::Category
    t.method("Category", [](const ImGuiPerfToolEntry& a) -> const char * { return a.Category; });
    t.method("Category", [](const ImGuiPerfToolEntry* a) -> const char * { return a->Category; });

    DEBUG_MSG("Adding TestName methods  to provide read access to the field TestName (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:28:33
    // signature to use in the veto list: ImGuiPerfToolEntry::TestName
    t.method("TestName", [](const ImGuiPerfToolEntry& a) -> const char * { return a.TestName; });
    t.method("TestName", [](const ImGuiPerfToolEntry* a) -> const char * { return a->TestName; });

    DEBUG_MSG("Adding DtDeltaMs methods  to provide read access to the field DtDeltaMs (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:29:33
    // signature to use in the veto list: ImGuiPerfToolEntry::DtDeltaMs
    t.method("DtDeltaMs", [](const ImGuiPerfToolEntry& a) -> double { return a.DtDeltaMs; });
    t.method("DtDeltaMs", [](ImGuiPerfToolEntry& a) -> double { return a.DtDeltaMs; });
    t.method("DtDeltaMs", [](const ImGuiPerfToolEntry* a) -> double { return a->DtDeltaMs; });
    t.method("DtDeltaMs", [](ImGuiPerfToolEntry* a) -> double { return a->DtDeltaMs; });
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:29:33
    // signature to use in the veto list: ImGuiPerfToolEntry::DtDeltaMs
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding DtDeltaMs! methods to provide write access to the field DtDeltaMs (" __HERE__ ")");
    t.method("DtDeltaMs!", [](ImGuiPerfToolEntry& a, double val) -> double { return a.DtDeltaMs = val; });

    DEBUG_MSG("Adding DtDeltaMs! methods to provide write access to the field DtDeltaMs (" __HERE__ ")");
    t.method("DtDeltaMs!", [](ImGuiPerfToolEntry* a, double val) -> double { return a->DtDeltaMs = val; });

    DEBUG_MSG("Adding DtDeltaMsMin methods  to provide read access to the field DtDeltaMsMin (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:30:33
    // signature to use in the veto list: ImGuiPerfToolEntry::DtDeltaMsMin
    t.method("DtDeltaMsMin", [](const ImGuiPerfToolEntry& a) -> double { return a.DtDeltaMsMin; });
    t.method("DtDeltaMsMin", [](ImGuiPerfToolEntry& a) -> double { return a.DtDeltaMsMin; });
    t.method("DtDeltaMsMin", [](const ImGuiPerfToolEntry* a) -> double { return a->DtDeltaMsMin; });
    t.method("DtDeltaMsMin", [](ImGuiPerfToolEntry* a) -> double { return a->DtDeltaMsMin; });
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:30:33
    // signature to use in the veto list: ImGuiPerfToolEntry::DtDeltaMsMin
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding DtDeltaMsMin! methods to provide write access to the field DtDeltaMsMin (" __HERE__ ")");
    t.method("DtDeltaMsMin!", [](ImGuiPerfToolEntry& a, double val) -> double { return a.DtDeltaMsMin = val; });

    DEBUG_MSG("Adding DtDeltaMsMin! methods to provide write access to the field DtDeltaMsMin (" __HERE__ ")");
    t.method("DtDeltaMsMin!", [](ImGuiPerfToolEntry* a, double val) -> double { return a->DtDeltaMsMin = val; });

    DEBUG_MSG("Adding DtDeltaMsMax methods  to provide read access to the field DtDeltaMsMax (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:31:33
    // signature to use in the veto list: ImGuiPerfToolEntry::DtDeltaMsMax
    t.method("DtDeltaMsMax", [](const ImGuiPerfToolEntry& a) -> double { return a.DtDeltaMsMax; });
    t.method("DtDeltaMsMax", [](ImGuiPerfToolEntry& a) -> double { return a.DtDeltaMsMax; });
    t.method("DtDeltaMsMax", [](const ImGuiPerfToolEntry* a) -> double { return a->DtDeltaMsMax; });
    t.method("DtDeltaMsMax", [](ImGuiPerfToolEntry* a) -> double { return a->DtDeltaMsMax; });
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:31:33
    // signature to use in the veto list: ImGuiPerfToolEntry::DtDeltaMsMax
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding DtDeltaMsMax! methods to provide write access to the field DtDeltaMsMax (" __HERE__ ")");
    t.method("DtDeltaMsMax!", [](ImGuiPerfToolEntry& a, double val) -> double { return a.DtDeltaMsMax = val; });

    DEBUG_MSG("Adding DtDeltaMsMax! methods to provide write access to the field DtDeltaMsMax (" __HERE__ ")");
    t.method("DtDeltaMsMax!", [](ImGuiPerfToolEntry* a, double val) -> double { return a->DtDeltaMsMax = val; });

    DEBUG_MSG("Adding NumSamples methods  to provide read access to the field NumSamples (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:32:33
    // signature to use in the veto list: ImGuiPerfToolEntry::NumSamples
    t.method("NumSamples", [](const ImGuiPerfToolEntry& a) -> int { return a.NumSamples; });
    t.method("NumSamples", [](ImGuiPerfToolEntry& a) -> int { return a.NumSamples; });
    t.method("NumSamples", [](const ImGuiPerfToolEntry* a) -> int { return a->NumSamples; });
    t.method("NumSamples", [](ImGuiPerfToolEntry* a) -> int { return a->NumSamples; });
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:32:33
    // signature to use in the veto list: ImGuiPerfToolEntry::NumSamples
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding NumSamples! methods to provide write access to the field NumSamples (" __HERE__ ")");
    t.method("NumSamples!", [](ImGuiPerfToolEntry& a, int val) -> int { return a.NumSamples = val; });

    DEBUG_MSG("Adding NumSamples! methods to provide write access to the field NumSamples (" __HERE__ ")");
    t.method("NumSamples!", [](ImGuiPerfToolEntry* a, int val) -> int { return a->NumSamples = val; });

    DEBUG_MSG("Adding PerfStressAmount methods  to provide read access to the field PerfStressAmount (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:33:33
    // signature to use in the veto list: ImGuiPerfToolEntry::PerfStressAmount
    t.method("PerfStressAmount", [](const ImGuiPerfToolEntry& a) -> int { return a.PerfStressAmount; });
    t.method("PerfStressAmount", [](ImGuiPerfToolEntry& a) -> int { return a.PerfStressAmount; });
    t.method("PerfStressAmount", [](const ImGuiPerfToolEntry* a) -> int { return a->PerfStressAmount; });
    t.method("PerfStressAmount", [](ImGuiPerfToolEntry* a) -> int { return a->PerfStressAmount; });
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:33:33
    // signature to use in the veto list: ImGuiPerfToolEntry::PerfStressAmount
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding PerfStressAmount! methods to provide write access to the field PerfStressAmount (" __HERE__ ")");
    t.method("PerfStressAmount!", [](ImGuiPerfToolEntry& a, int val) -> int { return a.PerfStressAmount = val; });

    DEBUG_MSG("Adding PerfStressAmount! methods to provide write access to the field PerfStressAmount (" __HERE__ ")");
    t.method("PerfStressAmount!", [](ImGuiPerfToolEntry* a, int val) -> int { return a->PerfStressAmount = val; });

    DEBUG_MSG("Adding GitBranchName methods  to provide read access to the field GitBranchName (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:34:33
    // signature to use in the veto list: ImGuiPerfToolEntry::GitBranchName
    t.method("GitBranchName", [](const ImGuiPerfToolEntry& a) -> const char * { return a.GitBranchName; });
    t.method("GitBranchName", [](const ImGuiPerfToolEntry* a) -> const char * { return a->GitBranchName; });

    DEBUG_MSG("Adding BuildType methods  to provide read access to the field BuildType (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:35:33
    // signature to use in the veto list: ImGuiPerfToolEntry::BuildType
    t.method("BuildType", [](const ImGuiPerfToolEntry& a) -> const char * { return a.BuildType; });
    t.method("BuildType", [](const ImGuiPerfToolEntry* a) -> const char * { return a->BuildType; });

    DEBUG_MSG("Adding Cpu methods  to provide read access to the field Cpu (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:36:33
    // signature to use in the veto list: ImGuiPerfToolEntry::Cpu
    t.method("Cpu", [](const ImGuiPerfToolEntry& a) -> const char * { return a.Cpu; });
    t.method("Cpu", [](const ImGuiPerfToolEntry* a) -> const char * { return a->Cpu; });

    DEBUG_MSG("Adding OS methods  to provide read access to the field OS (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:37:33
    // signature to use in the veto list: ImGuiPerfToolEntry::OS
    t.method("OS", [](const ImGuiPerfToolEntry& a) -> const char * { return a.OS; });
    t.method("OS", [](const ImGuiPerfToolEntry* a) -> const char * { return a->OS; });

    DEBUG_MSG("Adding Compiler methods  to provide read access to the field Compiler (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:38:33
    // signature to use in the veto list: ImGuiPerfToolEntry::Compiler
    t.method("Compiler", [](const ImGuiPerfToolEntry& a) -> const char * { return a.Compiler; });
    t.method("Compiler", [](const ImGuiPerfToolEntry* a) -> const char * { return a->Compiler; });

    DEBUG_MSG("Adding Date methods  to provide read access to the field Date (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:39:33
    // signature to use in the veto list: ImGuiPerfToolEntry::Date
    t.method("Date", [](const ImGuiPerfToolEntry& a) -> const char * { return a.Date; });
    t.method("Date", [](const ImGuiPerfToolEntry* a) -> const char * { return a->Date; });

    DEBUG_MSG("Adding VsBaseline methods  to provide read access to the field VsBaseline (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:41:33
    // signature to use in the veto list: ImGuiPerfToolEntry::VsBaseline
    t.method("VsBaseline", [](const ImGuiPerfToolEntry& a) -> double { return a.VsBaseline; });
    t.method("VsBaseline", [](ImGuiPerfToolEntry& a) -> double { return a.VsBaseline; });
    t.method("VsBaseline", [](const ImGuiPerfToolEntry* a) -> double { return a->VsBaseline; });
    t.method("VsBaseline", [](ImGuiPerfToolEntry* a) -> double { return a->VsBaseline; });
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:41:33
    // signature to use in the veto list: ImGuiPerfToolEntry::VsBaseline
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding VsBaseline! methods to provide write access to the field VsBaseline (" __HERE__ ")");
    t.method("VsBaseline!", [](ImGuiPerfToolEntry& a, double val) -> double { return a.VsBaseline = val; });

    DEBUG_MSG("Adding VsBaseline! methods to provide write access to the field VsBaseline (" __HERE__ ")");
    t.method("VsBaseline!", [](ImGuiPerfToolEntry* a, double val) -> double { return a->VsBaseline = val; });

    DEBUG_MSG("Adding LabelIndex methods  to provide read access to the field LabelIndex (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:42:33
    // signature to use in the veto list: ImGuiPerfToolEntry::LabelIndex
    t.method("LabelIndex", [](const ImGuiPerfToolEntry& a) -> int { return a.LabelIndex; });
    t.method("LabelIndex", [](ImGuiPerfToolEntry& a) -> int { return a.LabelIndex; });
    t.method("LabelIndex", [](const ImGuiPerfToolEntry* a) -> int { return a->LabelIndex; });
    t.method("LabelIndex", [](ImGuiPerfToolEntry* a) -> int { return a->LabelIndex; });
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_perftool.h:42:33
    // signature to use in the veto list: ImGuiPerfToolEntry::LabelIndex
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding LabelIndex! methods to provide write access to the field LabelIndex (" __HERE__ ")");
    t.method("LabelIndex!", [](ImGuiPerfToolEntry& a, int val) -> int { return a.LabelIndex = val; });

    DEBUG_MSG("Adding LabelIndex! methods to provide write access to the field LabelIndex (" __HERE__ ")");
    t.method("LabelIndex!", [](ImGuiPerfToolEntry* a, int val) -> int { return a->LabelIndex = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<ImGuiPerfToolEntry>> type_;
};
std::shared_ptr<Wrapper> newJlImGuiPerfToolEntry(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlImGuiPerfToolEntry(module));
}
