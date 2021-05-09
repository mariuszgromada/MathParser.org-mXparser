import { PhysicalConstants } from './PhysicalConstants';
import { Units } from './Units';

/**
 * AstronomicalConstants - class representing the most important astronomical constants.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.0.0
 * @class
 */
export class AstronomicalConstants {
    /**
     * Light year
     */
    public static LIGHT_YEAR: number; public static LIGHT_YEAR_$LI$(): number { if (AstronomicalConstants.LIGHT_YEAR == null) { AstronomicalConstants.LIGHT_YEAR = PhysicalConstants.LIGHT_SPEED_$LI$() * Units.JULIAN_YEAR_$LI$(); }  return AstronomicalConstants.LIGHT_YEAR; }

    /**
     * Astronomical unit
     */
    public static ASTRONOMICAL_UNIT: number; public static ASTRONOMICAL_UNIT_$LI$(): number { if (AstronomicalConstants.ASTRONOMICAL_UNIT == null) { AstronomicalConstants.ASTRONOMICAL_UNIT = 1.495978707E11 * Units.METRE; }  return AstronomicalConstants.ASTRONOMICAL_UNIT; }

    /**
     * Parsec
     */
    public static PARSEC: number; public static PARSEC_$LI$(): number { if (AstronomicalConstants.PARSEC == null) { AstronomicalConstants.PARSEC = 206264.806247096 * AstronomicalConstants.ASTRONOMICAL_UNIT_$LI$(); }  return AstronomicalConstants.PARSEC; }

    /**
     * Kiloparsec
     */
    public static KILOPARSEC: number; public static KILOPARSEC_$LI$(): number { if (AstronomicalConstants.KILOPARSEC == null) { AstronomicalConstants.KILOPARSEC = Units.KILO * AstronomicalConstants.PARSEC_$LI$(); }  return AstronomicalConstants.KILOPARSEC; }

    /**
     * Earth equatorial radius
     */
    public static EARTH_RADIUS_EQUATORIAL: number; public static EARTH_RADIUS_EQUATORIAL_$LI$(): number { if (AstronomicalConstants.EARTH_RADIUS_EQUATORIAL == null) { AstronomicalConstants.EARTH_RADIUS_EQUATORIAL = 6378.137 * Units.KILOMETRE_$LI$(); }  return AstronomicalConstants.EARTH_RADIUS_EQUATORIAL; }

    /**
     * Earth polar radius
     */
    public static EARTH_RADIUS_POLAR: number; public static EARTH_RADIUS_POLAR_$LI$(): number { if (AstronomicalConstants.EARTH_RADIUS_POLAR == null) { AstronomicalConstants.EARTH_RADIUS_POLAR = 6356.7523 * Units.KILOMETRE_$LI$(); }  return AstronomicalConstants.EARTH_RADIUS_POLAR; }

    /**
     * Earth mean radius
     */
    public static EARTH_RADIUS_MEAN: number; public static EARTH_RADIUS_MEAN_$LI$(): number { if (AstronomicalConstants.EARTH_RADIUS_MEAN == null) { AstronomicalConstants.EARTH_RADIUS_MEAN = 6371.0088 * Units.KILOMETRE_$LI$(); }  return AstronomicalConstants.EARTH_RADIUS_MEAN; }

    /**
     * Earth mass
     */
    public static EARTH_MASS: number; public static EARTH_MASS_$LI$(): number { if (AstronomicalConstants.EARTH_MASS == null) { AstronomicalConstants.EARTH_MASS = 5.9722 * Units.YOTTA * Units.KILOGRAM; }  return AstronomicalConstants.EARTH_MASS; }

    /**
     * Earth semi-major axis
     */
    public static EARTH_SEMI_MAJOR_AXIS: number; public static EARTH_SEMI_MAJOR_AXIS_$LI$(): number { if (AstronomicalConstants.EARTH_SEMI_MAJOR_AXIS == null) { AstronomicalConstants.EARTH_SEMI_MAJOR_AXIS = 1.000001018 * AstronomicalConstants.ASTRONOMICAL_UNIT_$LI$(); }  return AstronomicalConstants.EARTH_SEMI_MAJOR_AXIS; }

