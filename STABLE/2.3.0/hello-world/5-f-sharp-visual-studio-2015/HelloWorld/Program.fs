// Learn more about F# at http://fsharp.org
// See the 'F# Tutorial' project for more help.

open org.mariuszgromada.math.mxparser

[<EntryPoint>]
let main argv = 
    let eh = Expression("5^2 * 7^3 * 11^1 * 67^1 * 49201^1")
    let ew = Expression("71^1 * 218549^1 * 6195547^1")
    let h = mXparser.numberToAsciiString( eh.calculate() )
    let w = mXparser.numberToAsciiString( ew.calculate() )
    mXparser.consolePrintln(h + " " + w);
    0 // return an integer exit code
