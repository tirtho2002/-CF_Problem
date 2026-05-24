import random
import matplotlib.pyplot as plt

# Total simulation time
TOTAL_TIME = 12



arrivals = []
services = []

time = 0

while time < TOTAL_TIME:

    time += random.uniform(0, 2)

    if time >= TOTAL_TIME:
        break

    arrivals.append(time)

    services.append(random.uniform(0.5, 3))


wait_times = []
service_end = []


server_free = 0

for i in range(len(arrivals)):

    arrival = arrivals[i]
    service = services[i]

    # Service starts when server is free
    start = max(arrival, server_free)

    # Waiting time
    wait = start - arrival

    # Service finish time
    end = start + service

    # Update server free time
    server_free = end

    wait_times.append(wait)
    service_end.append(end)


events = []

# Arrival = +1
for t in arrivals:
    events.append((t, 1))

# Departure = -1
for t in service_end:
    events.append((t, -1))

events.sort()

queue = 0
times = []
queue_sizes = []

for t, change in events:

    queue += change

    times.append(t)

    # Excluding customer in service
    queue_sizes.append(max(queue - 1, 0))

# --------------------------
# Graph 1 : Queue Size
# --------------------------

plt.step(times, queue_sizes, where='post')

plt.title("Queue Size")
plt.xlabel("Time")
plt.ylabel("People Waiting")
plt.grid()

plt.show()

# --------------------------
# Graph 2 : Waiting Time
# --------------------------

plt.plot(arrivals, wait_times, marker='o')

plt.title("Waiting Time")
plt.xlabel("Arrival Time")
plt.ylabel("Wait")
plt.grid()

plt.show()

# --------------------------
# Final Result
# --------------------------

avg_wait = sum(wait_times) / len(wait_times)

print("Total Customers :", len(arrivals))
print("Average Waiting Time :", round(avg_wait, 2))