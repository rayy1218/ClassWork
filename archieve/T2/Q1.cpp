#include <iostream>
#include <cmath>

double getKineticEnergy(const double mass_kg, const double velocity_mps) {
    return (mass_kg * pow(velocity_mps, 2)) / 2;
}

void getKineticEnergy(double *kinetic_energy, double *mass_kg, double *velocity_mps) {
    *kinetic_energy = (*mass_kg * pow(*velocity_mps, 2)) / 2;
}

void getKineticEnergy(double &kinetic_energy, const double &mass_kg, const double &velocity_mps) {
    kinetic_energy = (mass_kg * pow(velocity_mps, 2)) / 2;
}

int main(void) {
    double mass_kg, velocity_mps, kinetic_energy;;
    std::cout << "Enter an object's mass and velocity as required...\n\n";

    std::cout << "Mass in kilogram: ";
    std::cin >> mass_kg;
    std::cout << "Velocity in meters per second: ";
    std::cin >> velocity_mps;

    //By return value
    kinetic_energy = getKineticEnergy(mass_kg, velocity_mps);
    std::cout << "\nThe kinetic energy of this object is " << kinetic_energy << " joules" << std::endl;

    kinetic_energy = 0;

    //By pointer
    {
        double *mass_ptr = &mass_kg, *velocity_ptr = &velocity_mps, *kinetic_energy_ptr = &kinetic_energy;
        getKineticEnergy(kinetic_energy_ptr, mass_ptr, velocity_ptr);

        std::cout << "\nThe kinetic energy of this object is " << *kinetic_energy_ptr << " joules" << std::endl;
    }
    kinetic_energy = 0;

    //By reference
    getKineticEnergy(kinetic_energy, mass_kg, velocity_mps);

    std::cout << "\nThe kinetic energy of this object is " << kinetic_energy << " joules" << std::endl;

}
