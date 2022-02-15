#pragma once
#include <vector>

namespace VectorOperations
{
    template<typename T> void RemoveLower(std::vector<T>& v, T n)
    {
        auto removePositions = remove_if(v.begin(), v.end(), [&](auto const& val){ return val < n; });
        v.erase(removePositions, v.end());
    }
    template<typename T> void RemoveGreater(std::vector<T>& v, T n)
    {
        auto removePositions = remove_if(v.begin(), v.end(), [&](auto const& val){ return val > n; });
        v.erase(removePositions, v.end());
    }
    template<typename T> void RemoveGreaterOrEqual(std::vector<T>& v, T n)
    {
        auto removePositions = remove_if(v.begin(), v.end(), [&](auto const& val){ return val >= n; });
        v.erase(removePositions, v.end());
    }
    template<typename T> void Sort(std::vector<T>& v)
    {
        std::sort(v.begin(), v.end());
    }
    template<typename T> int IndexOf(const std::vector<T>& v, T n)
    {
        return static_cast<int>(upper_bound(v.begin(), v.end(), n) - v.begin());
    }
    template<typename T> int NumberOfGreater(const std::vector<T>& v, T n)
    {
        return static_cast<int>(count_if(v.begin(), v.end(),[&](auto const& val){ return val > n; }));
    }
    template<typename T> int NumberOfLower(const std::vector<T>& v, T n)
    {
        return static_cast<int>(count_if(v.begin(), v.end(),[&](auto const& val){ return val < n; }));
    }
    template<typename T> int NumberOfGreaterOrEqual(const std::vector<T>& v, T n)
    {
        return static_cast<int>(count_if(v.begin(), v.end(),[&](auto const& val){ return val >= n; }));
    }
    template<typename T> int NumberOfLowerOrEqual(const std::vector<T>& v, T n)
    {
        return static_cast<int>(count_if(v.begin(), v.end(),[&](auto const& val){ return val <= n; }));
    }
    template<typename T> T Max(const std::vector<T>& v)
    {
        return *max_element(v.begin(), v.end());
    }
    template<typename T> T Min(const std::vector<T>& v)
    {
        return *min_element(v.begin(), v.end());
    }
}