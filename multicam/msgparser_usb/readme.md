pprzlink-integration
---

Proof of concept for integrating PPRZLink into Waldo to serve as the module handling reading and parsing of Paparazzi telemetry messages over a serial link.

Goals:
* Make it easier to define which messages are read from the telemetry stream.
* Provide a module with a clearly defined API such that Waldo can use other sources of telemetry in the future, if desired.
