from mpl_toolkits import mplot3d



import numpy as np
import matplotlib.pyplot  as plt

fig = plt.figure()
ax = plt.axes(projection='3d')

def f(x,y):
    return np.sin(.15*(x**2+y**2))

x = np.linspace(-6, 6, 30)
y = np.linspace(-6, 6, 30)

X, Y = np.meshgrid(x, y)
Z = f(X, Y)

fig = plt.figure()
ax = plt.axes(projection='3d')

ax = plt.axes(projection='3d')
ax.plot_surface(X, Y, Z, rstride=1, cstride=1,
                cmap='viridis', edgecolor='none')
ax.set_title('Graph of: z=sin(.15*(x**2+y**2)) - johnhs3');

ax.set_xlabel('X')
ax.set_ylabel('Y')
ax.set_zlabel('Z');
