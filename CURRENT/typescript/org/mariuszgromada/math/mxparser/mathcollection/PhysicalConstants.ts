import { Units } from './Units';
import { MathConstants } from './MathConstants';

/**
 * PhysicalConstants - class representing the most important physical constants.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.2.0
 * @class
 */
export class PhysicalConstants {
    /**
     * Light speed
     */
    public static LIGHT_SPEED: number; public static LIGHT_SPEED_$LI$(): number { if (PhysicalConstants.LIGHT_SPEED == null) { PhysicalConstants.LIGHT_SPEED = 2.99792458E8 * Units.METRE_PER_SECOND_$LI$(); }  return PhysicalConstants.LIGHT_SPEED; }

    /**
     * Gravitational constant
     */
    public static GRAVITATIONAL_CONSTANT: number; public static GRAVITATIONAL_CONSTANT_$LI$(): number { if (PhysicalConstants.GRAVITATIONAL_CONSTANT == null) { PhysicalConstants.GRAVITATIONAL_CONSTANT = 6.67408E-11 * Units.METRE3_$LI$() * (1.0 / Units.KILOGRAM) * (1.0 / (Units.SECOND * Units.SECOND)); }  return PhysicalConstants.GRAVITATIONAL_CONSTANT; }

    /**
     * Gravitational acceleration - Earth (normal)
     */
    public static GRAVIT_ACC_EARTH: number; public static GRAVIT_ACC_EARTH_$LI$(): number { if (PhysicalConstants.GRAVIT_ACC_EARTH == null) { PhysicalConstants.GRAVIT_ACC_EARTH = 9.80665 * Units.METRE_PER_SECOND2_$LI$(); }  return PhysicalConstants.GRAVIT_ACC_EARTH; }

    /**
     * Planck constant
     */
    public static PLANCK_CONSTANT: number; public static PLANCK_CONSTANT_$LI$(): number { if (PhysicalConstants.PLANCK_CONSTANT == null) { PhysicalConstants.PLANCK_CONSTANT = 6.62607004E-34 * Units.METRE2_$LI$() * Units.KILOGRAM / Units.SECOND; }  return PhysicalConstants.PLANCK_CONSTANT; }

    /**
     * Reduced Planck constant
     */
    public static PLANCK_CONSTANT_REDUCED: number; public static PLANCK_CONSTANT_REDUCED_$LI$(): number { if (PhysicalConstants.PLANCK_CONSTANT_REDUCED == null) { PhysicalConstants.PLANCK_CONSTANT_REDUCED = PhysicalConstants.PLANCK_CONSTANT_$LI$() / (2 * MathConstants.PI); }  return PhysicalConstants.PLANCK_CONSTANT_REDUCED; }

    /**
     * Planck length
     */
    public static PLANCK_LENGTH: number; public static PLANCK_LENGTH_$LI$(): number { if (PhysicalConstants.PLANCK_LENGTH == null) { PhysicalConstants.PLANCK_LENGTH = 1.616229E-35 * Units.METRE; }  return PhysicalConstants.PLANCK_LENGTH; }

    /**
     * Planck mass
     */
    public static PLANCK_MASS: number; public static PLANCK_MASS_$LI$(): number { if (PhysicalConstants.PLANCK_MASS == null) { PhysicalConstants.PLANCK_MASS = 2.17647E-8 * Units.KILOGRAM; }  return PhysicalConstants.PLANCK_MASS; }

    /**
     * Planck time
     */
    public static PLANCK_TIME: number; public static PLANCK_TIME_$LI$(): number { if (PhysicalConstants.PLANCK_TIME == null) { PhysicalConstants.PLANCK_TIME = 5.39116E-44 * Units.SECOND; }  return PhysicalConstants.PLANCK_TIME; }

    /**
     * Avagadro's constant
     */
    public static N_A: number; public static N_A_$LI$(): number { if (PhysicalConstants.N_A == null) { PhysicalConstants.N_A = 6.022140857E23 / Units.MOLE; }  return PhysicalConstants.N_A; }

    /**
     * Gas constant
     */
    public static R: number; public static R_$LI$(): number { if (PhysicalConstants.R == null) { PhysicalConstants.R = 8.3144598 * Units.JOULE_$LI$() / (Units.KELVIN * Units.MOLE); }  return PhysicalConstants.R; }

    /**
     * Boltzmann constant
     */
    public static BOLTZMANN_CONSTANT: number; public static BOLTZMANN_CONSTANT_$LI$(): number { if (PhysicalConstants.BOLTZMANN_CONSTANT == null) { PhysicalConstants.BOLTZMANN_CONSTANT = PhysicalConstants.R_$LI$() / PhysicalConstants.N_A_$LI$(); }  return PhysicalConstants.BOLTZMANN_CONSTANT; }

