import random
import matplotlib.pyplot as plt
import matplotlib.animation as animation

cus = 20
def random_time(min, max):
    return random.uniform(min, max)

AT = []
current_time = 0
for _ in range(cus):
    current_time += random_time(1, 1.5)
    AT.append(current_time)

ST = []
for _ in range(cus):
    ST.append(random_time(1.6, 2))

SST = []
CT = []
for i in range(cus):
    if i == 0:
        start = AT[i]
    else:
        start = max(AT[i], CT[i - 1])

    finish = start + ST[i]
    SST.append(start)
    CT.append(finish)
WT = [SST[i] - AT[i] for i in range(cus)]





time_points = []
queue_lengths = []
current_time = 0
simulation_time = CT[-1]
print("Time\tCustomers in queue\tTotal arrived customers\tTotal finished customers")

while current_time <= simulation_time:
    current_queue = 0
    i = 0
    while i < cus and AT[i] <= current_time:
        current_queue += 1
        i += 1

    j = 0
    while j < cus and CT[j] <= current_time:
        current_queue -= 1
        j += 1
    time_points.append(current_time)
    queue_lengths.append(current_queue)

    print(f"{current_time:.2f} \t\t\t {current_queue} \t\t {i} \t\t\t {j}")
    print("-------------------------------------------------------------------")
    current_time += 2

print("\n\n\nCustomer No.\tArrival time\tService time\tStart time\tFinish time\tWaiting time")
for i in range(cus):
    print(f"{i+1} \t\t {AT[i]:.2f}\t\t {ST[i]:.2f}\t\t {SST[i]:.2f}\t\t {CT[i]:.2f}\t\t {WT[i]:.2f}")
    print("-------------------------------------------------------------------------------------------------------")

print(f"\n\n\nAvg waiting time = {(sum(WT)/cus):.2f}")
print("\nMax queue length =", max(queue_lengths))
TAT = [CT[i] - AT[i] for i in range(cus)]
print(f"\n\n\nAvg Turn Around Time = {(sum(TAT)/cus):.2f}")
avg_queue_length = sum(queue_lengths) / len(queue_lengths)
print("\nAverage Queue Length =", round(avg_queue_length, 2))


fig, (ax1, ax2) = plt.subplots(1, 2, figsize=(14, 5))
fig.suptitle("Single Server Queue Simulation", fontsize=14)
ax1.set_title("Queue Length Over Time")
ax1.set_xlabel("Time")
ax1.set_ylabel("Number of Customers in System")
ax1.set_xticks(range(0, int(time_points[-1]) + 1, 1))
ax1.set_xlim(0, time_points[-1])
ax1.set_ylim(0, max(queue_lengths) + 1)

line, = ax1.plot([], [], lw=2, color="steelblue")

ax2.set_title("Waiting Time Distribution")
ax2.set_xlabel("Waiting Time")
ax2.set_ylabel("Number of Customers")
max_wait = max(WT) if WT else 1
num_bins = max(1, int(max_wait / 0.5))
ax2.hist(WT, bins=num_bins, color="green", edgecolor="black", linewidth=0.7)

ax2.axvline(
    sum(WT) / cus,
    color="navy",
    linestyle="--",
    linewidth=1.5,
    label=f"Avg wait: {sum(WT)/cus:.2f}"
)

ax2.legend()

plt.tight_layout()
def update(frame):
    line.set_data(time_points[:frame], queue_lengths[:frame])
    return line,

ani = animation.FuncAnimation(
    fig,
    update,
    frames=len(time_points),
    interval=50,
    blit=True
)

plt.show()