#pragma once
#include "IApplication.hpp"
#include "GfxConfiguration.h"

namespace My {
  class BaseApplication : implements IApplication {
    public:
      BaseApplication(GfxConfiguration& cfg);
      virtual int  Initialize();
      virtual void Finalize();
      virtual void Tick();

      virtual bool IsQuit();
    
    protected:
      static bool m_bQuit; // 用于记录应用是否被通知退出
      GfxConfiguration m_Config;
    
    private:
      BaseApplication() {};
  };
}