    /**
     * Neutron rest mass
     */
    public static NEUTRON_REST_MASS: number; public static NEUTRON_REST_MASS_$LI$(): number { if (PhysicalConstants.NEUTRON_REST_MASS == null) { PhysicalConstants.NEUTRON_REST_MASS = 1.674927471E-27 * Units.KILOGRAM; }  return PhysicalConstants.NEUTRON_REST_MASS; }

    /**
     * Neutron equivalent rest mass
     */
    public static NEUTRON_EQUIVALENT_REST_MASS: number; public static NEUTRON_EQUIVALENT_REST_MASS_$LI$(): number { if (PhysicalConstants.NEUTRON_EQUIVALENT_REST_MASS == null) { PhysicalConstants.NEUTRON_EQUIVALENT_REST_MASS = 939.5654133 * Units.MEGA_ELECTRONO_VOLT_$LI$() / (PhysicalConstants.LIGHT_SPEED_$LI$() * PhysicalConstants.LIGHT_SPEED_$LI$()); }  return PhysicalConstants.NEUTRON_EQUIVALENT_REST_MASS; }

    /**
     * Proton rest mass
     */
    public static PROTON_REST_MASS: number; public static PROTON_REST_MASS_$LI$(): number { if (PhysicalConstants.PROTON_REST_MASS == null) { PhysicalConstants.PROTON_REST_MASS = 1.672621898E-27 * Units.KILOGRAM; }  return PhysicalConstants.PROTON_REST_MASS; }

    /**
     * Proton equivalent rest mass
     */
    public static PROTON_EQUIVALENT_REST_MASS: number; public static PROTON_EQUIVALENT_REST_MASS_$LI$(): number { if (PhysicalConstants.PROTON_EQUIVALENT_REST_MASS == null) { PhysicalConstants.PROTON_EQUIVALENT_REST_MASS = 938.2720813 * Units.MEGA_ELECTRONO_VOLT_$LI$() / (PhysicalConstants.LIGHT_SPEED_$LI$() * PhysicalConstants.LIGHT_SPEED_$LI$()); }  return PhysicalConstants.PROTON_EQUIVALENT_REST_MASS; }

    /**
     * Elementary charge
     */
    public static ELEMENTARY_CHARGE: number; public static ELEMENTARY_CHARGE_$LI$(): number { if (PhysicalConstants.ELEMENTARY_CHARGE == null) { PhysicalConstants.ELEMENTARY_CHARGE = 1.6021766208E-19 * Units.COULOMB; }  return PhysicalConstants.ELEMENTARY_CHARGE; }

    /**
     * Electron rest mass
     */
    public static ELECTRON_REST_MASS: number; public static ELECTRON_REST_MASS_$LI$(): number { if (PhysicalConstants.ELECTRON_REST_MASS == null) { PhysicalConstants.ELECTRON_REST_MASS = 9.10938356E-31 * Units.KILOGRAM; }  return PhysicalConstants.ELECTRON_REST_MASS; }

    /**
     * Electron equivalent rest mass
     */
    public static ELECTRON_EQUIVALENT_REST_MASS: number; public static ELECTRON_EQUIVALENT_REST_MASS_$LI$(): number { if (PhysicalConstants.ELECTRON_EQUIVALENT_REST_MASS == null) { PhysicalConstants.ELECTRON_EQUIVALENT_REST_MASS = 0.5109989461 * Units.MEGA_ELECTRONO_VOLT_$LI$() / (PhysicalConstants.LIGHT_SPEED_$LI$() * PhysicalConstants.LIGHT_SPEED_$LI$()); }  return PhysicalConstants.ELECTRON_EQUIVALENT_REST_MASS; }

    /**
     * Vacuum permittivity
     */
    public static VACUUM_PERMITTIVITY: number; public static VACUUM_PERMITTIVITY_$LI$(): number { if (PhysicalConstants.VACUUM_PERMITTIVITY == null) { PhysicalConstants.VACUUM_PERMITTIVITY = 8.854187817E-12 * Units.AMPERE_$LI$() * Units.AMPERE_$LI$() * Units.SECOND * Units.SECOND * Units.SECOND * Units.SECOND / (Units.METRE3_$LI$() * Units.KILOGRAM); }  return PhysicalConstants.VACUUM_PERMITTIVITY; }

    /**
     * Vacuum permeability
     */
    public static VACUUM_PERMEABILITY: number; public static VACUUM_PERMEABILITY_$LI$(): number { if (PhysicalConstants.VACUUM_PERMEABILITY == null) { PhysicalConstants.VACUUM_PERMEABILITY = 4.0E-7 * Math.PI * Units.KILOGRAM * Units.METRE / (Units.SECOND * Units.SECOND * Units.AMPERE_$LI$() * Units.AMPERE_$LI$()); }  return PhysicalConstants.VACUUM_PERMEABILITY; }
}
PhysicalConstants["__class"] = "org.mariuszgromada.math.mxparser.mathcollection.PhysicalConstants";