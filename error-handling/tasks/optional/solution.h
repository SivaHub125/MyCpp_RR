#pragma once
#include <string>
#include <optional>
#include <cctype>

std::optional<int> parseInteger(const std::string& s) {
    if (s.empty()) {
        return std::nullopt;
    }
    for (size_t i = (s[0] == '-' ? 1 : 0); i < s.length(); ++i) {
        if (!std::isdigit(s[i])) {
            return std::nullopt;
        }
    }
    try {
        std::size_t pos;
        int value = std::stoi(s, &pos);
        if (pos != s.length()) {
            return std::nullopt;
        }
        return value;
    } catch (const std::invalid_argument e) {
        return std::nullopt;
    } catch (const std::out_of_range e) {
        return std::nullopt;
    }
}
