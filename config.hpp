/*
 * Copyright (c) 2021, NVIDIA CORPORATION.  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * SPDX-FileCopyrightText: Copyright (c) 2014-2021 NVIDIA CORPORATION
 * SPDX-License-Identifier: Apache-2.0
 */

/** This file is to configure test  */

#define USE_FLOAT 1  // Or will use half floats (buffer + half == not supported)


// Bindings
#define B_BVH 0
#define B_SCENE 1
#define B_PRIM_INFO 2
#define B_VERTEX 3
#define B_INDEX 4
#define B_NORMAL 5
#define B_MATERIAL 6
#define B_IMAGES 7
