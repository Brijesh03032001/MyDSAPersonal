class Solution:
    def angleClock(self, hour: int, minutes: int) -> float:
        minutesAngle = minutes * 6
        hourAngle = (((hour % 12) * 30) + ((minutes / 60) * 30))
        angle = abs(hourAngle - minutesAngle)
        return min(angle, 360 - angle)