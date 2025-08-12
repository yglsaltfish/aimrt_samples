// Copyright (c) 2023, AgiBot Inc.
// All rights reserved.

#include "helloworld_module2/helloworld_module.h"
#include "yaml-cpp/yaml.h"  // IWYU pragma: keep

bool HelloWorldModule2::Initialize(aimrt::CoreRef core) {
  core_ = core;

  try {
    // Read custom module configuration
    throw std::runtime_error("fsfs");

  } catch (const std::exception& e) {
    AIMRT_ERROR("Init failed, {}", e.what());
    return false;
  }

  AIMRT_INFO("Init succeeded.");

  return true;
}

bool HelloWorldModule2::Start() {
  // Write your runtime logic here
  AIMRT_INFO("Start succeeded.");
  return true;
}

void HelloWorldModule2::Shutdown() {
  // Write your resource release logic here
  AIMRT_INFO("Shutdown succeeded.");
}
