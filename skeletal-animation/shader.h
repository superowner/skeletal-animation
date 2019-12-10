//
//  shader.h
//  skinned-animation
//
//  Created by tigertang on 2018/8/3.
//  Copyright © 2018 tigertang. All rights reserved.
//

#pragma once

#include <string>

#include <filesystem>

class Shader {
public:
    Shader() = delete;
    Shader(std::filesystem::path vs_path, std::filesystem::path fs_path);
    Shader(std::string vs_source, std::string fs_source);
    void Use() const;
    template <typename T> void SetUniform(const std::string &identifier, const T&) const;
    
private:
    static uint32_t Compile(uint32_t type, const std::string &source, std::filesystem::path path);
    static uint32_t Link(uint32_t vs_id, uint32_t fs_id);
    
    uint32_t id;
};
