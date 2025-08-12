// Copyright (c) 2023, AgiBot Inc.
// All rights reserved.

#pragma once

#include "aimrt_module_cpp_interface/module_base.h"

class HelloWorldModule2 : public aimrt::ModuleBase {
 public:
  HelloWorldModule2() = default;
  ~HelloWorldModule2() override = default;

  // Override the following functions from ModuleBase

  aimrt::ModuleInfo Info() const override { return aimrt::ModuleInfo{.name = "HelloWorldModule2"}; }

  bool Initialize(aimrt::CoreRef core) override;
  bool Start() override;
  void Shutdown() override;

 private:
  auto GetLogger() { return core_.GetLogger(); }

 private:
  aimrt::CoreRef core_;
};
