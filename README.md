# Sensor Monitor (C++)

A simple C++ program that checks drone sensor readings (altitude, battery, temperature) against safe operating ranges and flags anything out of bounds.

## Files

- **`sensor_monitor_v1.cpp`** — Hardcoded sensor readings. Demonstrates structs, vectors, functions, and loops.
- **`sensor_monitor_v2.cpp`** — Interactive version. Takes sensor data from user input in a loop until you type `done`.

## Concepts used

- Structs (`SensorReading`)
- Vectors (`vector<SensorReading>`)
- Functions (`isSafe()`)
- Loops (`for`, `while`)
- Conditionals
- User input (`cin`)

## How to run

Compile with g++:

```bash
g++ sensor_monitor_v1.cpp -o sensor_monitor_v1
./sensor_monitor_v1
```

```bash
g++ sensor_monitor_v2.cpp -o sensor_monitor_v2
./sensor_monitor_v2
```

Or open either file in Visual Studio / VS Code and run directly.

## Sample output — v1 (hardcoded)

```
Altitude: 120 -- OK
Battery: 15 -- WARNING: out of safe range!
Temperature: 45 -- OK
1 sensor(s) in warning state.
```

## Sample output — v2 (interactive)

```
Enter sensor name (or 'done' to finish): altitude
Enter sensor value: 120
Enter minimum safe value: 0
Enter maximum safe value: 150
Enter sensor name (or 'done' to finish): battery
Enter sensor value: 15
Enter minimum safe value: 20
Enter maximum safe value: 100
Enter sensor name (or 'done' to finish): temperature
Enter sensor value: 45
Enter minimum safe value: -10
Enter maximum safe value: 60
Enter sensor name (or 'done' to finish): done
Warning: Sensor battery is out of safe range!
Total warnings: 1
```

## Notes

- v2 reads sensor names with `cin >>`, so multi-word names (e.g. "wind speed") aren't supported yet — use single words.
- Written and tested in Visual Studio (Windows).

## Author

Chethana — Second-year EEE, RUAS Bengaluru
