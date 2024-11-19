// this file was auto-generated by wrapit v1.4.0
#include "Wrapper.h"

#include "jlImGuiTestEngine.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<ImGuiTestInput> : std::false_type { };
  template<> struct DefaultConstructible<ImGuiTestInput> : std::false_type { };
}

// Class generating the wrapper for type ImGuiTestInput
// signature to use in the veto file: ImGuiTestInput
struct JlImGuiTestInput: public Wrapper {

  JlImGuiTestInput(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type ImGuiTestInput (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:76:8
    jlcxx::TypeWrapper<ImGuiTestInput>  t = jlModule.add_type<ImGuiTestInput>("ImGuiTestInput");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<ImGuiTestInput>>(new jlcxx::TypeWrapper<ImGuiTestInput>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);

    DEBUG_MSG("Adding wrapper for ImGuiTestInput ImGuiTestInput::ForKeyChord(ImGuiKeyChord, bool) (" __HERE__ ")");
    // signature to use in the veto list: ImGuiTestInput ImGuiTestInput::ForKeyChord(ImGuiKeyChord, bool)
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:85:29
    module_.method("ImGuiTestInput!ForKeyChord", static_cast<ImGuiTestInput (*)(ImGuiKeyChord, bool) >(&ImGuiTestInput::ForKeyChord));

    DEBUG_MSG("Adding wrapper for ImGuiTestInput ImGuiTestInput::ForChar(ImWchar) (" __HERE__ ")");
    // signature to use in the veto list: ImGuiTestInput ImGuiTestInput::ForChar(ImWchar)
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:94:29
    module_.method("ImGuiTestInput!ForChar", static_cast<ImGuiTestInput (*)(ImWchar) >(&ImGuiTestInput::ForChar));

    DEBUG_MSG("Adding wrapper for ImGuiTestInput ImGuiTestInput::ForViewportFocus(ImGuiID) (" __HERE__ ")");
    // signature to use in the veto list: ImGuiTestInput ImGuiTestInput::ForViewportFocus(ImGuiID)
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:102:29
    module_.method("ImGuiTestInput!ForViewportFocus", static_cast<ImGuiTestInput (*)(ImGuiID) >(&ImGuiTestInput::ForViewportFocus));

    DEBUG_MSG("Adding wrapper for ImGuiTestInput ImGuiTestInput::ForViewportSetPos(ImGuiID, const ImVec2 &) (" __HERE__ ")");
    // signature to use in the veto list: ImGuiTestInput ImGuiTestInput::ForViewportSetPos(ImGuiID, const ImVec2 &)
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:110:29
    module_.method("ImGuiTestInput!ForViewportSetPos", static_cast<ImGuiTestInput (*)(ImGuiID, const ImVec2 &) >(&ImGuiTestInput::ForViewportSetPos));

    DEBUG_MSG("Adding wrapper for ImGuiTestInput ImGuiTestInput::ForViewportSetSize(ImGuiID, const ImVec2 &) (" __HERE__ ")");
    // signature to use in the veto list: ImGuiTestInput ImGuiTestInput::ForViewportSetSize(ImGuiID, const ImVec2 &)
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:119:29
    module_.method("ImGuiTestInput!ForViewportSetSize", static_cast<ImGuiTestInput (*)(ImGuiID, const ImVec2 &) >(&ImGuiTestInput::ForViewportSetSize));

    DEBUG_MSG("Adding wrapper for ImGuiTestInput ImGuiTestInput::ForViewportClose(ImGuiID) (" __HERE__ ")");
    // signature to use in the veto list: ImGuiTestInput ImGuiTestInput::ForViewportClose(ImGuiID)
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:128:29
    module_.method("ImGuiTestInput!ForViewportClose", static_cast<ImGuiTestInput (*)(ImGuiID) >(&ImGuiTestInput::ForViewportClose));

    DEBUG_MSG("Adding Type methods  to provide read access to the field Type (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:78:29
    // signature to use in the veto list: ImGuiTestInput::Type
    t.method("Type", [](const ImGuiTestInput& a) -> ImGuiTestInputType { return a.Type; });
    t.method("Type", [](ImGuiTestInput& a) -> ImGuiTestInputType { return a.Type; });
    t.method("Type", [](const ImGuiTestInput* a) -> ImGuiTestInputType { return a->Type; });
    t.method("Type", [](ImGuiTestInput* a) -> ImGuiTestInputType { return a->Type; });
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:78:29
    // signature to use in the veto list: ImGuiTestInput::Type
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding Type! methods to provide write access to the field Type (" __HERE__ ")");
    t.method("Type!", [](ImGuiTestInput& a, ImGuiTestInputType val) -> ImGuiTestInputType { return a.Type = val; });

    DEBUG_MSG("Adding Type! methods to provide write access to the field Type (" __HERE__ ")");
    t.method("Type!", [](ImGuiTestInput* a, ImGuiTestInputType val) -> ImGuiTestInputType { return a->Type = val; });

    DEBUG_MSG("Adding KeyChord methods  to provide read access to the field KeyChord (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:79:29
    // signature to use in the veto list: ImGuiTestInput::KeyChord
    t.method("KeyChord", [](const ImGuiTestInput& a) -> ImGuiKeyChord { return a.KeyChord; });
    t.method("KeyChord", [](ImGuiTestInput& a) -> ImGuiKeyChord { return a.KeyChord; });
    t.method("KeyChord", [](const ImGuiTestInput* a) -> ImGuiKeyChord { return a->KeyChord; });
    t.method("KeyChord", [](ImGuiTestInput* a) -> ImGuiKeyChord { return a->KeyChord; });
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:79:29
    // signature to use in the veto list: ImGuiTestInput::KeyChord
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding KeyChord! methods to provide write access to the field KeyChord (" __HERE__ ")");
    t.method("KeyChord!", [](ImGuiTestInput& a, ImGuiKeyChord val) -> ImGuiKeyChord { return a.KeyChord = val; });

    DEBUG_MSG("Adding KeyChord! methods to provide write access to the field KeyChord (" __HERE__ ")");
    t.method("KeyChord!", [](ImGuiTestInput* a, ImGuiKeyChord val) -> ImGuiKeyChord { return a->KeyChord = val; });

    DEBUG_MSG("Adding Char methods  to provide read access to the field Char (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:80:29
    // signature to use in the veto list: ImGuiTestInput::Char
    t.method("Char", [](const ImGuiTestInput& a) -> ImWchar { return a.Char; });
    t.method("Char", [](ImGuiTestInput& a) -> ImWchar { return a.Char; });
    t.method("Char", [](const ImGuiTestInput* a) -> ImWchar { return a->Char; });
    t.method("Char", [](ImGuiTestInput* a) -> ImWchar { return a->Char; });
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:80:29
    // signature to use in the veto list: ImGuiTestInput::Char
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding Char! methods to provide write access to the field Char (" __HERE__ ")");
    t.method("Char!", [](ImGuiTestInput& a, ImWchar val) -> ImWchar { return a.Char = val; });

    DEBUG_MSG("Adding Char! methods to provide write access to the field Char (" __HERE__ ")");
    t.method("Char!", [](ImGuiTestInput* a, ImWchar val) -> ImWchar { return a->Char = val; });

    DEBUG_MSG("Adding Down methods  to provide read access to the field Down (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:81:29
    // signature to use in the veto list: ImGuiTestInput::Down
    t.method("Down", [](const ImGuiTestInput& a) -> bool { return a.Down; });
    t.method("Down", [](ImGuiTestInput& a) -> bool { return a.Down; });
    t.method("Down", [](const ImGuiTestInput* a) -> bool { return a->Down; });
    t.method("Down", [](ImGuiTestInput* a) -> bool { return a->Down; });
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:81:29
    // signature to use in the veto list: ImGuiTestInput::Down
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding Down! methods to provide write access to the field Down (" __HERE__ ")");
    t.method("Down!", [](ImGuiTestInput& a, bool val) -> bool { return a.Down = val; });

    DEBUG_MSG("Adding Down! methods to provide write access to the field Down (" __HERE__ ")");
    t.method("Down!", [](ImGuiTestInput* a, bool val) -> bool { return a->Down = val; });

    DEBUG_MSG("Adding ViewportId methods  to provide read access to the field ViewportId (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:82:29
    // signature to use in the veto list: ImGuiTestInput::ViewportId
    t.method("ViewportId", [](const ImGuiTestInput& a) -> ImGuiID { return a.ViewportId; });
    t.method("ViewportId", [](ImGuiTestInput& a) -> ImGuiID { return a.ViewportId; });
    t.method("ViewportId", [](const ImGuiTestInput* a) -> ImGuiID { return a->ViewportId; });
    t.method("ViewportId", [](ImGuiTestInput* a) -> ImGuiID { return a->ViewportId; });
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:82:29
    // signature to use in the veto list: ImGuiTestInput::ViewportId
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding ViewportId! methods to provide write access to the field ViewportId (" __HERE__ ")");
    t.method("ViewportId!", [](ImGuiTestInput& a, ImGuiID val) -> ImGuiID { return a.ViewportId = val; });

    DEBUG_MSG("Adding ViewportId! methods to provide write access to the field ViewportId (" __HERE__ ")");
    t.method("ViewportId!", [](ImGuiTestInput* a, ImGuiID val) -> ImGuiID { return a->ViewportId = val; });

    DEBUG_MSG("Adding ViewportPosSize methods  to provide read access to the field ViewportPosSize (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:83:29
    // signature to use in the veto list: ImGuiTestInput::ViewportPosSize
    t.method("ViewportPosSize", [](const ImGuiTestInput& a) -> const ImVec2& { return a.ViewportPosSize; });
    t.method("ViewportPosSize", [](ImGuiTestInput& a) -> ImVec2& { return a.ViewportPosSize; });
    t.method("ViewportPosSize", [](const ImGuiTestInput* a) -> const ImVec2& { return a->ViewportPosSize; });
    t.method("ViewportPosSize", [](ImGuiTestInput* a) -> ImVec2& { return a->ViewportPosSize; });
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_internal.h:83:29
    // signature to use in the veto list: ImGuiTestInput::ViewportPosSize
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding ViewportPosSize! methods to provide write access to the field ViewportPosSize (" __HERE__ ")");
    t.method("ViewportPosSize!", [](ImGuiTestInput& a, const ImVec2& val) -> ImVec2& { return a.ViewportPosSize = val; });

    DEBUG_MSG("Adding ViewportPosSize! methods to provide write access to the field ViewportPosSize (" __HERE__ ")");
    t.method("ViewportPosSize!", [](ImGuiTestInput* a, const ImVec2& val) -> ImVec2& { return a->ViewportPosSize = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<ImGuiTestInput>> type_;
};
std::shared_ptr<Wrapper> newJlImGuiTestInput(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlImGuiTestInput(module));
}