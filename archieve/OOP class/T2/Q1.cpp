#include <iostream>
#include <cmath>

double getKineticEnergy(const double mass_kg, const double velocity_mps);

int main(void) {
    double mass_kg, velocity_mps, kinetic_energy;
    std::cout << "Enter an object's mass and velocity as required...\n\n";

    std::cout << "Mass in kilogram: ";
    std::cin >> mass_kg;
    std::cout << "Velocity in meters per second: ";
    std::cin >> velocity_mps;

    //Return value
    kinetic_energy = getKineticEnergy(mass_kg, velocity_mps);
    std::cout << "\nThe kinetic energy of this object is " << kinetic_energy << " joules" << std::endl;
}

//By value and return value
double getKineticEnergy(const double mass_kg, const double velocity_mps) {
    return (mass_kg * pow(velocity_mps, 2)) / 2;
}