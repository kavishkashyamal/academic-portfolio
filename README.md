# Academic Portfolio

A collection of coursework, programming exercises, and scientific simulations
across physics, mathematics, and computer programming.

## Repository Structure

### `physics/`

Python scripts for exploring physical models and calculations:

- `projectile_motion.py` - projectile motion calculations
- `script.py` - physics calculations and experiments
- `black_body_radiation/` - Planck black-body radiation simulation with input validation
- `special_relativity_speeds_for_given_speed/` - special relativity speed calculations

### `maths/`

- `determinant_solver/` - interactive 2x2 and 3x3 determinant solver

### `c_programming/`

Standalone C exercises covering:

- ATM menu logic
- Electricity bill calculation
- Average marks and maximum-value calculations
- Array minimum and maximum values
- Number searching
- Counting occurrences
- Odd and even number counts

## Technologies

- Python 3.8+
- C
- NumPy
- Matplotlib

## Getting Started

Clone the repository and enter its directory:

```bash
git clone https://github.com/kavishkashyamal/academic-portfolio.git
cd academic-portfolio
```

### Run a Python project

The black-body radiation project has its own dependency file:

```bash
cd physics/black_body_radiation
python -m pip install -r requirements.txt
python script.py
```

Other Python scripts can be run from their containing directory, for example:

```bash
python maths/determinant_solver/script.py
python physics/projectile_motion.py
```

### Compile a C program

Compile any C source file with GCC, then run the resulting executable:

```bash
gcc c_programming/atm.c -o atm
./atm
```

On Windows, run the generated executable with `atm.exe`.

## Notes

The projects are independent exercises. Check the README inside
`physics/black_body_radiation/` for project-specific details and requirements.
