import { mXparserConstants } from '../mXparserConstants';
import { java } from 'j4ts/j4ts';
import { javaemul } from 'j4ts/j4ts';

/**
 * Constructor - setting prime cache for a given range if integers
 * @param {number} maxNumInCache Range of integers to be stored in prime cache
 * @class
 */
export class PrimesCache {
    /**
     * Default range of integer to store in cache
     */
    public static DEFAULT_MAX_NUM_IN_CACHE: number = 10000000;

    /**
     * Empty cache status
     */
    public static CACHE_EMPTY: boolean = false;

    /**
     * Cache ready to use
     */
    public static CACHING_FINISHED: boolean = true;

    /**
     * Indicator if given number is a prime
     */
    public static IS_PRIME: number = 1;

    /**
     * Indicator if given number is not a prime
     */
    public static IS_NOT_PRIME: number = 0;

    /**
     * Indicator that the value is not stored
     * in cache
     */
    public static NOT_IN_CACHE: number = -1;

    /**
     * Primes between 0 ... and ... maximumNumberInCache
     * will be cached
     */
    maxNumInCache: number;

    /**
     * Number of cached prime numbers
     */
    numberOfPrimes: number;

    /**
     * Time in seconds showing
     * how long did it take to finalize prime numbers
     * caching.
     */
    computingTime: number;

    /**
     * Caching process status
     */
    cacheStatus: boolean;

    /**
     * Integers table to store number and indicate
     * whether they are prime or not
     */
    isPrime: boolean[];

    /**
     * Internal flag marking that primes cache initialization was successful;
     */
    initSuccessful: boolean;

    /**
     * Eratosthenes Sieve implementation
     * @private
     */
    /*private*/ EratosthenesSieve() {
        const startTime: number = java.lang.System.currentTimeMillis();
        try {
            const size: number = this.maxNumInCache + 1;
            if (size <= 0){
                this.numberOfPrimes = 0;
                this.maxNumInCache = 0;
                this.initSuccessful = false;
                const endTime: number = java.lang.System.currentTimeMillis();
                this.computingTime = (endTime - startTime) / 1000.0;
                return;
            }
            this.isPrime = (s => { let a=[]; while(s-->0) a.push(false); return a; })(size);
            this.numberOfPrimes = 0;
            this.isPrime[0] = false;
            this.isPrime[1] = false;
            for(let i: number = 2; i <= this.maxNumInCache; i++) {{
                this.isPrime[i] = true;
                if (mXparserConstants.isCurrentCalculationCancelled())return;
            };}
            for(let i: number = 2; i * i <= this.maxNumInCache; i++) {{
                if (mXparserConstants.isCurrentCalculationCancelled())return;
                if (this.isPrime[i] === true)for(let j: number = i; i * j <= this.maxNumInCache; j++) {{
                    this.isPrime[i * j] = false;
                    if (mXparserConstants.isCurrentCalculationCancelled())return;
                };}
            };}
            this.initSuccessful = true;
        } catch(e) {
            this.initSuccessful = false;
        } finally {
            const endTime: number = java.lang.System.currentTimeMillis();
            this.computingTime = (endTime - startTime) / 1000.0;
        }
    }

    /**
     * Counting found primes
     * @private
     */
    /*private*/ countPrimes() {
        for(let i: number = 0; i <= this.maxNumInCache; i++) {{
            if (this.isPrime[i] === true)this.numberOfPrimes++;
            if (mXparserConstants.isCurrentCalculationCancelled())return;
        };}
    }

