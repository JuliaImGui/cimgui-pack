// this file was auto-generated by wrapit v1.4.0
#include "Wrapper.h"

#include "jlImGuiTestEngine.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<ImGuiTestCoroutineInterface> : std::false_type { };
  template<> struct DefaultConstructible<ImGuiTestCoroutineInterface> : std::false_type { };
}

// Class generating the wrapper for type ImGuiTestCoroutineInterface
// signature to use in the veto file: ImGuiTestCoroutineInterface
struct JlImGuiTestCoroutineInterface: public Wrapper {

  JlImGuiTestCoroutineInterface(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type ImGuiTestCoroutineInterface (" __HERE__ ")");
    // defined in ./imgui_test_engine/imgui_test_engine/imgui_te_coroutine.h:31:18
    jlcxx::TypeWrapper<ImGuiTestCoroutineInterface>  t = jlModule.add_type<ImGuiTestCoroutineInterface>("ImGuiTestCoroutineInterface");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<ImGuiTestCoroutineInterface>>(new jlcxx::TypeWrapper<ImGuiTestCoroutineInterface>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<ImGuiTestCoroutineInterface>> type_;
};
std::shared_ptr<Wrapper> newJlImGuiTestCoroutineInterface(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlImGuiTestCoroutineInterface(module));
}
