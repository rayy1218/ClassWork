#include <iostream>
#include <cmath>

void getKineticEnergy(double *kinetic_energy, double *mass_kg, double *velocity_mps);

int main(void) {
    double mass_kg, velocity_mps, kinetic_energy;
    std::cout << "Enter an object's mass and velocity as required...\n\n";

    std::cout << "Mass in kilogram: ";
    std::cin >> mass_kg;
    std::cout << "Velocity in meters per second: ";
    std::cin >> velocity_mps;


    double *kinetic_energy_ptr = &kinetic_energy;
    getKineticEnergy(kinetic_energy_ptr, &mass_kg, &velocity_mps);

    std::cout << "\nThe kinetic energy of this object is " << *kinetic_energy_ptr << " joules" << std::endl;

}

//By pointer
void getKineticEnergy(double *kinetic_energy, double *mass_kg, double *velocity_mps) {
    *kinetic_energy = (*mass_kg * pow(*velocity_mps, 2)) / 2;
}

