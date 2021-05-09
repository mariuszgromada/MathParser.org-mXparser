import { Constant } from './Constant';
import { RecursiveArgument } from './RecursiveArgument';
import { Function } from './Function';
import { Argument } from './Argument';
import { Expression } from './Expression';
import { mXparserConstants } from './mXparserConstants';
import { java } from 'j4ts';
import { Token } from './parsertokens/Token';

/**
 * Tutorial class.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @author          <b>Thilo Schaber</b><br>
 * Adapted for TypeScript use
 * 
 * @version        3.0.0
 * 
 * @see RecursiveArgument
 * @see Expression
 * @see Function
 * @see Constant
 * @class
 */
export class Tutorial {
    public static main(args: string[]) {
        mXparserConstants.consolePrintln$java_lang_Object(mXparserConstants.LICENSE_$LI$());
        const e: Expression = Expression.create();
        mXparserConstants.consolePrintln$java_lang_Object(e.getHelp$());
        mXparserConstants.consolePrintln$();
        mXparserConstants.consolePrintln$java_lang_Object(e.getHelp$java_lang_String("sine"));
        mXparserConstants.consolePrintln$();
        mXparserConstants.consolePrintln$java_lang_Object(e.getHelp$java_lang_String("inver"));
        const e1: Expression = Expression.createWithExpression("2+1");
        mXparserConstants.consolePrintln$java_lang_Object(e1.getExpressionString() + " = " + e1.calculate());
        e1.setExpressionString("2-1");
        mXparserConstants.consolePrintln$java_lang_Object(e1.getExpressionString() + " = " + e1.calculate());
        const e2: Expression = Expression.createWithExpression("2-(32-4)/(23+(4)/(5))-(2-4)*(4+6-98.2)+4");
        mXparserConstants.consolePrintln$java_lang_Object(e2.getExpressionString() + " = " + e2.calculate());
        const e3: Expression = Expression.createWithExpression("2^3+2^(-3)+2^3^(-4)");
        mXparserConstants.consolePrintln$java_lang_Object(e3.getExpressionString() + " = " + e3.calculate());
        const e4: Expression = Expression.createWithExpression("2=3");
        mXparserConstants.consolePrintln$java_lang_Object(e4.getExpressionString() + " = " + e4.calculate());
        const e5: Expression = Expression.createWithExpression("2<3");
        mXparserConstants.consolePrintln$java_lang_Object(e5.getExpressionString() + " = " + e5.calculate());
        const e6: Expression = Expression.createWithExpression("(2=3) | (2<3)");
        mXparserConstants.consolePrintln$java_lang_Object(e6.getExpressionString() + " = " + e6.calculate());
        const e7: Expression = Expression.createWithExpression("(2=3) & (2<3)");
        mXparserConstants.consolePrintln$java_lang_Object(e7.getExpressionString() + " = " + e7.calculate());
        const e8: Expression = Expression.createWithExpression("sin(2)-cos(3)");
        mXparserConstants.consolePrintln$java_lang_Object(e8.getExpressionString() + " = " + e8.calculate());
        const e9: Expression = Expression.createWithExpression("min(3,4) + max(-2,-1)");
        mXparserConstants.consolePrintln$java_lang_Object(e9.getExpressionString() + " = " + e9.calculate());
        const e10: Expression = Expression.createWithExpression("C(10,5)");
        mXparserConstants.consolePrintln$java_lang_Object(e10.getExpressionString() + " = " + e10.calculate());
        const e11: Expression = Expression.createWithExpression("if(2<3,1,0)");
        mXparserConstants.consolePrintln$java_lang_Object(e11.getExpressionString() + " = " + e11.calculate());
        const e12: Expression = Expression.createWithExpression("if(3<2,1,0)");
        mXparserConstants.consolePrintln$java_lang_Object(e12.getExpressionString() + " = " + e12.calculate());
        const e13: Expression = Expression.createWithExpression("if(3<2, 1, if(1=1, 5, 0) )");
        mXparserConstants.consolePrintln$java_lang_Object(e13.getExpressionString() + " = " + e13.calculate());
        const x: Argument = Argument.createArgumentWithNameAndValue("x", 1);
        let y: Argument = Argument.createArgumentWithNameAndValue("y", 2);
        const z: Argument = Argument.createArgumentWithNameAndValue("z", 3);
        let n: Argument = Argument.createArgumentWithNameAndValue("n", 4);
        const e14: Expression = Expression.createWithExpressionAndArgumentValues("sin(x+y)-cos(y/z)", x, y, z);
        mXparserConstants.consolePrintln$java_lang_Object(e14.getExpressionString() + " = " + e14.calculate());
        const e15: Expression = Expression.createWithExpressionAndArgumentValues("if(x>y, x-z, if(y<z, sin(x+y), cos(z)) )", x, y, z);
        mXparserConstants.consolePrintln$java_lang_Object(e15.getExpressionString() + " = " + e15.calculate());
        x.setArgumentValue(5);
        mXparserConstants.consolePrintln$java_lang_Object(x.getArgumentName() + " = " + x.getArgumentValue());
        y = new Argument("y", "2*x+5", x);
        mXparserConstants.consolePrintln$java_lang_Object(y.getArgumentName() + " = " + y.getArgumentValue());
        y = new Argument("y", "sin(y)-z", y, z);
        mXparserConstants.consolePrintln$java_lang_Object(y.getArgumentName() + " = " + y.getArgumentValue());
        y.setArgumentExpressionString("n*sin(y)-z");
        mXparserConstants.consolePrintln$java_lang_Object(y.getArgumentName() + " = ... \n syntax = " + y.checkSyntax() + "\n message = \n" + y.getErrorMessage());
        y.addDefinitions(n);
        mXparserConstants.consolePrintln$java_lang_Object(y.getArgumentName() + " = ... \n syntax = " + y.checkSyntax() + "\n message = \n" + y.getErrorMessage());
        mXparserConstants.consolePrintln$java_lang_Object(y.getArgumentName() + " = " + y.getArgumentValue());
        const e16: Expression = Expression.createWithExpression("sum(i,1,10,i)");
        mXparserConstants.consolePrintln$java_lang_Object(e16.getExpressionString() + " = " + e16.calculate());
        const e17: Expression = Expression.createWithExpression("sum(i,1,10,i,0.5)");
        mXparserConstants.consolePrintln$java_lang_Object(e17.getExpressionString() + " = " + e17.calculate());
        const e18: Expression = Expression.createWithExpression("prod(i,1,5,i)");
        mXparserConstants.consolePrintln$java_lang_Object(e18.getExpressionString() + " = " + e18.calculate());
        const e19: Expression = Expression.createWithExpression("prod(i,1,5,i,0.5)");
        mXparserConstants.consolePrintln$java_lang_Object(e19.getExpressionString() + " = " + e19.calculate());
        const e20: Expression = Expression.createWithExpressionAndArgumentValues("sin(x)-sum(n,0,10,(-1)^n*(x^(2*n+1))/(2*n+1)!)", x);
        x.setArgumentValue(1);
        mXparserConstants.consolePrintln$java_lang_Object("x = " + x.getArgumentValue() + ", " + e20.getExpressionString() + " = " + e20.calculate());
        x.setArgumentValue(5);
        mXparserConstants.consolePrintln$java_lang_Object("x = " + x.getArgumentValue() + ", " + e20.getExpressionString() + " = " + e20.calculate());
        x.setArgumentValue(10);
        mXparserConstants.consolePrintln$java_lang_Object("x = " + x.getArgumentValue() + ", " + e20.getExpressionString() + " = " + e20.calculate());
        const d: Argument = Argument.createArgumentWithNameAndValue("d", 0.1);
        const e21: Expression = Expression.createWithExpressionAndArgumentValues("2*sum(x, -1, 1, d*sqrt(1-x^2), d)", d);
        mXparserConstants.consolePrintln$java_lang_Object("d = " + d.getArgumentValue() + ", " + e21.getExpressionString() + " = " + e21.calculate());
        d.setArgumentValue(0.01);
        mXparserConstants.consolePrintln$java_lang_Object("d = " + d.getArgumentValue() + ", " + e21.getExpressionString() + " = " + e21.calculate());
        const e22: Expression = Expression.createWithExpressionAndArgumentValues("cos(x)-der(sin(x), x)", x);
        mXparserConstants.consolePrintln$java_lang_Object(e22.getExpressionString() + " = " + e22.calculate());
        x.setArgumentValue(0);
        const e23: Expression = Expression.createWithExpressionAndArgumentValues("der-(abs(x), x)", x);
        mXparserConstants.consolePrintln$java_lang_Object("x = " + x.getArgumentValue() + ", " + e23.getExpressionString() + " = " + e23.calculate());
        const e24: Expression = Expression.createWithExpressionAndArgumentValues("der+(abs(x), x)", x);
        mXparserConstants.consolePrintln$java_lang_Object("x = " + x.getArgumentValue() + ", " + e24.getExpressionString() + " = " + e24.calculate());
        x.setArgumentValue(1);
        const e25: Expression = Expression.createWithExpressionAndArgumentValues("cos(x)-der(sum(n,0,10,(-1)^n*(x^(2*n+1))/(2*n+1)!), x)", x);
        x.setArgumentValue(1);
        mXparserConstants.consolePrintln$java_lang_Object("x = " + x.getArgumentValue() + ", " + e25.getExpressionString() + " = " + e25.calculate());
        x.setArgumentValue(5);
        mXparserConstants.consolePrintln$java_lang_Object("x = " + x.getArgumentValue() + ", " + e25.getExpressionString() + " = " + e25.calculate());
        x.setArgumentValue(10);
        mXparserConstants.consolePrintln$java_lang_Object("x = " + x.getArgumentValue() + ", " + e25.getExpressionString() + " = " + e25.calculate());
        const e26: Expression = Expression.createWithExpression("2*int(sqrt(1-x^2), x, -1, 1)");
        mXparserConstants.consolePrintln$java_lang_Object(e26.getExpressionString() + " = " + e26.calculate());
        const e27: Expression = Expression.createWithExpression("pi");
        mXparserConstants.consolePrintln$java_lang_Object(e27.getExpressionString() + " = " + e27.calculate());
        const e28: Expression = Expression.createWithExpression("e");
        mXparserConstants.consolePrintln$java_lang_Object(e28.getExpressionString() + " = " + e28.calculate());
        let f: Function = new Function("f", "x^2", "x");
        const e29: Expression = Expression.createWithExpression("f(2)");
        e29.addDefinitions(f);
        mXparserConstants.consolePrintln$java_lang_Object(e29.getExpressionString() + " = " + e29.calculate());
        f = new Function("f(a,b,c)=a+b+c");
        const e30: Expression = Expression.createWithExpression("f(1, 2, 3)");
        e30.addDefinitions(f);
        mXparserConstants.consolePrintln$java_lang_Object(e30.getExpressionString() + " = " + e30.calculate());
        f = new Function("f", "x^2", "x");
        const g: Function = new Function("g", "f(x)^2", "x");
        g.addDefinitions(f);
        mXparserConstants.consolePrintln$java_lang_Object("g(2) = " + g.calculate$double_A(2));
        const e31: Expression = Expression.createWithExpressionAndArgumentValues("f(x)+g(2*x)", x);
        e31.addDefinitions(f, g);
        mXparserConstants.consolePrintln$java_lang_Object("x = " + x.getArgumentValue() + ", " + e31.getExpressionString() + " = " + e31.calculate());
        x.setArgumentValue(2);
        const e32: Expression = Expression.createWithExpressionAndArgumentValues("der(g(x),x)", x);
        e32.addDefinitions(g);
        mXparserConstants.consolePrintln$java_lang_Object("x = " + x.getArgumentValue() + ", " + e32.getExpressionString() + " = " + e32.calculate());
        f = new Function("f", "sin(x)", "x");
        const F: Function = new Function("F", "int(f(t), t, 0, x)", "x");
        F.addDefinitions(f);
        const e33: Expression = Expression.createWithExpressionAndArgumentValues("f(x) - der(F(x),x)", x);
        e33.addDefinitions(f, F);
        mXparserConstants.consolePrintln$java_lang_Object("x = " + x.getArgumentValue() + ", " + e33.getExpressionString() + " = " + e33.calculate() + ", computing time : " + e33.getComputingTime() + " s.");
        n = new Argument("n");
        const fib1: RecursiveArgument = new RecursiveArgument("fib1", "fib1(n-1)+fib1(n-2)", n);
        fib1.addBaseCase(0, 0);
        fib1.addBaseCase(1, 1);
        mXparserConstants.consolePrintln$java_lang_Object("fib1: ");
        for(let i: number = 0; i <= 10; i++) {mXparserConstants.consolePrint(fib1.getArgumentValue$double(i) + ", ");}
        mXparserConstants.consolePrintln$();
        const fib2: RecursiveArgument = new RecursiveArgument("fib2", "if( n>1, fib2(n-1)+fib2(n-2), if(n=1,1,0) )", n);
        mXparserConstants.consolePrintln$java_lang_Object("fib2: ");
        for(let i: number = 0; i <= 10; i++) {mXparserConstants.consolePrint(fib2.getArgumentValue$double(i) + ", ");}
        mXparserConstants.consolePrintln$();
        const e34: Expression = Expression.createWithExpressionAndArgumentValues("sum(i, 0, 10, fib1(i))", fib1);
        mXparserConstants.consolePrintln$java_lang_Object(e34.getExpressionString() + " = " + e34.calculate() + ", computing time : " + e34.getComputingTime() + " s.");
        const e35: Expression = Expression.createWithExpressionAndArgumentValues("sum(i, 0, 10, fib2(i))", fib2);
        mXparserConstants.consolePrintln$java_lang_Object(e35.getExpressionString() + " = " + e35.calculate() + ", computing time : " + e35.getComputingTime() + " s.");
        const fib3: Function = new Function("fib3", "if(n>1, fib3(n-1)+fib3(n-2), if(n>0,1,0))", "n");
        mXparserConstants.consolePrintln$java_lang_Object("fib3: ");
        for(let i: number = 0; i <= 10; i++) {mXparserConstants.consolePrint(fib3.calculate$double_A(i) + ", ");}
        mXparserConstants.consolePrintln$();
        const e36: Expression = Expression.createWithExpression("sum(i, 0, 10, fib3(i))");
        e36.addDefinitions(fib3);
        mXparserConstants.consolePrintln$java_lang_Object(e36.getExpressionString() + " = " + e36.calculate() + ", computing time : " + e36.getComputingTime() + " s.");
        const T: Function = new Function("T", "if(n>1, 2*x*T(n-1,x)-T(n-2,x), if(n>0, x, 1) )", "n", "x");
        const k: Argument = Argument.createArgumentWithNameAndValue("k", 5);
        const e37: Expression = Expression.createWithExpressionAndArgumentValues("T(k,x) - ( (x + sqrt(x^2-1))^k + (x - sqrt(x^2-1))^k)/2", k, x);
        e37.addDefinitions(T);
        mXparserConstants.consolePrintln$java_lang_Object(e37.getExpressionString() + " = " + e37.calculate() + ", computing time : " + e37.getComputingTime() + " s.");
        const Cnk: Function = new Function("Cnk", "if( k>0, if( k<n, Cnk(n-1,k-1)+Cnk(n-1,k), 1), 1)", "n", "k");
        const e38: Expression = Expression.createWithExpression("C(10,5) - Cnk(10,5)");
        e38.addDefinitions(Cnk);
        mXparserConstants.consolePrintln$java_lang_Object(e38.getExpressionString() + " = " + e38.calculate() + ", computing time : " + e38.getComputingTime() + " s.");
        const a: Constant = new Constant("a", 5);
        const b: Constant = new Constant("b", 10);
        const c: Constant = new Constant("c", 15);
        const e39: Expression = Expression.createWithExpression("a+b+c");
        e39.addDefinitions(a, b, c);
        e39.setVerboseMode();
        e39.checkSyntax$();
        mXparserConstants.consolePrintln$();
        mXparserConstants.consolePrintln$java_lang_Object(e39.getErrorMessage());
        mXparserConstants.consolePrintln$java_lang_Object(e39.getExpressionString() + " = " + e39.calculate() + ", computing time : " + e39.getComputingTime() + " s.");
    }
}
Tutorial["__class"] = "org.mariuszgromada.math.mxparser.Tutorial";
Tutorial.main(null);
