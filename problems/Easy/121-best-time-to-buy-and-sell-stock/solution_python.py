from sys import maxsize
from typing import List

class Solution:
    def Maximum_Crossing_Profit(self, array: List[int], left_index: int, mid_index: int, right_index: int) -> int:
        left_min = min(array[left_index:mid_index+1])
        right_max = max(array[mid_index+1:right_index+1])
        return right_max - left_min

    def maxProfit(self, prices: List[int]) -> int:
        def max_profit_divide_conquer(array, left_index, right_index):
            if left_index >= right_index:
                return 0

            mid_index = (left_index + right_index) // 2
            left_profit = max_profit_divide_conquer(array, left_index, mid_index)
            right_profit = max_profit_divide_conquer(array, mid_index + 1, right_index)
            cross_profit = self.Maximum_Crossing_Profit(array, left_index, mid_index, right_index)

            return max(left_profit, right_profit, cross_profit)

        return max_profit_divide_conquer(prices, 0, len(prices) - 1)
