#pragma once
#include "Interface.hpp"
#include "IRuntimeModule.hpp"

namespace My {
  Interface IApplication : implements IRuntimeModule {
    public:
      virtual int  Initialize() = 0;
      virtual void Finalize() = 0;
      virtual void Tick() = 0; // 在一次main的循环中, 只执行一次

      virtual bool IsQuit() = 0;
  };
}