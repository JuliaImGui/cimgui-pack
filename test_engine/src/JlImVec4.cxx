// this file was auto-generated by wrapit v1.4.0
#include "Wrapper.h"

#include "jlImGuiTestEngine.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<ImVec4> : std::false_type { };
  template<> struct DefaultConstructible<ImVec4> : std::false_type { };
}

// Class generating the wrapper for type ImVec4
// signature to use in the veto file: ImVec4
struct JlImVec4: public Wrapper {

  JlImVec4(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type ImVec4 (" __HERE__ ")");
    // defined in ../cimgui/imgui/imgui.h:312:8
    jlcxx::TypeWrapper<ImVec4>  t = jlModule.add_type<ImVec4>("ImVec4");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<ImVec4>>(new jlcxx::TypeWrapper<ImVec4>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<ImVec4>> type_;
};
std::shared_ptr<Wrapper> newJlImVec4(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlImVec4(module));
}