    /**
     * Moon mean radius
     */
    public static MOON_RADIUS_MEAN: number; public static MOON_RADIUS_MEAN_$LI$(): number { if (AstronomicalConstants.MOON_RADIUS_MEAN == null) { AstronomicalConstants.MOON_RADIUS_MEAN = 1737.1 * Units.KILOMETRE_$LI$(); }  return AstronomicalConstants.MOON_RADIUS_MEAN; }

    /**
     * Moon mass
     */
    public static MOON_MASS: number; public static MOON_MASS_$LI$(): number { if (AstronomicalConstants.MOON_MASS == null) { AstronomicalConstants.MOON_MASS = 0.012300037 * AstronomicalConstants.EARTH_MASS_$LI$(); }  return AstronomicalConstants.MOON_MASS; }

    /**
     * Moon semi-major axis
     */
    public static MONN_SEMI_MAJOR_AXIS: number; public static MONN_SEMI_MAJOR_AXIS_$LI$(): number { if (AstronomicalConstants.MONN_SEMI_MAJOR_AXIS == null) { AstronomicalConstants.MONN_SEMI_MAJOR_AXIS = 384399 * Units.KILOMETRE_$LI$(); }  return AstronomicalConstants.MONN_SEMI_MAJOR_AXIS; }

    /**
     * Solar radius
     */
    public static SOLAR_RADIUS: number; public static SOLAR_RADIUS_$LI$(): number { if (AstronomicalConstants.SOLAR_RADIUS == null) { AstronomicalConstants.SOLAR_RADIUS = 695700 * Units.KILOMETRE_$LI$(); }  return AstronomicalConstants.SOLAR_RADIUS; }

    /**
     * Solar mass
     */
    public static SOLAR_MASS: number; public static SOLAR_MASS_$LI$(): number { if (AstronomicalConstants.SOLAR_MASS == null) { AstronomicalConstants.SOLAR_MASS = 332946.0487 * AstronomicalConstants.EARTH_MASS_$LI$(); }  return AstronomicalConstants.SOLAR_MASS; }

    /**
     * Mercury radius
     */
    public static MERCURY_RADIUS_MEAN: number; public static MERCURY_RADIUS_MEAN_$LI$(): number { if (AstronomicalConstants.MERCURY_RADIUS_MEAN == null) { AstronomicalConstants.MERCURY_RADIUS_MEAN = 2439.7 * Units.KILOMETRE_$LI$(); }  return AstronomicalConstants.MERCURY_RADIUS_MEAN; }

    /**
     * Mercury mass
     */
    public static MERCURY_MASS: number; public static MERCURY_MASS_$LI$(): number { if (AstronomicalConstants.MERCURY_MASS == null) { AstronomicalConstants.MERCURY_MASS = 0.0553 * AstronomicalConstants.EARTH_MASS_$LI$(); }  return AstronomicalConstants.MERCURY_MASS; }

    /**
     * Mercury semi-major axis
     */
    public static MERCURY_SEMI_MAJOR_AXIS: number; public static MERCURY_SEMI_MAJOR_AXIS_$LI$(): number { if (AstronomicalConstants.MERCURY_SEMI_MAJOR_AXIS == null) { AstronomicalConstants.MERCURY_SEMI_MAJOR_AXIS = 0.387098 * AstronomicalConstants.ASTRONOMICAL_UNIT_$LI$(); }  return AstronomicalConstants.MERCURY_SEMI_MAJOR_AXIS; }

    /**
     * Venus radius
     */
    public static VENUS_RADIUS_MEAN: number; public static VENUS_RADIUS_MEAN_$LI$(): number { if (AstronomicalConstants.VENUS_RADIUS_MEAN == null) { AstronomicalConstants.VENUS_RADIUS_MEAN = 6051.8 * Units.KILOMETRE_$LI$(); }  return AstronomicalConstants.VENUS_RADIUS_MEAN; }

