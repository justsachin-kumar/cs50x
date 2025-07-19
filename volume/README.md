# 🎵 WAV Volume Modifier

A C program that adjusts the volume of a `.wav` audio file by applying a scaling factor to each audio sample.

## 📁 Description

This program reads a `.wav` file, applies a volume change based on a given factor, and writes the modified audio to a new output file. It handles standard `.wav` files with a 44-byte header and 16-bit audio samples.

---

## 🛠️ Compilation

To compile the program, use `gcc`:

```bash
gcc -o volume volume.c
```

---

## 🚀 Usage

```bash
./volume input.wav output.wav factor
```

- `input.wav` → Path to the input WAV file  
- `output.wav` → Path where the modified file will be saved  
- `factor` → Volume scaling factor (e.g., `0.5` to halve the volume, `2.0` to double it)

### Example

```bash
./volume original.wav louder.wav 1.5
```

This increases the volume of `original.wav` by 50% and saves it as `louder.wav`.

---

## ⚙️ How It Works

1. Reads and copies the first **44 bytes** of the WAV file (header).
2. Reads each audio sample (16-bit signed integer), multiplies it by the `factor`, and writes the result to the output file.
3. Closes both files.

---

## 🧠 Notes

- This program assumes the WAV file is **PCM-encoded** and uses **16-bit samples**.
- Overly large volume factors can lead to **audio clipping** and distortion.
- Invalid files or improper arguments will result in an error message.
