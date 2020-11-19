// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018-2020, The TurtleCoin Developers
// Copyright (c) 2018-2020, The CryptoPayAfrica Developers
// Please see the included LICENSE file for more information.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote
{
    struct CheckpointData
    {
        uint32_t index;
        const char *blockId;
    };
const std::initializer_list<CheckpointData> CHECKPOINTS = {  

 {0, "ee116b833260aafdea79ad9cb01e5430cc2a79b6162d8758d979ebb09352f7d4"},
 {500, "e62dbe827b2eeccfcb771597922cf4a5224b940b051df8f227fd5f5c53019dde"},
 {1000, "fb0511f4839fb0f44db9d3df3728101c356d1b4b50f99a883272a62483c8168a"},
 {1500, "05589d87cbf56effb2eb727b212c34ad8e6009b6ed4015cb6c124cb512adedbd"},
 {2500, "5113ef1008551c15fad11c923f84dd629950f59f5f199e5ad0d9d425b006f628"},
 {3500, "a082e9ad094e2e071d2a0d6d2f0e0226286f653d4feffaf59d0c451716bfda37"},
 {4000, "a2dde27b194be7da8d3c5f2f9b02a1322aca8fcda9bdcc00fc868d08de4e057c"},
 {5000, "654fc8844b0408649d3865ca395664609de14fcb3ce4ab03e1c44354445ad0dc"},
 {6000, "d0785d9d2c99cbe94fe3daa5ec1e71c0b8529a704807590fd93fac0e406188da"},
 {7000, "4eb2b665c63c476f63da972007a8da9296ddba047028448765ee62c55a1e8712"},	
 {8000, "3951cadbadcb23d8e1703267d5975f46a329c8822b07c5c0aaf84271c60329f2"},
 {9000, "fec6afb35c709586804d18fe2202a62b01ee69d2a7003c4b00d8fd41b856f413"},
 {10000, "9c4ce51217fbc39048f48b5eb37c1a07d9f6176904868b5b3326d4e28ffba46e"},
 {11000, "827bcd6e0d6223a27f5d379f0134eaa049403c670a04434a3cc608f6165a2c79"},
 {12000, "1991dd7c2bd4f0c79b5d680d25e73d152a0bd47e5ef4a2e09c5487e3b02b5550"},
 {13000, "b21fba66f55eb696330da3fa8de5563e80d09d8a3069234f3d75057e8b87a02d"}};
}// namespace CryptoNote
