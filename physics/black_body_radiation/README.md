# Black Body Radiation Simulation

A small Python script that plots the spectral energy density of black body radiation for a given temperature.

## Files

- `script.py` — calculates Planck's black body distribution and displays the resulting plot.

## Requirements

- Python 3.8+
- `matplotlib`

Install dependencies from the included `requirements.txt`:

```bash
python -m pip install -r requirements.txt
```

## Usage

Run the script from the `black_body_radiation` directory:

```bash
python script.py
```

Enter a temperature in Kelvin when prompted. The script validates the input and rejects invalid or non-positive values.

## Notes

- The script uses Planck's constant, the speed of light, and the Boltzmann constant.
- It plots wavelength versus energy density for a black body at the entered temperature.
- Basic error handling is included to catch invalid input and numerical issues.