    public constructor(maxNumInCache?: any) {
        if (((typeof maxNumInCache === 'number') || maxNumInCache === null)) {
            let __args = arguments;
            if (this.maxNumInCache === undefined) { this.maxNumInCache = 0; } 
            if (this.numberOfPrimes === undefined) { this.numberOfPrimes = 0; } 
            if (this.computingTime === undefined) { this.computingTime = 0; } 
            if (this.cacheStatus === undefined) { this.cacheStatus = false; } 
            if (this.isPrime === undefined) { this.isPrime = null; } 
            if (this.initSuccessful === undefined) { this.initSuccessful = false; } 
            if (maxNumInCache > 2)this.maxNumInCache = Math.min(maxNumInCache, javaemul.internal.IntegerHelper.MAX_VALUE - 1); else this.maxNumInCache = PrimesCache.DEFAULT_MAX_NUM_IN_CACHE;
            this.initSuccessful = false;
            this.cacheStatus = PrimesCache.CACHE_EMPTY;
            maxNumInCache = PrimesCache.DEFAULT_MAX_NUM_IN_CACHE;
            this.EratosthenesSieve();
            if (this.initSuccessful){
                this.countPrimes();
                this.cacheStatus = PrimesCache.CACHING_FINISHED;
            } else {
                maxNumInCache = 0;
                this.numberOfPrimes = 0;
            }
        } else if (maxNumInCache === undefined) {
            let __args = arguments;
            if (this.maxNumInCache === undefined) { this.maxNumInCache = 0; } 
            if (this.numberOfPrimes === undefined) { this.numberOfPrimes = 0; } 
            if (this.computingTime === undefined) { this.computingTime = 0; } 
            if (this.cacheStatus === undefined) { this.cacheStatus = false; } 
            if (this.isPrime === undefined) { this.isPrime = null; } 
            if (this.initSuccessful === undefined) { this.initSuccessful = false; } 
            this.initSuccessful = false;
            this.cacheStatus = PrimesCache.CACHE_EMPTY;
            this.maxNumInCache = PrimesCache.DEFAULT_MAX_NUM_IN_CACHE;
            this.EratosthenesSieve();
            if (this.initSuccessful){
                this.countPrimes();
                this.cacheStatus = PrimesCache.CACHING_FINISHED;
            } else {
                this.maxNumInCache = 0;
                this.numberOfPrimes = 0;
            }
        } else throw new Error('invalid overload');
    }

    /**
     * Returns computing time of Eratosthenes Sieve
     * @return {number} Computing time in seconds
     */
    public getComputingTime(): number {
        return this.computingTime;
    }

    /**
     * Returns cache status
     * @return {boolean} PrimesCache.CACHE_EMPTY or PrimesCache.CACHING_FINISHED;
     */
    public getCacheStatus(): boolean {
        return this.cacheStatus;
    }

    /**
     * Returns number of found primes.
     * @return {number} Number of found primes.
     */
    public getNumberOfPrimes(): number {
        return this.numberOfPrimes;
    }

    /**
     * Returns cache range.
     * @return {number} Maximum integera number in cache/
     */
    public getMaxNumInCache(): number {
        return this.maxNumInCache;
    }

    /**
     * Check whether given number is prime
     * @param {number} n Given integer number.
     * @return {number} PrimesCache.IS_PRIME or PrimesCache.IS_NOT_PRIME or PrimesCache.NOT_IN_CACHE
     */
    public primeTest(n: number): number {
        if (n <= 1)return PrimesCache.IS_NOT_PRIME;
        if ((n <= this.maxNumInCache) && (this.cacheStatus = PrimesCache.CACHING_FINISHED))if (this.isPrime[n] === true)return PrimesCache.IS_PRIME; else return PrimesCache.IS_NOT_PRIME; else return PrimesCache.NOT_IN_CACHE;
    }

    /**
     * Returns true in case when primes cache initialization was successful,
     * otherwise returns false.
     * 
     * @return {boolean} Returns true in case when primes cache initialization was successful,
     * otherwise returns false.
     */
    public isInitSuccessful(): boolean {
        return this.initSuccessful;
    }

    /**
     * Gets underlying primes cache boolean table
     * @return {boolean[]} Underlying primes cache boolean table
     */
    getPrimes(): boolean[] {
        return this.isPrime;
    }
}
PrimesCache["__class"] = "org.mariuszgromada.math.mxparser.mathcollection.PrimesCache";