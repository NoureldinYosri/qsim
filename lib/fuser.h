// Copyright 2019 Google LLC. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef FUSER_H_
#define FUSER_H_

#include <vector>

#include "gate.h"

namespace qsim {

template <typename Gate>
struct GateFused {
  GateKind kind;  // kind of the (first) master gate.
  unsigned time;
  unsigned num_qubits;
  unsigned qubits[3];
  const Gate* pmaster;
  std::vector<const Gate*> gates;
};

}  // namespace qsim

#endif  // FUSER_H_