    /**
     * Venus mass
     */
    public static VENUS_MASS: number; public static VENUS_MASS_$LI$(): number { if (AstronomicalConstants.VENUS_MASS == null) { AstronomicalConstants.VENUS_MASS = 0.815 * AstronomicalConstants.EARTH_MASS_$LI$(); }  return AstronomicalConstants.VENUS_MASS; }

    /**
     * Venus semi-major axis
     */
    public static VENUS_SEMI_MAJOR_AXIS: number; public static VENUS_SEMI_MAJOR_AXIS_$LI$(): number { if (AstronomicalConstants.VENUS_SEMI_MAJOR_AXIS == null) { AstronomicalConstants.VENUS_SEMI_MAJOR_AXIS = 0.723332 * AstronomicalConstants.ASTRONOMICAL_UNIT_$LI$(); }  return AstronomicalConstants.VENUS_SEMI_MAJOR_AXIS; }

    /**
     * Mars radius
     */
    public static MARS_RADIUS_MEAN: number; public static MARS_RADIUS_MEAN_$LI$(): number { if (AstronomicalConstants.MARS_RADIUS_MEAN == null) { AstronomicalConstants.MARS_RADIUS_MEAN = 3389.5 * Units.KILOMETRE_$LI$(); }  return AstronomicalConstants.MARS_RADIUS_MEAN; }

    /**
     * Mars mass
     */
    public static MARS_MASS: number; public static MARS_MASS_$LI$(): number { if (AstronomicalConstants.MARS_MASS == null) { AstronomicalConstants.MARS_MASS = 0.107 * AstronomicalConstants.EARTH_MASS_$LI$(); }  return AstronomicalConstants.MARS_MASS; }

    /**
     * Mars semi-major axis
     */
    public static MARS_SEMI_MAJOR_AXIS: number; public static MARS_SEMI_MAJOR_AXIS_$LI$(): number { if (AstronomicalConstants.MARS_SEMI_MAJOR_AXIS == null) { AstronomicalConstants.MARS_SEMI_MAJOR_AXIS = 1.523679 * AstronomicalConstants.ASTRONOMICAL_UNIT_$LI$(); }  return AstronomicalConstants.MARS_SEMI_MAJOR_AXIS; }

    /**
     * Jupiter radius
     */
    public static JUPITER_RADIUS_MEAN: number; public static JUPITER_RADIUS_MEAN_$LI$(): number { if (AstronomicalConstants.JUPITER_RADIUS_MEAN == null) { AstronomicalConstants.JUPITER_RADIUS_MEAN = 69911 * Units.KILOMETRE_$LI$(); }  return AstronomicalConstants.JUPITER_RADIUS_MEAN; }

    /**
     * Jupiter mass
     */
    public static JUPITER_MASS: number; public static JUPITER_MASS_$LI$(): number { if (AstronomicalConstants.JUPITER_MASS == null) { AstronomicalConstants.JUPITER_MASS = 317.8 * AstronomicalConstants.EARTH_MASS_$LI$(); }  return AstronomicalConstants.JUPITER_MASS; }

    /**
     * Jupiter semi-major axis
     */
    public static JUPITER_SEMI_MAJOR_AXIS: number; public static JUPITER_SEMI_MAJOR_AXIS_$LI$(): number { if (AstronomicalConstants.JUPITER_SEMI_MAJOR_AXIS == null) { AstronomicalConstants.JUPITER_SEMI_MAJOR_AXIS = 5.2026 * AstronomicalConstants.ASTRONOMICAL_UNIT_$LI$(); }  return AstronomicalConstants.JUPITER_SEMI_MAJOR_AXIS; }

    /**
     * Saturn radius
     */
    public static SATURN_RADIUS_MEAN: number; public static SATURN_RADIUS_MEAN_$LI$(): number { if (AstronomicalConstants.SATURN_RADIUS_MEAN == null) { AstronomicalConstants.SATURN_RADIUS_MEAN = 58232 * Units.KILOMETRE_$LI$(); }  return AstronomicalConstants.SATURN_RADIUS_MEAN; }

