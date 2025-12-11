# Ryan's HACKPAD
Hackpad is an 8-key macropad with dual rotary encoders and per-key RGB lighting and uses QMK Firmware.
<img width="665" height="983" alt="Hackpad render" src="https://github.com/user-attachments/assets/4ddc3cc1-5aa8-4c87-85a6-b487075872ac" />
<img width="1231" height="761" alt="Hack pad render 2" src="https://github.com/user-attachments/assets/631952e4-532c-4ef9-822d-48b05d2ca788" />

# Features

- Two-part custom 3D-printed case designed in Fusion 360 — clean, compact, and fits together perfectly.

- 8 mechanical keys (MX-compatible) arranged in a 3×3 layout.

- Dual EC11 rotary encoders — one for volume, one for anything else you want.

- 10 SK6812-MINI-E RGB LEDs — fully addressable per-key lighting + underglow.

- XIAO RP2040 at the heart of it all: tiny, powerful, easy to flash.

- Diode-isolated switch matrix for clean scanning and ghost-free operation.

- Designed for QMK (but fully functional via RP2040 firmware).

- Compact footprint with screw-mounting support at all 4 corners.

- Custom PCB laid out manually in KiCad (with GND pour!).

And yes — it looks awesome. 😎

# CAD Model

The enclosure is split into two printed parts:
Bottom shell — supports the PCB and holds heat-set inserts.
Top plate — holds the switches and encoders in perfect alignment.
Everything assembles using M2 screws and heat-set inserts.
The entire case was modeled in Fusion 360, with careful tolerances for switch fitment and encoder height.
The PCB was imported into Fusion to ensure perfect alignment between the switch cutouts, encoder holes, and standoffs.

# PCB
Here’s the PCB!
- Designed entirely in KiCad, routed by hand, and cleaned with a tidy GND pour.
- MX_V2 footprints for the switches
- Proper diode matrix for 8 keys
- 10 RGB LEDs chained neatly around the pad
- Footprints for two EC11 encoders
- XIAO RP2040 header footprint
- Clean, functional silkscreen and mounting holes
This was my first full custom PCB and it turned out great!
Schematics: <img width="1245" height="883" alt="PCB Schematic" src="https://github.com/user-attachments/assets/8bf6931a-613a-4f9a-b185-e238bc2d134e" />
PCB : <img width="1365" height="960" alt="PCB" src="https://github.com/user-attachments/assets/6953bbf3-6ec9-42d2-9fae-c92f08e57734" />


# BOM
Required

- 8× MX-compatible switches

- 8× Keycaps

- 8× 1N4148 diodes (for matrix)

- 10× SK6812-MINI-E RGB LEDs

-  2× EC11 rotary encoders (with push switch)

- 1× Seeed Studio XIAO RP2040

- 1× Custom PCB

- 1× 3D printed case (top + bottom shells)

- 4× M2 heat-set inserts

- 4× M2 screws for case assembly

Optional / Not Used in This Build

- 0.1 µF capacitor (recommended for LED stability but optional)

- 1 µF capacitor (optional, also for LED power smoothing)

- OLED display (not included in this design but could be added in a future revision)
# EXTRA STUFF
- First time using KiCAD and Fusion 360. I had to revise the model 5 times before I got 0 Errors
- Making this during exam time, so wish me luck!
- Google is actually a lifesaver
