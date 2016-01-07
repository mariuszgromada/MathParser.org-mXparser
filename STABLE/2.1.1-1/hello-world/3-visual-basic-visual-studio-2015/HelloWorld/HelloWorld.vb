Imports org.mariuszgromada.math.mxparser

Namespace mxparserhelloworld
    Module HelloWorld
        Sub Main()
            Dim eh As Expression = New Expression("5^2 * 7^3 * 11^1 * 67^1 * 49201^1")
            Dim ew As Expression = New Expression("71^1 * 218549^1 * 6195547^1")
            Dim h As String = mXparser.numberToAsciiString(eh.calculate())
            Dim w As String = mXparser.numberToAsciiString(ew.calculate())
            mXparser.consolePrintln(h + " " + w)
        End Sub
    End Module
End Namespace
