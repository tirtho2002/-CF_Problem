import random
import matplotlib.pyplot as plt

in_x = []
in_y = []
out_x = []
out_y = []
inside = 0
total_points = 5000

for _ in range(total_points):
    x = random.uniform(-1, 1)
    y = random.uniform(-1, 1)
    if x**2 + y**2 <= 1:
        inside += 1
        in_x.append(x)
        in_y.append(y)
    else:
        out_x.append(x)
        out_y.append(y)

pi = 4 * inside / total_points
print("Approx Pi =", pi)

# Circle Draw
circle = plt.Circle((0, 0), 1, fill=False, color='blue')
# Figure
fig, ax = plt.subplots(figsize=(6, 6))
ax.add_patch(circle)
# Points
ax.scatter(in_x, in_y, color='green', s=1)
ax.scatter(out_x, out_y, color='red', s=1)
# Design
ax.set_xlim(-1, 1)
ax.set_ylim(-1, 1)
ax.set_aspect('equal')
plt.title(f"Monte Carlo Pi Simulation\nPi ≈ {pi:.5f}")
plt.show()