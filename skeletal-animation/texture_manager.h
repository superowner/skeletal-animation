//
//  texture_manager.h
//  skinned-animation
//
//  Created by tigertang on 2018/8/3.
//  Copyright © 2018 tigertang. All rights reserved.
//

#pragma once

#include <filesystem>

class TextureManager {
public:
    static uint32_t LoadTexture(std::filesystem::path);
};
