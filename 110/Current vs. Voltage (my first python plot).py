import numpy as np
import matplotlib.pyplot  as plt

voltage = np.array([0,3,4,5,6,7.2])
current = np.array([0,75,84,95,102,111])

plt.figure()
plt.plot(voltage,current)
plt.title("Current Through a Motor with Varying Voltages Across it -- johnhs3")
plt.xlabel("Voltage (V)")
plt.ylabel("Current (mA)")
plt.grid(axis='both')