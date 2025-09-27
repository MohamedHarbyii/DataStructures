#include <iostream>
#include <stack>
#include <vector>
#include <algorithm> // عشان نستخدم دالة reverse

// الدالة اللي بتحل المسألة
std::vector<int> nextGreaterElement(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> result;
    std::stack<int> st;

    // 3. هنبدأ اللوب من اليمين للشمال
    for (int i = n - 1; i >= 0; i--) {
        // 3.أولاً: فضّي الستاك من أي عنصر أصغر من العنصر الحالي
        while (!st.empty() && st.top() <= nums[i]) {
            st.pop();
        }

        // 3.ثانيًا: حدد الإجابة بناءً على حالة الستاك
        if (st.empty()) {
            result.push_back(-1);
        } else {
            result.push_back(st.top());
        }

        // 3.ثالثًا: ضيف العنصر الحالي للستاك
        st.push(nums[i]);
    }

    // 4. اعكس النتيجة عشان تكون بالترتيب الصحيح
    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    std::vector<int> nums = {4, 5, 2, 10};
    std::vector<int> result = nextGreaterElement(nums);

    std::cout << "Input:  [4, 5, 2, 10]" << std::endl;
    std::cout << "Output: [";
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << (i == result.size() - 1 ? "" : ", ");
    }
    std::cout << "]" << std::endl; // المفروض يطبع [5, 10, 10, -1]

    return 0;
}