    /**
     * Saturn mass
     */
    public static SATURN_MASS: number; public static SATURN_MASS_$LI$(): number { if (AstronomicalConstants.SATURN_MASS == null) { AstronomicalConstants.SATURN_MASS = 95.159 * AstronomicalConstants.EARTH_MASS_$LI$(); }  return AstronomicalConstants.SATURN_MASS; }

    /**
     * Saturn semi-major axis
     */
    public static SATURN_SEMI_MAJOR_AXIS: number; public static SATURN_SEMI_MAJOR_AXIS_$LI$(): number { if (AstronomicalConstants.SATURN_SEMI_MAJOR_AXIS == null) { AstronomicalConstants.SATURN_SEMI_MAJOR_AXIS = 9.5549 * AstronomicalConstants.ASTRONOMICAL_UNIT_$LI$(); }  return AstronomicalConstants.SATURN_SEMI_MAJOR_AXIS; }

    /**
     * Uranus radius
     */
    public static URANUS_RADIUS_MEAN: number; public static URANUS_RADIUS_MEAN_$LI$(): number { if (AstronomicalConstants.URANUS_RADIUS_MEAN == null) { AstronomicalConstants.URANUS_RADIUS_MEAN = 25362 * Units.KILOMETRE_$LI$(); }  return AstronomicalConstants.URANUS_RADIUS_MEAN; }

    /**
     * Uranus mass
     */
    public static URANUS_MASS: number; public static URANUS_MASS_$LI$(): number { if (AstronomicalConstants.URANUS_MASS == null) { AstronomicalConstants.URANUS_MASS = 14.536 * AstronomicalConstants.EARTH_MASS_$LI$(); }  return AstronomicalConstants.URANUS_MASS; }

    /**
     * Uranus semi-major axis
     */
    public static URANUS_SEMI_MAJOR_AXIS: number; public static URANUS_SEMI_MAJOR_AXIS_$LI$(): number { if (AstronomicalConstants.URANUS_SEMI_MAJOR_AXIS == null) { AstronomicalConstants.URANUS_SEMI_MAJOR_AXIS = 19.2184 * AstronomicalConstants.ASTRONOMICAL_UNIT_$LI$(); }  return AstronomicalConstants.URANUS_SEMI_MAJOR_AXIS; }

    /**
     * Neptune radius
     */
    public static NEPTUNE_RADIUS_MEAN: number; public static NEPTUNE_RADIUS_MEAN_$LI$(): number { if (AstronomicalConstants.NEPTUNE_RADIUS_MEAN == null) { AstronomicalConstants.NEPTUNE_RADIUS_MEAN = 24622 * Units.KILOMETRE_$LI$(); }  return AstronomicalConstants.NEPTUNE_RADIUS_MEAN; }

    /**
     * Neptune mass
     */
    public static NEPTUNE_MASS: number; public static NEPTUNE_MASS_$LI$(): number { if (AstronomicalConstants.NEPTUNE_MASS == null) { AstronomicalConstants.NEPTUNE_MASS = 17.147 * AstronomicalConstants.EARTH_MASS_$LI$(); }  return AstronomicalConstants.NEPTUNE_MASS; }

    /**
     * Neptune semi-major axis
     */
    public static NEPTUNE_SEMI_MAJOR_AXIS: number; public static NEPTUNE_SEMI_MAJOR_AXIS_$LI$(): number { if (AstronomicalConstants.NEPTUNE_SEMI_MAJOR_AXIS == null) { AstronomicalConstants.NEPTUNE_SEMI_MAJOR_AXIS = 30.110387 * AstronomicalConstants.ASTRONOMICAL_UNIT_$LI$(); }  return AstronomicalConstants.NEPTUNE_SEMI_MAJOR_AXIS; }
}
AstronomicalConstants["__class"] = "org.mariuszgromada.math.mxparser.mathcollection.AstronomicalConstants";